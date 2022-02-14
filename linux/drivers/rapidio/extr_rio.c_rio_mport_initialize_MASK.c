
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rio_mport {int pwrites; scalar_t__ pwe_refcnt; int lock; int * nscan; scalar_t__ id; int host_deviceid; int state; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *) ;
 scalar_t__ VAR_3 ;
 int FUNC_3 (char*) ;
 int FUNC_4 (scalar_t__) ;

int FUNC_5(struct rio_mport *VAR_4)
{
 if (VAR_3 >= VAR_2) {
  FUNC_3("RIO: reached specified max number of mports\n");
  return -VAR_0;
 }

 FUNC_1(&VAR_4->state, VAR_1);
 VAR_4->id = VAR_3++;
 VAR_4->host_deviceid = FUNC_4(VAR_4->id);
 VAR_4->nscan = ((void*)0);
 FUNC_2(&VAR_4->lock);
 VAR_4->pwe_refcnt = 0;
 FUNC_0(&VAR_4->pwrites);

 return 0;
}
