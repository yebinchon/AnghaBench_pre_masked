
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vc_data {int vc_state; int vc_pos; int vc_x; int* vc_tab_stop; int vc_charset; int vc_disp_ctrl; size_t vc_npar; int* vc_par; int* vc_palette; void* vc_priv; int vc_cursor_type; int vc_complement_mask; int vc_s_complement_mask; int vc_y; int vc_rows; int vc_bottom; int vc_utf; int vc_video_erase_char; int vc_screenbuf_size; void* vc_G1_charset; void* vc_translate; void* vc_G0_charset; int vc_origin; int vc_top; int vc_num; int vc_cols; int vc_bell_duration; int vc_bell_pitch; } ;
struct tty_struct {int dummy; } ;


 void* VAR_0 ;
 void* VAR_1 ;
 void* VAR_2 ;
 void* VAR_3 ;
 void* VAR_4 ;






 void* VAR_5 ;






 void* VAR_6 ;
 void* VAR_7 ;
 void* VAR_8 ;
 size_t VAR_9 ;
 void* VAR_10 ;
 int FUNC_0 (struct vc_data*) ;
 int FUNC_1 () ;
 int FUNC_2 (struct vc_data*,int ) ;
 int FUNC_3 (struct vc_data*) ;
 int FUNC_4 (struct vc_data*,int) ;
 int FUNC_5 (struct vc_data*,int) ;
 int FUNC_6 (struct vc_data*,int) ;
 int FUNC_7 (struct vc_data*,int) ;
 int FUNC_8 (struct vc_data*,int) ;
 int FUNC_9 (struct vc_data*,int) ;
 int FUNC_10 (struct vc_data*,int) ;
 int FUNC_11 (struct vc_data*) ;
 int VAR_11 ;
 int FUNC_12 (struct vc_data*,struct tty_struct*) ;
 int FUNC_13 (struct vc_data*) ;
 int FUNC_14 (struct vc_data*,int ,int) ;
 int FUNC_15 (struct vc_data*,int,int) ;
 int FUNC_16 (struct vc_data*,int,int) ;
 int FUNC_17 (int) ;
 int FUNC_18 (struct vc_data*,int ) ;
 int FUNC_19 (int) ;
 int VAR_12 ;
 int FUNC_20 (int ,int ) ;
 int FUNC_21 (struct vc_data*) ;
 int VAR_13 ;
 int FUNC_22 (struct vc_data*,char) ;
 int FUNC_23 (struct vc_data*) ;
 int FUNC_24 (struct vc_data*,int) ;
 int FUNC_25 (struct tty_struct*) ;
 int FUNC_26 (struct vc_data*) ;
 int FUNC_27 (struct vc_data*) ;
 int FUNC_28 (struct vc_data*) ;
 int FUNC_29 (struct vc_data*,int ) ;
 int FUNC_30 (struct vc_data*,int) ;
 int FUNC_31 (struct vc_data*) ;
 void* FUNC_32 (void*,struct vc_data*) ;
 int FUNC_33 (struct vc_data*) ;
 int FUNC_34 (struct tty_struct*) ;
 int FUNC_35 (int ,int) ;

