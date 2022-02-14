
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct skt_dev_info {int nskt; int * skt; } ;
struct platform_device {int dummy; } ;


 struct skt_dev_info* FUNC_0 (struct platform_device*) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static int FUNC_2(struct platform_device *VAR_0)
{
 struct skt_dev_info *VAR_1 = FUNC_0(VAR_0);
 int VAR_2;

 for (VAR_2 = 0; VAR_2 < VAR_1->nskt; VAR_2++)
  FUNC_1(&VAR_1->skt[VAR_2]);

 return 0;
}
