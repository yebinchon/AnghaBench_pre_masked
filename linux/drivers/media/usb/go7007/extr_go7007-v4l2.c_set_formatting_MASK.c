
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct go7007 {int format; int pali; int gop_size; int ipb; int closed_gop; int repeat_seqhead; int gop_header_enable; int dvd_mode; int bitrate; void* aspect_ratio; int mpeg_video_aspect_ratio; int mpeg_video_rep_seqheader; int mpeg_video_bitrate; int mpeg_video_b_frames; int mpeg_video_gop_closure; int mpeg_video_gop_size; scalar_t__ seq_header_enable; } ;


 void* VAR_0 ;
 void* VAR_1 ;
 void* VAR_2 ;



 int VAR_3 ;



 int FUNC_0 (int ) ;

__attribute__((used)) static void FUNC_1(struct go7007 *VAR_4)
{
 if (VAR_4->format == VAR_3) {
  VAR_4->pali = 0;
  VAR_4->aspect_ratio = VAR_1;
  VAR_4->gop_size = 0;
  VAR_4->ipb = 0;
  VAR_4->closed_gop = 0;
  VAR_4->repeat_seqhead = 0;
  VAR_4->seq_header_enable = 0;
  VAR_4->gop_header_enable = 0;
  VAR_4->dvd_mode = 0;
  return;
 }

 switch (VAR_4->format) {
 case 130:
  VAR_4->pali = 0;
  break;
 default:
 case 129:
  VAR_4->pali = 0x48;
  break;
 case 128:
  VAR_4->pali = 0xf5;
  break;
 }
 VAR_4->gop_size = FUNC_0(VAR_4->mpeg_video_gop_size);
 VAR_4->closed_gop = FUNC_0(VAR_4->mpeg_video_gop_closure);
 VAR_4->ipb = FUNC_0(VAR_4->mpeg_video_b_frames) != 0;
 VAR_4->bitrate = FUNC_0(VAR_4->mpeg_video_bitrate);
 VAR_4->repeat_seqhead = FUNC_0(VAR_4->mpeg_video_rep_seqheader);
 VAR_4->gop_header_enable = 1;
 VAR_4->dvd_mode = 0;
 if (VAR_4->format == 129)
  VAR_4->dvd_mode =
   VAR_4->bitrate == 9800000 &&
   VAR_4->gop_size == 15 &&
   VAR_4->ipb == 0 &&
   VAR_4->repeat_seqhead == 1 &&
   VAR_4->closed_gop;

 switch (FUNC_0(VAR_4->mpeg_video_aspect_ratio)) {
 default:
 case 132:
  VAR_4->aspect_ratio = VAR_1;
  break;
 case 131:
  VAR_4->aspect_ratio = VAR_2;
  break;
 case 133:
  VAR_4->aspect_ratio = VAR_0;
  break;
 }
}
