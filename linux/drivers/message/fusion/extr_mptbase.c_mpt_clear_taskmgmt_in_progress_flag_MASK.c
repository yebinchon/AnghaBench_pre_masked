
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int taskmgmt_lock; TYPE_1__* alt_ioc; scalar_t__ taskmgmt_quiesce_io; scalar_t__ taskmgmt_in_progress; } ;
struct TYPE_4__ {scalar_t__ taskmgmt_quiesce_io; scalar_t__ taskmgmt_in_progress; } ;
typedef TYPE_2__ MPT_ADAPTER ;


 int FUNC_0 (int *,unsigned long) ;
 int FUNC_1 (int *,unsigned long) ;

void
FUNC_2(MPT_ADAPTER *VAR_0)
{
 unsigned long VAR_1;

 FUNC_0(&VAR_0->taskmgmt_lock, VAR_1);
 VAR_0->taskmgmt_in_progress = 0;
 VAR_0->taskmgmt_quiesce_io = 0;
 if (VAR_0->alt_ioc) {
  VAR_0->alt_ioc->taskmgmt_in_progress = 0;
  VAR_0->alt_ioc->taskmgmt_quiesce_io = 0;
 }
 FUNC_1(&VAR_0->taskmgmt_lock, VAR_1);
}
