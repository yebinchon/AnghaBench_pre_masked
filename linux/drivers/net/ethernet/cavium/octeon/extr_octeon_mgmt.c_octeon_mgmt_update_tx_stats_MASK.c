
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ mcol; scalar_t__ scol; } ;
union cvmx_agl_gmx_txx_stat1 {TYPE_3__ s; void* u64; } ;
struct TYPE_4__ {scalar_t__ xscol; scalar_t__ xsdef; } ;
union cvmx_agl_gmx_txx_stat0 {TYPE_1__ s; void* u64; } ;
struct octeon_mgmt {int lock; scalar_t__ agl; } ;
struct TYPE_5__ {int collisions; int tx_errors; } ;
struct net_device {TYPE_2__ stats; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 void* FUNC_0 (scalar_t__) ;
 struct octeon_mgmt* FUNC_1 (struct net_device*) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_4(struct net_device *VAR_2)
{
 struct octeon_mgmt *VAR_3 = FUNC_1(VAR_2);
 unsigned long VAR_4;

 union cvmx_agl_gmx_txx_stat0 VAR_5;
 union cvmx_agl_gmx_txx_stat1 VAR_6;


 VAR_5 = FUNC_0(VAR_3->agl + VAR_0);
 VAR_6 = FUNC_0(VAR_3->agl + VAR_1);

 if (VAR_5 || VAR_5 || VAR_6 || VAR_6) {

  FUNC_2(&VAR_3->lock, VAR_4);
  VAR_2->stats.tx_errors += VAR_5 + VAR_5;
  VAR_2->stats.collisions += VAR_6 + VAR_6;
  FUNC_3(&VAR_3->lock, VAR_4);
 }
}
