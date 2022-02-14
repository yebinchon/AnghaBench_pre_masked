
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int rx_errors; } ;
struct TYPE_5__ {TYPE_1__ gen; } ;
struct TYPE_6__ {TYPE_2__ MacStat; } ;
struct s_smc {TYPE_3__ os; } ;


 int FUNC_0 (char*,...) ;

void FUNC_1(struct s_smc *VAR_0, int VAR_1)
{


 FUNC_0("smt_stat_counter\n");
 switch (VAR_1) {
 case 0:
  FUNC_0("Ring operational change.\n");
  break;
 case 1:
  FUNC_0("Receive fifo overflow.\n");
  VAR_0->os.MacStat.gen.rx_errors++;
  break;
 default:
  FUNC_0("Unknown status (%d).\n", VAR_1);
  break;
 }
}
