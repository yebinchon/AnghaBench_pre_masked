
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vme_dev {int num; } ;


 int* VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct vme_dev*) ;
 int FUNC_1 (struct vme_dev*) ;

__attribute__((used)) static int FUNC_2(struct vme_dev *VAR_2)
{
 int VAR_3;

 int VAR_4 = FUNC_0(VAR_2);
 int VAR_5 = FUNC_1(VAR_2);

 for (VAR_3 = 0; VAR_3 < VAR_1; VAR_3++)
  if ((VAR_4 == VAR_0[VAR_3]) && (VAR_5 == VAR_2->num))
   return 1;

 return 0;
}
