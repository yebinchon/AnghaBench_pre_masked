
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qcom_smp2p {int ipc_bit; int ipc_offset; int ipc_regmap; scalar_t__ mbox_chan; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (scalar_t__,int ) ;
 int FUNC_2 (scalar_t__,int *) ;
 int FUNC_3 (int ,int ,int ) ;
 int FUNC_4 () ;

__attribute__((used)) static void FUNC_5(struct qcom_smp2p *VAR_0)
{

 FUNC_4();

 if (VAR_0->mbox_chan) {
  FUNC_2(VAR_0->mbox_chan, ((void*)0));
  FUNC_1(VAR_0->mbox_chan, 0);
 } else {
  FUNC_3(VAR_0->ipc_regmap, VAR_0->ipc_offset, FUNC_0(VAR_0->ipc_bit));
 }
}
