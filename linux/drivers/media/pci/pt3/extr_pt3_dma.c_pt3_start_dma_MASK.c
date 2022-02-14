
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct pt3_board {scalar_t__* regs; } ;
struct TYPE_3__ {struct pt3_board* priv; } ;
struct pt3_adapter {TYPE_2__* desc_buf; int adap_idx; TYPE_1__ dvb_adap; } ;
struct TYPE_4__ {int b_addr; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int,scalar_t__) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;

int FUNC_4(struct pt3_adapter *VAR_3)
{
 struct pt3_board *VAR_4 = VAR_3->dvb_adap.priv;
 u32 VAR_5 = FUNC_0(VAR_3->adap_idx);

 FUNC_1(0x02, VAR_4->regs[0] + VAR_5 + VAR_0);
 FUNC_1(FUNC_2(VAR_3->desc_buf[0].b_addr),
   VAR_4->regs[0] + VAR_5 + VAR_2);
 FUNC_1(FUNC_3(VAR_3->desc_buf[0].b_addr),
   VAR_4->regs[0] + VAR_5 + VAR_1);
 FUNC_1(0x01, VAR_4->regs[0] + VAR_5 + VAR_0);
 return 0;
}
