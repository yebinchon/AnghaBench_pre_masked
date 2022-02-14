
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct pt3_board {int* regs; } ;
struct TYPE_2__ {struct pt3_board* priv; } ;
struct pt3_adapter {int adap_idx; TYPE_1__ dvb_adap; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int,int) ;
 int FUNC_3 (int) ;

int FUNC_4(struct pt3_adapter *VAR_3)
{
 struct pt3_board *VAR_4 = VAR_3->dvb_adap.priv;
 u32 VAR_5;
 u32 VAR_6;
 int VAR_7;

 VAR_5 = FUNC_0(VAR_3->adap_idx);
 VAR_6 = FUNC_1(VAR_4->regs[0] + VAR_5 + VAR_2);
 if (!(VAR_6 & 0x01))
  return 0;

 FUNC_2(0x02, VAR_4->regs[0] + VAR_5 + VAR_1);
 for (VAR_7 = 0; VAR_7 < 5; VAR_7++) {
  VAR_6 = FUNC_1(VAR_4->regs[0] + VAR_5 + VAR_2);
  if (!(VAR_6 & 0x01))
   return 0;
  FUNC_3(50);
 }
 return -VAR_0;
}
