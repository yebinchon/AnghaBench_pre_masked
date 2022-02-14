
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ws ;
struct winsize {unsigned int ws_row; unsigned int ws_col; int ws_ypixel; } ;
struct vc_data {unsigned int vc_resize_user; unsigned int vc_cols; unsigned int vc_rows; unsigned int vc_size_row; unsigned int vc_screenbuf_size; unsigned long vc_origin; unsigned int vc_y; unsigned short* vc_screenbuf; unsigned int vc_bottom; int vc_num; int vc_scan_lines; int vc_x; scalar_t__ vc_top; int vc_video_erase_char; } ;
typedef unsigned short uni_screen ;
struct tty_struct {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 () ;
 int FUNC_1 () ;
 scalar_t__ FUNC_2 (struct vc_data*) ;
 scalar_t__ FUNC_3 (struct vc_data*) ;
 int FUNC_4 (struct vc_data*,int ,unsigned int) ;
 int FUNC_5 (unsigned short*) ;
 unsigned short* FUNC_6 (unsigned int,int ) ;
 int FUNC_7 (struct winsize*,int ,int) ;
 unsigned int FUNC_8 (unsigned int,unsigned int) ;
 int FUNC_9 (struct vc_data*) ;
 unsigned long FUNC_10 (struct vc_data*,unsigned int,unsigned int,unsigned int) ;
 int FUNC_11 (struct vc_data*) ;
 int FUNC_12 (unsigned short*,unsigned short*,unsigned long) ;
 int FUNC_13 (void*,int ,unsigned long) ;
 struct vc_data* VAR_7 ;
 int FUNC_14 (struct vc_data*) ;
 int FUNC_15 (struct tty_struct*,struct winsize*) ;
 int FUNC_16 (struct vc_data*) ;
 int FUNC_17 (struct vc_data*) ;
 unsigned short* FUNC_18 (unsigned int,unsigned int) ;
 int FUNC_19 (unsigned short*,unsigned int,unsigned int,scalar_t__,unsigned long,unsigned int,unsigned int) ;
 int FUNC_20 (struct vc_data*,unsigned short*) ;
 int FUNC_21 (int ,int ,int ) ;

__attribute__((used)) static int FUNC_22(struct tty_struct *VAR_8, struct vc_data *VAR_9,
    unsigned int VAR_10, unsigned int VAR_11)
{
 unsigned long VAR_12, VAR_13, VAR_14, VAR_15, VAR_16, VAR_17 = 0;
 unsigned long VAR_18;
 unsigned int VAR_19, VAR_20, VAR_21;
 unsigned int VAR_22, VAR_23, VAR_24, VAR_25;
 unsigned int VAR_26;
 unsigned short *VAR_27;
 struct uni_screen *VAR_28 = ((void*)0);

 FUNC_0();

 if (!VAR_9)
  return -VAR_2;

 VAR_26 = VAR_9->vc_resize_user;
 VAR_9->vc_resize_user = 0;

 if (VAR_10 > VAR_4 || VAR_11 > VAR_5)
  return -VAR_0;

 VAR_22 = (VAR_10 ? VAR_10 : VAR_9->vc_cols);
 VAR_23 = (VAR_11 ? VAR_11 : VAR_9->vc_rows);
 VAR_24 = VAR_22 << 1;
 VAR_25 = VAR_24 * VAR_23;

 if (VAR_22 == VAR_9->vc_cols && VAR_23 == VAR_9->vc_rows)
  return 0;

 if (VAR_25 > (4 << 20))
  return -VAR_0;
 VAR_27 = FUNC_6(VAR_25, VAR_3);
 if (!VAR_27)
  return -VAR_1;

 if (FUNC_3(VAR_9)) {
  VAR_28 = FUNC_18(VAR_22, VAR_23);
  if (!VAR_28) {
   FUNC_5(VAR_27);
   return -VAR_1;
  }
 }

 if (VAR_9 == VAR_7)
  FUNC_1();

 VAR_19 = VAR_9->vc_rows;
 VAR_20 = VAR_9->vc_size_row;

 VAR_17 = FUNC_10(VAR_9, VAR_22, VAR_23, VAR_26);
 if (VAR_17) {
  FUNC_5(VAR_27);
  FUNC_5(VAR_28);
  return VAR_17;
 }

 VAR_9->vc_rows = VAR_23;
 VAR_9->vc_cols = VAR_22;
 VAR_9->vc_size_row = VAR_24;
 VAR_9->vc_screenbuf_size = VAR_25;

 VAR_15 = FUNC_8(VAR_20, VAR_24);
 VAR_16 = VAR_24 - VAR_15;
 VAR_12 = VAR_9->vc_origin;
 VAR_13 = (long) VAR_27;
 VAR_14 = VAR_13 + VAR_25;

 if (VAR_9->vc_y > VAR_23) {
  if (VAR_19 - VAR_9->vc_y < VAR_23) {




   VAR_21 = (VAR_19 - VAR_23);
  } else {




   VAR_21 = (VAR_9->vc_y - VAR_23/2);
  }
  VAR_12 += VAR_21 * VAR_20;
 } else
  VAR_21 = 0;
 VAR_18 = VAR_12 + VAR_20 * FUNC_8(VAR_19, VAR_23);

 FUNC_19(VAR_28, VAR_22, VAR_23,
       FUNC_3(VAR_9), VAR_15/2, VAR_21,
       FUNC_8(VAR_19, VAR_23));
 FUNC_20(VAR_9, VAR_28);

 FUNC_16(VAR_9);

 while (VAR_12 < VAR_18) {
  FUNC_12((unsigned short *) VAR_13,
       (unsigned short *) VAR_12, VAR_15);
  if (VAR_16)
   FUNC_13((void *)(VAR_13 + VAR_15),
        VAR_9->vc_video_erase_char, VAR_16);
  VAR_12 += VAR_20;
  VAR_13 += VAR_24;
 }
 if (VAR_14 > VAR_13)
  FUNC_13((void *)VAR_13, VAR_9->vc_video_erase_char,
       VAR_14 - VAR_13);
 FUNC_5(VAR_9->vc_screenbuf);
 VAR_9->vc_screenbuf = VAR_27;
 VAR_9->vc_screenbuf_size = VAR_25;
 FUNC_14(VAR_9);


 VAR_9->vc_top = 0;
 VAR_9->vc_bottom = VAR_9->vc_rows;
 FUNC_4(VAR_9, VAR_9->vc_x, VAR_9->vc_y);
 FUNC_11(VAR_9);

 if (VAR_8) {


  struct winsize VAR_29;
  FUNC_7(&VAR_29, 0, sizeof(VAR_29));
  VAR_29.ws_row = VAR_9->vc_rows;
  VAR_29.ws_col = VAR_9->vc_cols;
  VAR_29.ws_ypixel = VAR_9->vc_scan_lines;
  FUNC_15(VAR_8, &VAR_29);
 }

 if (FUNC_2(VAR_9))
  FUNC_17(VAR_9);
 FUNC_21(VAR_6, VAR_9->vc_num, VAR_9->vc_num);
 FUNC_9(VAR_9);
 return VAR_17;
}
