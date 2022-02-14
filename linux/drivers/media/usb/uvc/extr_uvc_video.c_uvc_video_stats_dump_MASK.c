
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int scr_sof_count; int max_sof; int min_sof; int nb_scr_diffs_ok; int nb_scr_count_ok; int nb_pts_constant; int nb_pts_initial; int nb_pts_early; int nb_invalid; int nb_errors; int nb_empty; int nb_packets; int nb_frames; int start_ts; int stop_ts; } ;
struct TYPE_4__ {TYPE_1__ stream; } ;
struct uvc_streaming {TYPE_2__ stats; } ;


 unsigned int FUNC_0 (int ,int ) ;
 scalar_t__ FUNC_1 (char*,size_t,char*,int ,int ,...) ;

size_t FUNC_2(struct uvc_streaming *VAR_0, char *VAR_1,
       size_t VAR_2)
{
 unsigned int VAR_3;
 unsigned int VAR_4;
 size_t VAR_5 = 0;




 VAR_4 = FUNC_0(VAR_0->stats.stream.stop_ts,
      VAR_0->stats.stream.start_ts);
 if (VAR_4 != 0)
  VAR_3 = VAR_0->stats.stream.scr_sof_count * 1000
        / VAR_4;
 else
  VAR_3 = 0;

 VAR_5 += FUNC_1(VAR_1 + VAR_5, VAR_2 - VAR_5,
      "frames:  %u\npackets: %u\nempty:   %u\n"
      "errors:  %u\ninvalid: %u\n",
      VAR_0->stats.stream.nb_frames,
      VAR_0->stats.stream.nb_packets,
      VAR_0->stats.stream.nb_empty,
      VAR_0->stats.stream.nb_errors,
      VAR_0->stats.stream.nb_invalid);
 VAR_5 += FUNC_1(VAR_1 + VAR_5, VAR_2 - VAR_5,
      "pts: %u early, %u initial, %u ok\n",
      VAR_0->stats.stream.nb_pts_early,
      VAR_0->stats.stream.nb_pts_initial,
      VAR_0->stats.stream.nb_pts_constant);
 VAR_5 += FUNC_1(VAR_1 + VAR_5, VAR_2 - VAR_5,
      "scr: %u count ok, %u diff ok\n",
      VAR_0->stats.stream.nb_scr_count_ok,
      VAR_0->stats.stream.nb_scr_diffs_ok);
 VAR_5 += FUNC_1(VAR_1 + VAR_5, VAR_2 - VAR_5,
      "sof: %u <= sof <= %u, freq %u.%03u kHz\n",
      VAR_0->stats.stream.min_sof,
      VAR_0->stats.stream.max_sof,
      VAR_3 / 1000, VAR_3 % 1000);

 return VAR_5;
}
