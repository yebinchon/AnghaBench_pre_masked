
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ssc_device {int list; } ;
struct platform_device {int dummy; } ;


 int FUNC_0 (int *) ;
 struct ssc_device* FUNC_1 (struct platform_device*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct ssc_device*) ;
 int VAR_0 ;

__attribute__((used)) static int FUNC_5(struct platform_device *VAR_1)
{
 struct ssc_device *VAR_2 = FUNC_1(VAR_1);

 FUNC_4(VAR_2);

 FUNC_2(&VAR_0);
 FUNC_0(&VAR_2->list);
 FUNC_3(&VAR_0);

 return 0;
}
