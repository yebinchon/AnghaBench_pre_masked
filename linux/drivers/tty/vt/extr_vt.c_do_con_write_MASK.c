
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;
typedef int u16 ;
struct vt_notifier_param {int c; struct vc_data* vc; } ;
struct vc_data {unsigned int vc_num; int vc_hi_font_mask; scalar_t__ vc_state; int vc_utf_count; int vc_utf_char; int vc_npar; unsigned char vc_attr; unsigned long vc_pos; int vc_x; int vc_cols; scalar_t__ vc_decawm; scalar_t__ vc_need_wrap; scalar_t__ vc_decim; int vc_can_do_color; scalar_t__ vc_disp_ctrl; scalar_t__ vc_utf; } ;
struct tty_struct {int stopped; struct vc_data* driver_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (int *,int ,struct vt_notifier_param*) ;
 int FUNC_1 (struct vc_data*,unsigned long,unsigned long,int*) ;
 scalar_t__ FUNC_2 (struct vc_data*) ;
 scalar_t__ FUNC_3 (struct vc_data*) ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 int FUNC_6 () ;
 int FUNC_7 (struct vc_data*,char) ;
 int FUNC_8 (struct vc_data*) ;
 int FUNC_9 (struct tty_struct*,struct vc_data*,int) ;
 int FUNC_10 (struct vc_data*) ;
 scalar_t__ FUNC_11 () ;
 int FUNC_12 (struct vc_data*,int) ;
 scalar_t__ FUNC_13 (int) ;
 int FUNC_14 (struct vc_data*) ;
 int FUNC_15 () ;
 int FUNC_16 (struct vc_data*) ;
 int FUNC_17 (struct vc_data*,int) ;
 int FUNC_18 (char*) ;
 int FUNC_19 (char*,unsigned int) ;
 int FUNC_20 (unsigned char,int*) ;
 int FUNC_21 (unsigned int) ;
 int FUNC_22 (struct vc_data*,int) ;
 int FUNC_23 (struct vc_data*) ;
 int FUNC_24 (struct vc_data*,int) ;
 int VAR_5 ;

__attribute__((used)) static int FUNC_25(struct tty_struct *VAR_6, const unsigned char *VAR_7, int VAR_8)
{
 int VAR_9, VAR_10, VAR_11, VAR_12, VAR_13 = 0, VAR_14 = -1;
 unsigned int VAR_15;
 unsigned long VAR_16 = 0, VAR_17 = 0;
 struct vc_data *VAR_18;
 unsigned char VAR_19;
 struct vt_notifier_param VAR_20;
 uint8_t VAR_21;
 uint8_t VAR_22;
 uint8_t VAR_23;
 u16 VAR_24, VAR_25;

 if (FUNC_11())
  return VAR_8;

 FUNC_15();

 FUNC_5();
 VAR_18 = VAR_6->driver_data;
 if (VAR_18 == ((void*)0)) {
  FUNC_18("vt: argh, driver_data is NULL !\n");
  FUNC_6();
  return 0;
 }

 VAR_15 = VAR_18->vc_num;
 if (!FUNC_21(VAR_15)) {

  FUNC_19("con_write: tty %d not allocated\n", VAR_15+1);
  FUNC_6();
  return 0;
 }

 VAR_24 = VAR_18->vc_hi_font_mask;
 VAR_25 = VAR_24 ? 0x1ff : 0xff;


 if (FUNC_2(VAR_18))
  FUNC_10(VAR_18);

 VAR_20.vc = VAR_18;

 while (!VAR_6->stopped && VAR_8) {
  int VAR_26 = *VAR_7;
  VAR_9 = VAR_26;
  VAR_7++;
  VAR_13++;
  VAR_8--;
  VAR_21 = 0;
  VAR_22 = 0;
  VAR_23 = 1;


  if (VAR_18->vc_state != VAR_2) {
   VAR_11 = VAR_9;
  } else if (VAR_18->vc_utf && !VAR_18->vc_disp_ctrl) {






rescan_last_byte:
      if ((VAR_9 & 0xc0) == 0x80) {

   static const uint32_t VAR_27[] = { 0x0000007f, 0x000007ff, 0x0000ffff, 0x001fffff, 0x03ffffff, 0x7fffffff };
   if (VAR_18->vc_utf_count) {
       VAR_18->vc_utf_char = (VAR_18->vc_utf_char << 6) | (VAR_9 & 0x3f);
       VAR_18->vc_npar++;
       if (--VAR_18->vc_utf_count) {

    continue;
       }

       VAR_9 = VAR_18->vc_utf_char;

       if (VAR_9 <= VAR_27[VAR_18->vc_npar - 1] ||
     VAR_9 > VAR_27[VAR_18->vc_npar])
    VAR_9 = 0xfffd;
   } else {

       VAR_18->vc_utf_count = 0;
       VAR_9 = 0xfffd;
   }
      } else {

   if (VAR_18->vc_utf_count) {

       VAR_21 = 1;
       VAR_18->vc_utf_count = 0;
       VAR_9 = 0xfffd;
   } else if (VAR_9 > 0x7f) {

       VAR_18->vc_npar = 0;
       if ((VAR_9 & 0xe0) == 0xc0) {
    VAR_18->vc_utf_count = 1;
    VAR_18->vc_utf_char = (VAR_9 & 0x1f);
       } else if ((VAR_9 & 0xf0) == 0xe0) {
    VAR_18->vc_utf_count = 2;
    VAR_18->vc_utf_char = (VAR_9 & 0x0f);
       } else if ((VAR_9 & 0xf8) == 0xf0) {
    VAR_18->vc_utf_count = 3;
    VAR_18->vc_utf_char = (VAR_9 & 0x07);
       } else if ((VAR_9 & 0xfc) == 0xf8) {
    VAR_18->vc_utf_count = 4;
    VAR_18->vc_utf_char = (VAR_9 & 0x03);
       } else if ((VAR_9 & 0xfe) == 0xfc) {
    VAR_18->vc_utf_count = 5;
    VAR_18->vc_utf_char = (VAR_9 & 0x01);
       } else {

    VAR_9 = 0xfffd;
       }
       if (VAR_18->vc_utf_count) {

    continue;
       }
   }

      }



      if ((VAR_9 >= 0xd800 && VAR_9 <= 0xdfff) || VAR_9 == 0xfffe || VAR_9 == 0xffff)
   VAR_9 = 0xfffd;
      VAR_11 = VAR_9;
  } else {
      VAR_11 = FUNC_22(VAR_18, VAR_9);
  }

  VAR_20.c = VAR_11;
  if (FUNC_0(&VAR_5, VAR_4,
     &VAR_20) == VAR_3)
   continue;
                VAR_12 = VAR_11 && (VAR_9 >= 32 ||
       !(VAR_18->vc_disp_ctrl ? (VAR_1 >> VAR_9) & 1 :
      VAR_18->vc_utf || ((VAR_0 >> VAR_9) & 1)))
   && (VAR_9 != 127 || VAR_18->vc_disp_ctrl)
   && (VAR_9 != 128+27);

  if (VAR_18->vc_state == VAR_2 && VAR_12) {
   if (VAR_18->vc_utf && !VAR_18->vc_disp_ctrl) {
    if (FUNC_13(VAR_9))
     VAR_23 = 2;
   }

   VAR_11 = FUNC_7(VAR_18, VAR_11);
   if (VAR_11 & ~VAR_25) {
    if (VAR_11 == -1 || VAR_11 == -2) {
        continue;
    }

    if ((!(VAR_18->vc_utf && !VAR_18->vc_disp_ctrl) || VAR_9 < 128) && !(VAR_9 & ~VAR_25)) {





        VAR_11 = VAR_9;
    } else {

        VAR_11 = FUNC_7(VAR_18, 0xfffd);
        if (VAR_11 < 0) {
     VAR_22 = 1;
     VAR_11 = FUNC_7(VAR_18, '?');
     if (VAR_11 < 0) VAR_11 = '?';
        }
    }
   }

   if (!VAR_22) {
    VAR_19 = VAR_18->vc_attr;
   } else {

    if (!VAR_18->vc_can_do_color) {
     VAR_19 = (VAR_18->vc_attr) ^ 0x08;
    } else if (VAR_18->vc_hi_font_mask == 0x100) {
     VAR_19 = ((VAR_18->vc_attr) & 0x11) | (((VAR_18->vc_attr) & 0xe0) >> 4) | (((VAR_18->vc_attr) & 0x0e) << 4);
    } else {
     VAR_19 = ((VAR_18->vc_attr) & 0x88) | (((VAR_18->vc_attr) & 0x70) >> 4) | (((VAR_18->vc_attr) & 0x07) << 4);
    }
    FUNC_1(VAR_18, VAR_16, VAR_17, &VAR_14);
   }

   VAR_10 = VAR_9;
   while (1) {
    if (VAR_18->vc_need_wrap || VAR_18->vc_decim)
     FUNC_1(VAR_18, VAR_16, VAR_17,
       &VAR_14);
    if (VAR_18->vc_need_wrap) {
     FUNC_8(VAR_18);
     FUNC_14(VAR_18);
    }
    if (VAR_18->vc_decim)
     FUNC_12(VAR_18, 1);
    FUNC_24(VAR_18, VAR_10);
    FUNC_20(VAR_24 ?
          ((VAR_19 << 8) & ~VAR_24) + ((VAR_11 & 0x100) ? VAR_24 : 0) + (VAR_11 & 0xff) :
          (VAR_19 << 8) + VAR_11,
        (u16 *) VAR_18->vc_pos);
    if (FUNC_3(VAR_18) && VAR_14 < 0) {
     VAR_14 = VAR_18->vc_x;
     VAR_16 = VAR_18->vc_pos;
    }
    if (VAR_18->vc_x == VAR_18->vc_cols - 1) {
     VAR_18->vc_need_wrap = VAR_18->vc_decawm;
     VAR_17 = VAR_18->vc_pos + 2;
    } else {
     VAR_18->vc_x++;
     VAR_17 = (VAR_18->vc_pos += 2);
    }

    if (!--VAR_23) break;

    VAR_11 = FUNC_7(VAR_18, ' ');
    if (VAR_11 < 0) VAR_11 = ' ';
    VAR_10 = ' ';
   }
   FUNC_17(VAR_18, VAR_9);

   if (VAR_22)
    FUNC_1(VAR_18, VAR_16, VAR_17, &VAR_14);

   if (VAR_21) {
    VAR_21 = 0;
    VAR_22 = 0;
    VAR_23 = 1;
    VAR_9 = VAR_26;
    goto rescan_last_byte;
   }
   continue;
  }
  FUNC_1(VAR_18, VAR_16, VAR_17, &VAR_14);
  FUNC_9(VAR_6, VAR_18, VAR_26);
 }
 FUNC_1(VAR_18, VAR_16, VAR_17, &VAR_14);
 FUNC_23(VAR_18);
 FUNC_4();
 FUNC_16(VAR_18);
 FUNC_6();
 return VAR_13;
}
