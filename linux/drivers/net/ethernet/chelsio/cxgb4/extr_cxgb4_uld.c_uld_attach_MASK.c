
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct cxgb4_lld_info {int dummy; } ;
struct adapter {int flags; TYPE_1__* uld; int pdev_dev; } ;
struct TYPE_2__ {int (* state_change ) (void*,int ) ;void* handle; int name; void* (* add ) (struct cxgb4_lld_info*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (void*) ;
 int FUNC_1 (void*) ;
 int FUNC_2 (int ,char*,int ,int) ;
 void* FUNC_3 (struct cxgb4_lld_info*) ;
 int FUNC_4 (void*,int ) ;
 int FUNC_5 () ;
 int FUNC_6 (struct adapter*,struct cxgb4_lld_info*) ;
 int FUNC_7 (struct adapter*,unsigned int,struct cxgb4_lld_info*) ;

__attribute__((used)) static int FUNC_8(struct adapter *VAR_2, unsigned int VAR_3)
{
 struct cxgb4_lld_info VAR_4;
 void *VAR_5;

 FUNC_6(VAR_2, &VAR_4);
 FUNC_7(VAR_2, VAR_3, &VAR_4);

 VAR_5 = VAR_2->uld[VAR_3].add(&VAR_4);
 if (FUNC_0(VAR_5)) {
  FUNC_2(VAR_2->pdev_dev,
    "could not attach to the %s driver, error %ld\n",
    VAR_2->uld[VAR_3].name, FUNC_1(VAR_5));
  return FUNC_1(VAR_5);
 }

 VAR_2->uld[VAR_3].handle = VAR_5;
 FUNC_5();

 if (VAR_2->flags & VAR_0)
  VAR_2->uld[VAR_3].state_change(VAR_5, VAR_1);

 return 0;
}
