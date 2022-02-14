
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct uctrl_txn {int inbits; int outbits; int opcode; int* inbuf; int* outbuf; } ;
struct uctrl_driver {TYPE_1__* regs; } ;
struct TYPE_2__ {int uctrl_stat; int uctrl_intr; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int,int *) ;

__attribute__((used)) static void FUNC_5(struct uctrl_driver *VAR_0, struct uctrl_txn *VAR_1)
{
 int VAR_2, VAR_3, VAR_4, VAR_5, VAR_6;
 u32 VAR_7;

 VAR_2 = FUNC_3(&VAR_0->regs->uctrl_stat);
 VAR_6 = FUNC_3(&VAR_0->regs->uctrl_intr);
 FUNC_4(VAR_2, &VAR_0->regs->uctrl_stat);

 FUNC_2(("interrupt stat 0x%x int 0x%x\n", VAR_2, VAR_6));

 VAR_3 = VAR_1->inbits;
 VAR_4 = VAR_1->outbits;
 VAR_7 = (VAR_1->opcode << 8);
 FUNC_1(VAR_7);

 VAR_5 = 0;
 while (VAR_3 > 0) {
  VAR_7 = (VAR_1->inbuf[VAR_5] << 8);
  FUNC_1(VAR_7);
  VAR_3--;
  VAR_5++;
 }


 FUNC_0(VAR_7);
 FUNC_2(("ack was %x\n", (VAR_7 >> 8)));

 VAR_5 = 0;
 while (VAR_4 > 0) {
  FUNC_0(VAR_7);
  VAR_1->outbuf[VAR_5] = (VAR_7 >> 8);
  FUNC_2(("set byte to %02x\n", VAR_7));
  VAR_4--;
  VAR_5++;
 }
}
