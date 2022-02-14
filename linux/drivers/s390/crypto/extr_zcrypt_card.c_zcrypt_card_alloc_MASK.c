
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct zcrypt_card {int refcount; int zqueues; int list; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 struct zcrypt_card* FUNC_2 (int,int ) ;

struct zcrypt_card *FUNC_3(void)
{
 struct zcrypt_card *VAR_1;

 VAR_1 = FUNC_2(sizeof(struct zcrypt_card), VAR_0);
 if (!VAR_1)
  return ((void*)0);
 FUNC_0(&VAR_1->list);
 FUNC_0(&VAR_1->zqueues);
 FUNC_1(&VAR_1->refcount);
 return VAR_1;
}
