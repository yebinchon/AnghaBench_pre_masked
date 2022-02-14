
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device {int dummy; } ;


 scalar_t__ FUNC_0 (struct device*,char*) ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static bool FUNC_2(struct device *VAR_2)
{
 if (FUNC_0(VAR_2, "sdhci,wp-inverted") ||
     FUNC_0(VAR_2, "wp-inverted"))
  return 1;





 return 0;

}
