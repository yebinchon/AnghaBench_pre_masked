
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct platform_device {int dev; } ;
struct hvc_struct {int vtermno; } ;


 struct hvc_struct* FUNC_0 (int *) ;
 int VAR_0 ;
 int ** VAR_1 ;
 int FUNC_1 (struct hvc_struct*) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static int FUNC_3(struct platform_device *VAR_2)
{
 struct hvc_struct *VAR_3 = FUNC_0(&VAR_2->dev);
 int VAR_4, VAR_5;

 VAR_5 = VAR_3->vtermno;
 VAR_4 = FUNC_1(VAR_3);
 if (VAR_4 == 0) {
  if (VAR_1[VAR_5] != &VAR_0)
   FUNC_2(VAR_1[VAR_5]);
  VAR_1[VAR_5] = ((void*)0);
 }
 return VAR_4;
}