__attribute__((used)) static void FUNC_36(struct tty_struct *VAR_14, struct vc_data *VAR_15, int VAR_16)
{




 if (VAR_15->vc_state == 133 && VAR_16>=8 && VAR_16<=13)
  return;
 switch (VAR_16) {
 case 0:
  return;
 case 7:
  if (VAR_15->vc_state == 133)
   VAR_15->vc_state = VAR_5;
  else if (VAR_15->vc_bell_duration)
   FUNC_20(VAR_15->vc_bell_pitch, VAR_15->vc_bell_duration);
  return;
 case 8:
  FUNC_0(VAR_15);
  return;
 case 9:
  VAR_15->vc_pos -= (VAR_15->vc_x << 1);
  while (VAR_15->vc_x < VAR_15->vc_cols - 1) {
   VAR_15->vc_x++;
   if (VAR_15->vc_tab_stop[7 & (VAR_15->vc_x >> 5)] & (1 << (VAR_15->vc_x & 31)))
    break;
  }
  VAR_15->vc_pos += (VAR_15->vc_x << 1);
  FUNC_22(VAR_15, '\t');
  return;
 case 10: case 11: case 12:
  FUNC_21(VAR_15);
  if (!FUNC_18(VAR_15, VAR_13))
   return;

 case 13:
  FUNC_3(VAR_15);
  return;
 case 14:
  VAR_15->vc_charset = 1;
  VAR_15->vc_translate = FUNC_32(VAR_15->vc_G1_charset, VAR_15);
  VAR_15->vc_disp_ctrl = 1;
  return;
 case 15:
  VAR_15->vc_charset = 0;
  VAR_15->vc_translate = FUNC_32(VAR_15->vc_G0_charset, VAR_15);
  VAR_15->vc_disp_ctrl = 0;
  return;
 case 24: case 26:
  VAR_15->vc_state = VAR_5;
  return;
 case 27:
  VAR_15->vc_state = 138;
  return;
 case 127:
  FUNC_13(VAR_15);
  return;
 case 128+27:
  VAR_15->vc_state = 128;
  return;
 }
 switch(VAR_15->vc_state) {
 case 138:
  VAR_15->vc_state = VAR_5;
  switch (VAR_16) {
  case '[':
   VAR_15->vc_state = 128;
   return;
  case ']':
   VAR_15->vc_state = 134;
   return;
  case '%':
   VAR_15->vc_state = 131;
   return;
  case 'E':
   FUNC_3(VAR_15);
   FUNC_21(VAR_15);
   return;
  case 'M':
   FUNC_27(VAR_15);
   return;
  case 'D':
   FUNC_21(VAR_15);
   return;
  case 'H':
   VAR_15->vc_tab_stop[7 & (VAR_15->vc_x >> 5)] |= (1 << (VAR_15->vc_x & 31));
   return;
  case 'Z':
   FUNC_25(VAR_14);
   return;
  case '7':
   FUNC_28(VAR_15);
   return;
  case '8':
   FUNC_26(VAR_15);
   return;
  case '(':
   VAR_15->vc_state = 130;
   return;
  case ')':
   VAR_15->vc_state = 129;
   return;
  case '#':
   VAR_15->vc_state = 135;
   return;
  case 'c':
   FUNC_24(VAR_15, 1);
   return;
  case '>':
   FUNC_2(VAR_15, VAR_12);
   return;
  case '=':
   FUNC_29(VAR_15, VAR_12);
   return;
  }
  return;
 case 134:
  if (VAR_16=='P') {
   for (VAR_15->vc_npar = 0; VAR_15->vc_npar < VAR_9; VAR_15->vc_npar++)
    VAR_15->vc_par[VAR_15->vc_npar] = 0;
   VAR_15->vc_npar = 0;
   VAR_15->vc_state = 132;
   return;
  } else if (VAR_16=='R') {
   FUNC_23(VAR_15);
   VAR_15->vc_state = VAR_5;
  } else if (VAR_16>='0' && VAR_16<='9')
   VAR_15->vc_state = 133;
  else
   VAR_15->vc_state = VAR_5;
  return;
 case 132:
  if (FUNC_19(VAR_16)) {
   VAR_15->vc_par[VAR_15->vc_npar++] = FUNC_17(VAR_16);
   if (VAR_15->vc_npar == 7) {
    int VAR_17 = VAR_15->vc_par[0] * 3, VAR_18 = 1;
    VAR_15->vc_palette[VAR_17] = 16 * VAR_15->vc_par[VAR_18++];
    VAR_15->vc_palette[VAR_17++] += VAR_15->vc_par[VAR_18++];
    VAR_15->vc_palette[VAR_17] = 16 * VAR_15->vc_par[VAR_18++];
    VAR_15->vc_palette[VAR_17++] += VAR_15->vc_par[VAR_18++];
    VAR_15->vc_palette[VAR_17] = 16 * VAR_15->vc_par[VAR_18++];
    VAR_15->vc_palette[VAR_17] += VAR_15->vc_par[VAR_18];
    FUNC_31(VAR_15);
    VAR_15->vc_state = VAR_5;
   }
  } else
   VAR_15->vc_state = VAR_5;
  return;
 case 128:
  for (VAR_15->vc_npar = 0; VAR_15->vc_npar < VAR_9; VAR_15->vc_npar++)
   VAR_15->vc_par[VAR_15->vc_npar] = 0;
  VAR_15->vc_npar = 0;
  VAR_15->vc_state = 136;
  if (VAR_16 == '[') {
   VAR_15->vc_state=137;
   return;
  }
  switch (VAR_16) {
  case '?':
   VAR_15->vc_priv = VAR_0;
   return;
  case '>':
   VAR_15->vc_priv = VAR_3;
   return;
  case '=':
   VAR_15->vc_priv = VAR_2;
   return;
  case '<':
   VAR_15->vc_priv = VAR_4;
   return;
  }
  VAR_15->vc_priv = VAR_1;

 case 136:
  if (VAR_16 == ';' && VAR_15->vc_npar < VAR_9 - 1) {
   VAR_15->vc_npar++;
   return;
  } else if (VAR_16>='0' && VAR_16<='9') {
   VAR_15->vc_par[VAR_15->vc_npar] *= 10;
   VAR_15->vc_par[VAR_15->vc_npar] += VAR_16 - '0';
   return;
  }
  if (VAR_16 >= 0x20 && VAR_16 <= 0x3f) {
   VAR_15->vc_state = 139;
   return;
  }
  VAR_15->vc_state = VAR_5;
  switch(VAR_16) {
  case 'h':
   if (VAR_15->vc_priv <= VAR_0)
    FUNC_30(VAR_15, 1);
   return;
  case 'l':
   if (VAR_15->vc_priv <= VAR_0)
    FUNC_30(VAR_15, 0);
   return;
  case 'c':
   if (VAR_15->vc_priv == VAR_0) {
    if (VAR_15->vc_par[0])
     VAR_15->vc_cursor_type = VAR_15->vc_par[0] | (VAR_15->vc_par[1] << 8) | (VAR_15->vc_par[2] << 16);
    else
     VAR_15->vc_cursor_type = VAR_11;
    return;
   }
   break;
  case 'm':
   if (VAR_15->vc_priv == VAR_0) {
    FUNC_1();
    if (VAR_15->vc_par[0])
     VAR_15->vc_complement_mask = VAR_15->vc_par[0] << 8 | VAR_15->vc_par[1];
    else
     VAR_15->vc_complement_mask = VAR_15->vc_s_complement_mask;
    return;
   }
   break;
  case 'n':
   if (VAR_15->vc_priv == VAR_1) {
    if (VAR_15->vc_par[0] == 5)
     FUNC_34(VAR_14);
    else if (VAR_15->vc_par[0] == 6)
     FUNC_12(VAR_15, VAR_14);
   }
   return;
  }
  if (VAR_15->vc_priv != VAR_1) {
   VAR_15->vc_priv = VAR_1;
   return;
  }
  switch(VAR_16) {
  case 'G': case '`':
   if (VAR_15->vc_par[0])
    VAR_15->vc_par[0]--;
   FUNC_16(VAR_15, VAR_15->vc_par[0], VAR_15->vc_y);
   return;
  case 'A':
   if (!VAR_15->vc_par[0])
    VAR_15->vc_par[0]++;
   FUNC_16(VAR_15, VAR_15->vc_x, VAR_15->vc_y - VAR_15->vc_par[0]);
   return;
  case 'B': case 'e':
   if (!VAR_15->vc_par[0])
    VAR_15->vc_par[0]++;
   FUNC_16(VAR_15, VAR_15->vc_x, VAR_15->vc_y + VAR_15->vc_par[0]);
   return;
  case 'C': case 'a':
   if (!VAR_15->vc_par[0])
    VAR_15->vc_par[0]++;
   FUNC_16(VAR_15, VAR_15->vc_x + VAR_15->vc_par[0], VAR_15->vc_y);
   return;
  case 'D':
   if (!VAR_15->vc_par[0])
    VAR_15->vc_par[0]++;
   FUNC_16(VAR_15, VAR_15->vc_x - VAR_15->vc_par[0], VAR_15->vc_y);
   return;
  case 'E':
   if (!VAR_15->vc_par[0])
    VAR_15->vc_par[0]++;
   FUNC_16(VAR_15, 0, VAR_15->vc_y + VAR_15->vc_par[0]);
   return;
  case 'F':
   if (!VAR_15->vc_par[0])
    VAR_15->vc_par[0]++;
   FUNC_16(VAR_15, 0, VAR_15->vc_y - VAR_15->vc_par[0]);
   return;
  case 'd':
   if (VAR_15->vc_par[0])
    VAR_15->vc_par[0]--;
   FUNC_15(VAR_15, VAR_15->vc_x ,VAR_15->vc_par[0]);
   return;
  case 'H': case 'f':
   if (VAR_15->vc_par[0])
    VAR_15->vc_par[0]--;
   if (VAR_15->vc_par[1])
    VAR_15->vc_par[1]--;
   FUNC_15(VAR_15, VAR_15->vc_par[1], VAR_15->vc_par[0]);
   return;
  case 'J':
   FUNC_4(VAR_15, VAR_15->vc_par[0]);
   return;
  case 'K':
   FUNC_5(VAR_15, VAR_15->vc_par[0]);
   return;
  case 'L':
   FUNC_6(VAR_15, VAR_15->vc_par[0]);
   return;
  case 'M':
   FUNC_7(VAR_15, VAR_15->vc_par[0]);
   return;
  case 'P':
   FUNC_8(VAR_15, VAR_15->vc_par[0]);
   return;
  case 'c':
   if (!VAR_15->vc_par[0])
    FUNC_25(VAR_14);
   return;
  case 'g':
   if (!VAR_15->vc_par[0])
    VAR_15->vc_tab_stop[7 & (VAR_15->vc_x >> 5)] &= ~(1 << (VAR_15->vc_x & 31));
   else if (VAR_15->vc_par[0] == 3) {
    VAR_15->vc_tab_stop[0] =
     VAR_15->vc_tab_stop[1] =
     VAR_15->vc_tab_stop[2] =
     VAR_15->vc_tab_stop[3] =
     VAR_15->vc_tab_stop[4] =
     VAR_15->vc_tab_stop[5] =
     VAR_15->vc_tab_stop[6] =
     VAR_15->vc_tab_stop[7] = 0;
   }
   return;
  case 'm':
   FUNC_11(VAR_15);
   return;
  case 'q':

   if (VAR_15->vc_par[0] < 4)
    FUNC_35(VAR_15->vc_num,
         (VAR_15->vc_par[0] < 3) ? VAR_15->vc_par[0] : 4);
   return;
  case 'r':
   if (!VAR_15->vc_par[0])
    VAR_15->vc_par[0]++;
   if (!VAR_15->vc_par[1])
    VAR_15->vc_par[1] = VAR_15->vc_rows;

   if (VAR_15->vc_par[0] < VAR_15->vc_par[1] &&
       VAR_15->vc_par[1] <= VAR_15->vc_rows) {
    VAR_15->vc_top = VAR_15->vc_par[0] - 1;
    VAR_15->vc_bottom = VAR_15->vc_par[1];
    FUNC_15(VAR_15, 0, 0);
   }
   return;
  case 's':
   FUNC_28(VAR_15);
   return;
  case 'u':
   FUNC_26(VAR_15);
   return;
  case 'X':
   FUNC_9(VAR_15, VAR_15->vc_par[0]);
   return;
  case '@':
   FUNC_10(VAR_15, VAR_15->vc_par[0]);
   return;
  case ']':
   FUNC_33(VAR_15);
   return;
  }
  return;
 case 139:
  if (VAR_16 >= 20 && VAR_16 <= 0x3f)
   return;
  VAR_15->vc_state = VAR_5;
  return;
 case 131:
  VAR_15->vc_state = VAR_5;
  switch (VAR_16) {
  case '@':
   VAR_15->vc_utf = 0;
   return;
  case 'G':
  case '8':
   VAR_15->vc_utf = 1;
   return;
  }
  return;
 case 137:
  VAR_15->vc_state = VAR_5;
  return;
 case 135:
  VAR_15->vc_state = VAR_5;
  if (VAR_16 == '8') {

   VAR_15->vc_video_erase_char =
    (VAR_15->vc_video_erase_char & 0xff00) | 'E';
   FUNC_4(VAR_15, 2);
   VAR_15->vc_video_erase_char =
    (VAR_15->vc_video_erase_char & 0xff00) | ' ';
   FUNC_14(VAR_15, VAR_15->vc_origin, VAR_15->vc_screenbuf_size / 2);
  }
  return;
 case 130:
  if (VAR_16 == '0')
   VAR_15->vc_G0_charset = VAR_6;
  else if (VAR_16 == 'B')
   VAR_15->vc_G0_charset = VAR_8;
  else if (VAR_16 == 'U')
   VAR_15->vc_G0_charset = VAR_7;
  else if (VAR_16 == 'K')
   VAR_15->vc_G0_charset = VAR_10;
  if (VAR_15->vc_charset == 0)
   VAR_15->vc_translate = FUNC_32(VAR_15->vc_G0_charset, VAR_15);
  VAR_15->vc_state = VAR_5;
  return;
 case 129:
  if (VAR_16 == '0')
   VAR_15->vc_G1_charset = VAR_6;
  else if (VAR_16 == 'B')
   VAR_15->vc_G1_charset = VAR_8;
  else if (VAR_16 == 'U')
   VAR_15->vc_G1_charset = VAR_7;
  else if (VAR_16 == 'K')
   VAR_15->vc_G1_charset = VAR_10;
  if (VAR_15->vc_charset == 1)
   VAR_15->vc_translate = FUNC_32(VAR_15->vc_G1_charset, VAR_15);
  VAR_15->vc_state = VAR_5;
  return;
 case 133:
  return;
 default:
  VAR_15->vc_state = VAR_5;
 }
}
