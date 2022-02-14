
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ u_short ;
struct TYPE_4__ {scalar_t__ rx2_fifo_start; } ;
struct TYPE_5__ {TYPE_1__ fifo; } ;
struct TYPE_6__ {TYPE_2__ fp; } ;
struct s_smc {TYPE_3__ hw; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ,scalar_t__) ;
 int FUNC_2 (struct s_smc*) ;
 int FUNC_3 (struct s_smc*) ;

__attribute__((used)) static void FUNC_4(struct s_smc *VAR_4)
{
 u_short VAR_5 ;




 VAR_5 = VAR_4->hw.fp.fifo.rx2_fifo_start - 1 ;

 FUNC_1(FUNC_0(VAR_1),VAR_5) ;
 FUNC_1(FUNC_0(VAR_3),VAR_5) ;
 FUNC_1(FUNC_0(VAR_2),VAR_5) ;
 FUNC_1(FUNC_0(VAR_0),VAR_5) ;

 FUNC_2(VAR_4) ;
 FUNC_3(VAR_4) ;
}
