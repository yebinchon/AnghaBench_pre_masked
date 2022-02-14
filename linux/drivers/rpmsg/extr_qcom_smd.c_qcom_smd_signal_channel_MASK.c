
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qcom_smd_edge {int ipc_bit; int ipc_offset; int ipc_regmap; scalar_t__ mbox_chan; } ;
struct qcom_smd_channel {struct qcom_smd_edge* edge; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (scalar_t__,int ) ;
 int FUNC_2 (scalar_t__,int *) ;
 int FUNC_3 (int ,int ,int ) ;

__attribute__((used)) static void FUNC_4(struct qcom_smd_channel *VAR_0)
{
 struct qcom_smd_edge *VAR_1 = VAR_0->edge;

 if (VAR_1->mbox_chan) {





  FUNC_2(VAR_1->mbox_chan, ((void*)0));
  FUNC_1(VAR_1->mbox_chan, 0);
 } else {
  FUNC_3(VAR_1->ipc_regmap, VAR_1->ipc_offset, FUNC_0(VAR_1->ipc_bit));
 }
}
