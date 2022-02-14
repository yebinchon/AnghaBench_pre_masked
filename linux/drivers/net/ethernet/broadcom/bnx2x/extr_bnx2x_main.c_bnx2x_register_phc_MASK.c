
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {int enable; int settime64; int gettime64; int adjtime; int adjfreq; scalar_t__ pps; scalar_t__ n_per_out; scalar_t__ n_ext_ts; scalar_t__ n_alarm; int max_adj; int name; int owner; } ;
struct bnx2x {int * ptp_clock; TYPE_2__* pdev; TYPE_3__ ptp_clock_info; TYPE_1__* dev; } ;
struct TYPE_5__ {int dev; } ;
struct TYPE_4__ {char* name; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int * FUNC_2 (TYPE_3__*,int *) ;
 int FUNC_3 (int ,int,char*,char*) ;

void FUNC_4(struct bnx2x *VAR_7)
{

 VAR_7->ptp_clock_info.owner = VAR_1;
 FUNC_3(VAR_7->ptp_clock_info.name, 16, "%s", VAR_7->dev->name);
 VAR_7->ptp_clock_info.max_adj = VAR_0;
 VAR_7->ptp_clock_info.n_alarm = 0;
 VAR_7->ptp_clock_info.n_ext_ts = 0;
 VAR_7->ptp_clock_info.n_per_out = 0;
 VAR_7->ptp_clock_info.pps = 0;
 VAR_7->ptp_clock_info.adjfreq = VAR_2;
 VAR_7->ptp_clock_info.adjtime = VAR_3;
 VAR_7->ptp_clock_info.gettime64 = VAR_5;
 VAR_7->ptp_clock_info.settime64 = VAR_6;
 VAR_7->ptp_clock_info.enable = VAR_4;

 VAR_7->ptp_clock = FUNC_2(&VAR_7->ptp_clock_info, &VAR_7->pdev->dev);
 if (FUNC_1(VAR_7->ptp_clock)) {
  VAR_7->ptp_clock = ((void*)0);
  FUNC_0("PTP clock registration failed\n");
 }
}
