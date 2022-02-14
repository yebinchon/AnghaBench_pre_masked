
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct vc_data {unsigned int vc_rows; int vc_color; unsigned int vc_cols; unsigned int vc_origin; unsigned int vc_size_row; unsigned short vc_video_erase_char; } ;
typedef enum con_scroll { ____Placeholder_con_scroll } con_scroll ;
struct TYPE_3__ {unsigned int topscan; } ;
struct TYPE_4__ {TYPE_1__ cset; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (unsigned int,unsigned int,int) ;
 int FUNC_1 (struct vc_data*,unsigned short,int,int) ;
 TYPE_2__* VAR_2 ;
 unsigned short FUNC_2 (unsigned short*) ;
 int FUNC_3 (unsigned short,unsigned short*) ;
 unsigned int VAR_3 ;

__attribute__((used)) static bool FUNC_4(struct vc_data *VAR_4, unsigned int VAR_5, unsigned int VAR_6,
  enum con_scroll VAR_7, unsigned int VAR_8)
{
 int VAR_9, VAR_10, VAR_11;
 unsigned short *VAR_12, *VAR_13;
 unsigned short VAR_14;

 VAR_1 = 0;

 if (VAR_5 == 0 && VAR_6 == VAR_4->vc_rows) {
  if (VAR_7 == VAR_0) {
   VAR_3 = (VAR_3 + (VAR_8 << 4)) & 0x3ff;
   FUNC_0(VAR_4->vc_rows - VAR_8,
         VAR_4->vc_rows - 1,
         (VAR_4->vc_color & 0xf0) >> 4);
  } else {
   VAR_3 = (VAR_3 + (-VAR_8 << 4)) & 0x3ff;
   FUNC_0(0, VAR_8 - 1,
         (VAR_4->vc_color & 0xf0) >> 4);
  }
  VAR_2->cset.topscan = (VAR_3 - 1) & 0x3ff;
  return 0;
 }

 VAR_9 = (VAR_6 - VAR_5 - VAR_8) * VAR_4->vc_cols;
 if (VAR_7 == VAR_0) {
  VAR_10 = 0;
  VAR_11 = VAR_5;
  VAR_12 = (unsigned short *) (VAR_4->vc_origin +
     VAR_4->vc_size_row * (VAR_5 + VAR_8));
  VAR_13 = (unsigned short *) (VAR_4->vc_origin +
     VAR_4->vc_size_row * VAR_5);
  while (VAR_9--) {
   VAR_14 = FUNC_2(VAR_12++);
   if (VAR_14 != FUNC_2(VAR_13)) {
    FUNC_1(VAR_4, VAR_14, VAR_11, VAR_10);
    FUNC_3(VAR_14, VAR_13);
   }
   VAR_13++;
   if (++VAR_10 == VAR_4->vc_cols) {
    VAR_10 = 0;
    VAR_11++;
   }
  }
  VAR_13 = (unsigned short *) (VAR_4->vc_origin +
     VAR_4->vc_size_row * (VAR_6 - VAR_8));
  VAR_10 = 0;
  VAR_11 = VAR_6 - VAR_8;
  for (VAR_9 = 0; VAR_9 < (VAR_8 * VAR_4->vc_cols); VAR_9++) {
   if (FUNC_2(VAR_13) != VAR_4->vc_video_erase_char) {
    FUNC_1(VAR_4, VAR_4->vc_video_erase_char,
          VAR_11, VAR_10);
    FUNC_3(VAR_4->vc_video_erase_char, VAR_13);
   }
   VAR_13++;
   if (++VAR_10 == VAR_4->vc_cols) {
    VAR_10 = 0;
    VAR_11++;
   }
  }
 } else {
  VAR_10 = VAR_4->vc_cols - 1;
  VAR_11 = VAR_6 - 1;
  VAR_12 = (unsigned short *) (VAR_4->vc_origin +
     VAR_4->vc_size_row * (VAR_6 - VAR_8) - 2);
  VAR_13 = (unsigned short *) (VAR_4->vc_origin +
     VAR_4->vc_size_row * VAR_6 - 2);
  while (VAR_9--) {
   VAR_14 = FUNC_2(VAR_12--);
   if (VAR_14 != FUNC_2(VAR_13)) {
    FUNC_1(VAR_4, VAR_14, VAR_11, VAR_10);
    FUNC_3(VAR_14, VAR_13);
   }
   VAR_13--;
   if (VAR_10-- == 0) {
    VAR_10 = VAR_4->vc_cols - 1;
    VAR_11--;
   }
  }
  VAR_13 = (unsigned short *) (VAR_4->vc_origin +
     VAR_4->vc_size_row * VAR_5);
  VAR_10 = 0;
  VAR_11 = VAR_5;
  for (VAR_9 = 0; VAR_9 < (VAR_8 * VAR_4->vc_cols); VAR_9++) {
   if (FUNC_2(VAR_13) != VAR_4->vc_video_erase_char) {
    FUNC_1(VAR_4, VAR_4->vc_video_erase_char,
          VAR_11, VAR_10);
    FUNC_3(VAR_4->vc_video_erase_char, VAR_13);
   }
   VAR_13++;
   if (++VAR_10 == VAR_4->vc_cols) {
    VAR_10 = 0;
    VAR_11++;
   }
  }
 }
 return 1;
}
