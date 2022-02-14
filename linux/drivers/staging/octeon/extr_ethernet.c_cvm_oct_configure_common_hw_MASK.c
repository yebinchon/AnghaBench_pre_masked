
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int pkt_lend; int wqe_lend; } ;
union cvmx_ipd_ctl_status {int u64; TYPE_1__ s; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (scalar_t__,int ,int) ;
 int FUNC_1 () ;
 int FUNC_2 (int,int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int ) ;
 int VAR_7 ;

__attribute__((used)) static void FUNC_5(void)
{

 FUNC_1();
 FUNC_0(VAR_2, VAR_3,
        VAR_7);
 FUNC_0(VAR_4, VAR_5,
        VAR_7);
 if (VAR_0 != VAR_2)
  FUNC_0(VAR_0,
         VAR_1, 1024);
 FUNC_2(VAR_7 / 4, VAR_7 / 8);
}
