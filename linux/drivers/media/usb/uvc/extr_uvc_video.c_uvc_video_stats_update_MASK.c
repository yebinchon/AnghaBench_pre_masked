
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct uvc_stats_frame {scalar_t__ first_data; scalar_t__ nb_packets; scalar_t__ nb_empty; scalar_t__ last_pts_diff; scalar_t__ nb_scr_diffs; scalar_t__ nb_scr; scalar_t__ has_initial_pts; scalar_t__ has_early_pts; scalar_t__ nb_invalid; scalar_t__ nb_errors; int scr_sof; int scr_stc; int pts; int nb_pts; int nb_pts_diffs; } ;
struct TYPE_3__ {int nb_scr_diffs_ok; int nb_scr_count_ok; int nb_pts_constant; int nb_pts_initial; int nb_pts_early; int nb_invalid; int nb_errors; int nb_empty; int nb_packets; int nb_frames; } ;
struct TYPE_4__ {struct uvc_stats_frame frame; TYPE_1__ stream; } ;
struct uvc_streaming {TYPE_2__ stats; int sequence; } ;


 int VAR_0 ;
 int FUNC_0 (struct uvc_stats_frame*,int ,int) ;
 int FUNC_1 (int ,char*,int ,scalar_t__,scalar_t__,scalar_t__,int ,scalar_t__,int ,char*,char*,scalar_t__,scalar_t__,int ,int ,int ) ;

__attribute__((used)) static void FUNC_2(struct uvc_streaming *VAR_1)
{
 struct uvc_stats_frame *VAR_2 = &VAR_1->stats.frame;

 FUNC_1(VAR_0, "frame %u stats: %u/%u/%u packets, "
    "%u/%u/%u pts (%searly %sinitial), %u/%u scr, "
    "last pts/stc/sof %u/%u/%u\n",
    VAR_1->sequence, VAR_2->first_data,
    VAR_2->nb_packets - VAR_2->nb_empty, VAR_2->nb_packets,
    VAR_2->nb_pts_diffs, VAR_2->last_pts_diff, VAR_2->nb_pts,
    VAR_2->has_early_pts ? "" : "!",
    VAR_2->has_initial_pts ? "" : "!",
    VAR_2->nb_scr_diffs, VAR_2->nb_scr,
    VAR_2->pts, VAR_2->scr_stc, VAR_2->scr_sof);

 VAR_1->stats.stream.nb_frames++;
 VAR_1->stats.stream.nb_packets += VAR_1->stats.frame.nb_packets;
 VAR_1->stats.stream.nb_empty += VAR_1->stats.frame.nb_empty;
 VAR_1->stats.stream.nb_errors += VAR_1->stats.frame.nb_errors;
 VAR_1->stats.stream.nb_invalid += VAR_1->stats.frame.nb_invalid;

 if (VAR_2->has_early_pts)
  VAR_1->stats.stream.nb_pts_early++;
 if (VAR_2->has_initial_pts)
  VAR_1->stats.stream.nb_pts_initial++;
 if (VAR_2->last_pts_diff <= VAR_2->first_data)
  VAR_1->stats.stream.nb_pts_constant++;
 if (VAR_2->nb_scr >= VAR_2->nb_packets - VAR_2->nb_empty)
  VAR_1->stats.stream.nb_scr_count_ok++;
 if (VAR_2->nb_scr_diffs + 1 == VAR_2->nb_scr)
  VAR_1->stats.stream.nb_scr_diffs_ok++;

 FUNC_0(&VAR_1->stats.frame, 0, sizeof(VAR_1->stats.frame));
}
