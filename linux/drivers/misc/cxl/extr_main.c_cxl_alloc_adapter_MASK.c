
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cxl {int contexts_num; int adapter_num; int dev; int afu_list_lock; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int) ;
 scalar_t__ FUNC_1 (struct cxl*) ;
 int FUNC_2 (struct cxl*) ;
 scalar_t__ FUNC_3 (int *,char*,int ) ;
 int FUNC_4 (struct cxl*) ;
 struct cxl* FUNC_5 (int,int ) ;
 int FUNC_6 (int *) ;

struct cxl *FUNC_7(void)
{
 struct cxl *VAR_1;

 if (!(VAR_1 = FUNC_5(sizeof(struct cxl), VAR_0)))
  return ((void*)0);

 FUNC_6(&VAR_1->afu_list_lock);

 if (FUNC_1(VAR_1))
  goto err1;

 if (FUNC_3(&VAR_1->dev, "card%i", VAR_1->adapter_num))
  goto err2;


 FUNC_0(&VAR_1->contexts_num, -1);

 return VAR_1;
err2:
 FUNC_2(VAR_1);
err1:
 FUNC_4(VAR_1);
 return ((void*)0);
}
