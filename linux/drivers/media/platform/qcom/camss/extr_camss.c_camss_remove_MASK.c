
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct platform_device {int dummy; } ;
struct camss {unsigned int vfe_num; int ref_count; int notifier; int * vfe; } ;


 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (struct camss*) ;
 int FUNC_2 (struct camss*) ;
 int FUNC_3 (int *) ;
 struct camss* FUNC_4 (struct platform_device*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static int FUNC_7(struct platform_device *VAR_0)
{
 unsigned int VAR_1;

 struct camss *VAR_2 = FUNC_4(VAR_0);

 for (VAR_1 = 0; VAR_1 < VAR_2->vfe_num; VAR_1++)
  FUNC_3(&VAR_2->vfe[VAR_1]);

 FUNC_6(&VAR_2->notifier);
 FUNC_5(&VAR_2->notifier);
 FUNC_2(VAR_2);

 if (FUNC_0(&VAR_2->ref_count) == 0)
  FUNC_1(VAR_2);

 return 0;
}
