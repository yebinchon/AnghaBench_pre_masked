
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mtd_info {int index; } ;
struct device {int dummy; } ;
typedef scalar_t__ dev_t ;


 scalar_t__ FUNC_0 (int ) ;
 struct mtd_info* FUNC_1 (struct device*) ;
 int FUNC_2 (int *,scalar_t__) ;
 int VAR_0 ;

__attribute__((used)) static void FUNC_3(struct device *VAR_1)
{
 struct mtd_info *VAR_2 = FUNC_1(VAR_1);
 dev_t VAR_3 = FUNC_0(VAR_2->index);


 FUNC_2(&VAR_0, VAR_3 + 1);
}
