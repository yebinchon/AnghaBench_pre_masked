
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cio2_device {int * queue; } ;


 int VAR_0 ;
 int FUNC_0 (struct cio2_device*,int *) ;
 int FUNC_1 (struct cio2_device*,int *) ;

__attribute__((used)) static int FUNC_2(struct cio2_device *VAR_1)
{
 int VAR_2, VAR_3;

 for (VAR_2 = 0; VAR_2 < VAR_0; VAR_2++) {
  VAR_3 = FUNC_1(VAR_1, &VAR_1->queue[VAR_2]);
  if (VAR_3)
   break;
 }

 if (VAR_2 == VAR_0)
  return 0;

 for (VAR_2--; VAR_2 >= 0; VAR_2--)
  FUNC_0(VAR_1, &VAR_1->queue[VAR_2]);

 return VAR_3;
}
