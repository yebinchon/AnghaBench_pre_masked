
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct bnx2x_virtf {int abs_vfid; } ;
struct bnx2x_rx_mode_ramrod_params {int rx_accept_flags; int ramrod_flags; } ;
struct bnx2x {int dummy; } ;
struct TYPE_2__ {int accept_flags; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,int ) ;
 int VAR_1 ;
 int FUNC_1 (struct bnx2x*,struct bnx2x_rx_mode_ramrod_params*) ;
 int FUNC_2 (struct bnx2x*,int,struct bnx2x_rx_mode_ramrod_params*,struct bnx2x_virtf*,unsigned long) ;
 int FUNC_3 (int ,int *) ;
 TYPE_1__* FUNC_4 (struct bnx2x_virtf*,int) ;

int FUNC_5(struct bnx2x *VAR_2, struct bnx2x_virtf *VAR_3,
      int VAR_4, unsigned long VAR_5)
{
 struct bnx2x_rx_mode_ramrod_params VAR_6;

 FUNC_0(VAR_0, "vf[%d]\n", VAR_3->abs_vfid);

 FUNC_2(VAR_2, VAR_4, &VAR_6, VAR_3, VAR_5);
 FUNC_3(VAR_1, &VAR_6.ramrod_flags);
 FUNC_4(VAR_3, VAR_4)->accept_flags = VAR_6.rx_accept_flags;
 return FUNC_1(VAR_2, &VAR_6);
}
