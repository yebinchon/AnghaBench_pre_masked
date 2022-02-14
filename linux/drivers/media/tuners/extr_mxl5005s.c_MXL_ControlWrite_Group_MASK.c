
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef void* u8 ;
typedef int u32 ;
typedef int u16 ;
struct mxl5005s_state {int Init_Ctrl_Num; int CH_Ctrl_Num; int MXL_Ctrl_Num; TYPE_3__* MXL_Ctrl; TYPE_2__* CH_Ctrl; TYPE_1__* Init_Ctrl; } ;
struct dvb_frontend {struct mxl5005s_state* tuner_priv; } ;
struct TYPE_6__ {int Ctrl_Num; int size; int* val; scalar_t__* bit; scalar_t__* addr; } ;
struct TYPE_5__ {int Ctrl_Num; int size; int* val; scalar_t__* bit; scalar_t__* addr; } ;
struct TYPE_4__ {int Ctrl_Num; int size; int* val; scalar_t__* bit; scalar_t__* addr; } ;


 int FUNC_0 (struct dvb_frontend*,void*,void*,void*) ;

__attribute__((used)) static u16 FUNC_1(struct dvb_frontend *VAR_0, u16 VAR_1,
 u32 VAR_2, u16 VAR_3)
{
 struct mxl5005s_state *VAR_4 = VAR_0->tuner_priv;
 u16 VAR_5, VAR_6, VAR_7;
 u32 VAR_8;
 u32 VAR_9;

 if (VAR_3 == 1) {

  for (VAR_5 = 0; VAR_5 < VAR_4->Init_Ctrl_Num; VAR_5++) {

   if (VAR_1 == VAR_4->Init_Ctrl[VAR_5].Ctrl_Num) {

    VAR_8 = 1 << VAR_4->Init_Ctrl[VAR_5].size;
    if (VAR_2 < VAR_8) {
     for (VAR_6 = 0; VAR_6 < VAR_4->Init_Ctrl[VAR_5].size; VAR_6++) {
      VAR_4->Init_Ctrl[VAR_5].val[VAR_6] = (u8)((VAR_2 >> VAR_6) & 0x01);
      FUNC_0(VAR_0, (u8)(VAR_4->Init_Ctrl[VAR_5].addr[VAR_6]),
       (u8)(VAR_4->Init_Ctrl[VAR_5].bit[VAR_6]),
       (u8)((VAR_2>>VAR_6) & 0x01));
     }
     VAR_9 = 0;
     for (VAR_7 = 0; VAR_7 < VAR_4->Init_Ctrl[VAR_5].size; VAR_7++)
      VAR_9 += VAR_4->Init_Ctrl[VAR_5].val[VAR_7] * (1 << VAR_7);
    } else
     return -1;
   }
  }
 }
 if (VAR_3 == 2) {

  for (VAR_5 = 0; VAR_5 < VAR_4->CH_Ctrl_Num; VAR_5++) {

   if (VAR_1 == VAR_4->CH_Ctrl[VAR_5].Ctrl_Num) {

    VAR_8 = 1 << VAR_4->CH_Ctrl[VAR_5].size;
    if (VAR_2 < VAR_8) {
     for (VAR_6 = 0; VAR_6 < VAR_4->CH_Ctrl[VAR_5].size; VAR_6++) {
      VAR_4->CH_Ctrl[VAR_5].val[VAR_6] = (u8)((VAR_2 >> VAR_6) & 0x01);
      FUNC_0(VAR_0, (u8)(VAR_4->CH_Ctrl[VAR_5].addr[VAR_6]),
       (u8)(VAR_4->CH_Ctrl[VAR_5].bit[VAR_6]),
       (u8)((VAR_2>>VAR_6) & 0x01));
     }
     VAR_9 = 0;
     for (VAR_7 = 0; VAR_7 < VAR_4->CH_Ctrl[VAR_5].size; VAR_7++)
      VAR_9 += VAR_4->CH_Ctrl[VAR_5].val[VAR_7] * (1 << VAR_7);
    } else
     return -1;
   }
  }
 }
 return 0 ;
}
