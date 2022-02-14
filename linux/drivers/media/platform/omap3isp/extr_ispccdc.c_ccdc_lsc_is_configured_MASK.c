
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int req_lock; int * active; } ;
struct isp_ccdc_device {TYPE_1__ lsc; } ;


 int FUNC_0 (int *,unsigned long) ;
 int FUNC_1 (int *,unsigned long) ;

__attribute__((used)) static inline int FUNC_2(struct isp_ccdc_device *VAR_0)
{
 unsigned long VAR_1;
 int VAR_2;

 FUNC_0(&VAR_0->lsc.req_lock, VAR_1);
 VAR_2 = VAR_0->lsc.active != ((void*)0);
 FUNC_1(&VAR_0->lsc.req_lock, VAR_1);

 return VAR_2;
}
