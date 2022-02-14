
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cxl {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 struct cxl* FUNC_1 (int *,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

struct cxl *FUNC_4(int VAR_2)
{
 struct cxl *VAR_3;

 FUNC_2(&VAR_0);
 if ((VAR_3 = FUNC_1(&VAR_1, VAR_2)))
  FUNC_0(&VAR_3->dev);
 FUNC_3(&VAR_0);

 return VAR_3;
}
