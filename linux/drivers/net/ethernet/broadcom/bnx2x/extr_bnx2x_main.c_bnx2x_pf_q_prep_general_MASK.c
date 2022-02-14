
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct bnx2x_general_setup_params {int fp_hsi; int cos; int mtu; int spcl_id; int stat_id; } ;
struct bnx2x_fastpath {int cl_id; } ;
struct bnx2x {TYPE_1__* dev; } ;
struct TYPE_2__ {int mtu; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct bnx2x_fastpath*) ;
 int FUNC_1 (struct bnx2x_fastpath*) ;

__attribute__((used)) static void FUNC_2(struct bnx2x *VAR_2,
 struct bnx2x_fastpath *VAR_3, struct bnx2x_general_setup_params *VAR_4,
 u8 VAR_5)
{
 VAR_4->stat_id = FUNC_1(VAR_3);
 VAR_4->spcl_id = VAR_3->cl_id;


 if (FUNC_0(VAR_3))
  VAR_4->mtu = VAR_0;
 else
  VAR_4->mtu = VAR_2->dev->mtu;

 VAR_4->cos = VAR_5;

 VAR_4->fp_hsi = VAR_1;
}
