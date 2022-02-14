
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rio_pwrite {int (* pwcback ) (struct rio_mport*,void*,union rio_pw_msg*,int) ;int node; void* context; } ;
struct rio_mport {int lock; int pwrites; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct rio_pwrite* FUNC_0 (int,int ) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

int FUNC_4(struct rio_mport *VAR_2, void *VAR_3,
        int (*VAR_4)(struct rio_mport *VAR_5,
        void *VAR_6, union rio_pw_msg *VAR_7, int VAR_8))
{
 struct rio_pwrite *VAR_9 = FUNC_0(sizeof(*VAR_9), VAR_1);

 if (!VAR_9)
  return -VAR_0;

 VAR_9->pwcback = VAR_4;
 VAR_9->context = VAR_3;
 FUNC_2(&VAR_2->lock);
 FUNC_1(&VAR_9->node, &VAR_2->pwrites);
 FUNC_3(&VAR_2->lock);
 return 0;
}
