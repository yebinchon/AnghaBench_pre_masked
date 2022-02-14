
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ orthresh; scalar_t__ irthresh; } ;
union cvmx_mixx_isr {TYPE_1__ s; int u64; } ;
struct octeon_mgmt {int tx_clean_tasklet; int napi; scalar_t__ mix; } ;
struct net_device {int dummy; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__,int ) ;
 int FUNC_2 (int *) ;
 struct octeon_mgmt* FUNC_3 (struct net_device*) ;
 int FUNC_4 (struct octeon_mgmt*) ;
 int FUNC_5 (struct octeon_mgmt*) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static irqreturn_t FUNC_7(int VAR_2, void *VAR_3)
{
 struct net_device *VAR_4 = VAR_3;
 struct octeon_mgmt *VAR_5 = FUNC_3(VAR_4);
 union cvmx_mixx_isr VAR_6;

 VAR_6.u64 = FUNC_0(VAR_5->mix + VAR_1);


 FUNC_1(VAR_5->mix + VAR_1, VAR_6.u64);
 FUNC_0(VAR_5->mix + VAR_1);

 if (VAR_6.s.irthresh) {
  FUNC_4(VAR_5);
  FUNC_2(&VAR_5->napi);
 }
 if (VAR_6.s.orthresh) {
  FUNC_5(VAR_5);
  FUNC_6(&VAR_5->tx_clean_tasklet);
 }

 return VAR_0;
}
