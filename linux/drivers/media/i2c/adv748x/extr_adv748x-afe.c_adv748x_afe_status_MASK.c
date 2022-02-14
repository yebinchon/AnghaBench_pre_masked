
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int v4l2_std_id ;
typedef int u32 ;
struct adv748x_state {int dummy; } ;
struct adv748x_afe {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_0 (struct adv748x_state*,int ) ;
 struct adv748x_state* FUNC_1 (struct adv748x_afe*) ;

__attribute__((used)) static int FUNC_2(struct adv748x_afe *VAR_12, u32 *VAR_13,
         v4l2_std_id *VAR_14)
{
 struct adv748x_state *VAR_15 = FUNC_1(VAR_12);
 int VAR_16;


 VAR_16 = FUNC_0(VAR_15, VAR_0);
 if (VAR_16 < 0)
  return VAR_16;

 if (VAR_13)
  *VAR_13 = VAR_16 & VAR_1 ?
    0 : VAR_2;

 if (!VAR_14)
  return 0;


 if (!(VAR_16 & VAR_1)) {
  *VAR_14 = VAR_11;
  return 0;
 }

 switch (VAR_16 & 0x70) {
 case 0x00:
  *VAR_14 = VAR_3;
  break;
 case 0x10:
  *VAR_14 = VAR_4;
  break;
 case 0x20:
  *VAR_14 = VAR_7;
  break;
 case 0x30:
  *VAR_14 = VAR_6;
  break;
 case 0x40:
  *VAR_14 = VAR_5;
  break;
 case 0x50:
  *VAR_14 = VAR_10;
  break;
 case 0x60:
  *VAR_14 = VAR_9 | VAR_8;
  break;
 case 0x70:
  *VAR_14 = VAR_10;
  break;
 default:
  *VAR_14 = VAR_11;
  break;
 }

 return 0;
}
