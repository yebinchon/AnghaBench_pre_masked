
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct octeon_device {TYPE_1__* pci_dev; } ;
struct net_device {char* name; } ;
struct TYPE_4__ {int max_adj; int enable; int settime64; int gettime64; int adjtime; int adjfreq; scalar_t__ pps; scalar_t__ n_per_out; scalar_t__ n_ext_ts; scalar_t__ n_alarm; int owner; int name; } ;
struct lio {int * ptp_clock; TYPE_2__ ptp_info; scalar_t__ ptp_adjust; int ptp_lock; scalar_t__ oct_dev; } ;
struct TYPE_3__ {int dev; } ;


 struct lio* FUNC_0 (struct net_device*) ;
 scalar_t__ FUNC_1 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int * FUNC_2 (TYPE_2__*,int *) ;
 int FUNC_3 (int ,int,char*,char*) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static void FUNC_5(struct net_device *VAR_6)
{
 struct lio *VAR_7 = FUNC_0(VAR_6);
 struct octeon_device *VAR_8 = (struct octeon_device *)VAR_7->oct_dev;

 FUNC_4(&VAR_7->ptp_lock);

 FUNC_3(VAR_7->ptp_info.name, 16, "%s", VAR_6->name);
 VAR_7->ptp_info.owner = VAR_0;
 VAR_7->ptp_info.max_adj = 250000000;
 VAR_7->ptp_info.n_alarm = 0;
 VAR_7->ptp_info.n_ext_ts = 0;
 VAR_7->ptp_info.n_per_out = 0;
 VAR_7->ptp_info.pps = 0;
 VAR_7->ptp_info.adjfreq = VAR_1;
 VAR_7->ptp_info.adjtime = VAR_2;
 VAR_7->ptp_info.gettime64 = VAR_4;
 VAR_7->ptp_info.settime64 = VAR_5;
 VAR_7->ptp_info.enable = VAR_3;

 VAR_7->ptp_adjust = 0;

 VAR_7->ptp_clock = FUNC_2(&VAR_7->ptp_info,
          &VAR_8->pci_dev->dev);

 if (FUNC_1(VAR_7->ptp_clock))
  VAR_7->ptp_clock = ((void*)0);
}
