
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int type; } ;
struct bttv {scalar_t__ sd_tvaudio; scalar_t__ sd_msp34xx; TYPE_1__ c; int radio_uses_msp_demodulator; int mute; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ,int ,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;




 int VAR_9 ;
 int FUNC_1 (struct bttv*,int,int ) ;
 int VAR_10 ;
 int FUNC_2 (scalar_t__,int ,int ,int,int ,int ) ;

__attribute__((used)) static int
FUNC_3(struct bttv *VAR_11, int VAR_12)
{
 FUNC_1(VAR_11, VAR_12, VAR_11->mute);

 if (VAR_11->sd_msp34xx) {
  u32 VAR_13;






  switch (VAR_12) {
  case 129:

   if (VAR_11->radio_uses_msp_demodulator) {
    VAR_13 = VAR_3;
    break;
   }
   VAR_13 = FUNC_0(VAR_5, VAR_6,
        VAR_1, VAR_1);
   break;
  case 131:
   VAR_13 = FUNC_0(VAR_4, VAR_6,
        VAR_1, VAR_1);
   break;
  case 130:





   VAR_13 = FUNC_0(VAR_5, VAR_6,
        VAR_1, VAR_1);
   break;
  case 128:
  default:



   if (VAR_11->c.type == VAR_0)
    VAR_13 = FUNC_0(VAR_4, VAR_7, VAR_2, VAR_2);

   else
    VAR_13 = VAR_3;
   break;
  }
  FUNC_2(VAR_11->sd_msp34xx, VAR_9, VAR_10,
          VAR_13, VAR_8, 0);
 }
 if (VAR_11->sd_tvaudio) {
  FUNC_2(VAR_11->sd_tvaudio, VAR_9, VAR_10,
     VAR_12, 0, 0);
 }
 return 0;
}
