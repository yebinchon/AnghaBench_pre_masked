
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct go7007 {int height; int width; int encoder_v_offset; int encoder_h_offset; int gop_size; int ipb; int format; int dvd_mode; int modet_enable; int closed_gop; scalar_t__ interlace_coding; TYPE_1__* board_info; int fps_scale; int encoder_h_halve; int encoder_v_halve; int encoder_subsample; } ;
typedef int __le16 ;
struct TYPE_2__ {int sensor_flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int *,int*,int,int) ;

__attribute__((used)) static int FUNC_1(struct go7007 *VAR_7, __le16 *VAR_8, int VAR_9)
{
 int VAR_10 = VAR_7->interlace_coding ? VAR_7->height / 32 : VAR_7->height / 16;
 u16 VAR_11[] = {
  0x8000,
  0,
  0,
  0,
  0,
  0,
  0,
  2,
  ((VAR_7->board_info->sensor_flags & VAR_1) &&
      (!VAR_7->interlace_coding) ?
     (1 << 14) | (1 << 9) : 0) |
   ((VAR_7->encoder_subsample ? 1 : 0) << 8) |
   (VAR_7->board_info->sensor_flags &
    VAR_0),
  ((VAR_7->encoder_v_halve ? 1 : 0) << 14) |
   (VAR_7->encoder_v_halve ? VAR_10 << 9 : VAR_10 << 8) |
   (VAR_7->encoder_h_halve ? 1 << 6 : 0) |
   (VAR_7->encoder_h_halve ? VAR_7->width >> 3 : VAR_7->width >> 4),
  (1 << 15) | (VAR_7->encoder_v_offset << 6) |
   (1 << 7) | (VAR_7->encoder_h_offset >> 2),
  (1 << 6),
  0,
  0,
  ((VAR_7->fps_scale - 1) << 8) |
   (VAR_7->board_info->sensor_flags & VAR_1 ?
      (1 << 7) : 0) |
   0x41,
  VAR_7->ipb ? 0xd4c : 0x36b,
  (VAR_10 << 8) | (VAR_7->width >> 4),
  VAR_7->format == VAR_6 ? 0x0404 : 0,
  (1 << 15) | ((VAR_7->interlace_coding ? 1 : 0) << 13) |
   ((VAR_7->closed_gop ? 1 : 0) << 12) |
   ((VAR_7->format == VAR_6 ? 1 : 0) << 11) |

   ((VAR_7->ipb ? 3 : 0) << 7) |
   ((VAR_7->modet_enable ? 1 : 0) << 2) |
   ((VAR_7->dvd_mode ? 1 : 0) << 1) | 1,
  (VAR_7->format == VAR_4 ? 0x89a0 :
   (VAR_7->format == VAR_5 ? 0x89a0 :
   (VAR_7->format == VAR_3 ? 0x89a0 :
   (VAR_7->format == VAR_6 ? 0x8920 :
   (VAR_7->format == VAR_2 ? 0x8920 : 0))))),
  VAR_7->ipb ? 0x1f15 : 0x1f0b,
  VAR_7->ipb ? 0x0015 : 0x000b,
  VAR_7->ipb ? 0xa800 : 0x5800,
  0xffff,
  0x0020 + 0x034b * 0,
  0x0020 + 0x034b * 1,
  0x0020 + 0x034b * 2,
  0x0020 + 0x034b * 3,
  0x0020 + 0x034b * 4,
  0x0020 + 0x034b * 5,
  VAR_7->ipb ? (VAR_7->gop_size / 3) : VAR_7->gop_size,
  (VAR_7->height >> 4) * (VAR_7->width >> 4) * 110 / 100,
 };

 return FUNC_0(VAR_8, VAR_11, 1, VAR_9);
}
