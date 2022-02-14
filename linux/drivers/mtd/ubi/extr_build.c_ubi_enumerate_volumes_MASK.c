
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ubi_device {int dummy; } ;
struct notifier_block {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct ubi_device** VAR_2 ;
 scalar_t__ FUNC_0 (struct ubi_device*,int ,struct notifier_block*) ;

int FUNC_1(struct notifier_block *VAR_3)
{
 int VAR_4, VAR_5 = 0;





 for (VAR_4 = 0; VAR_4 < VAR_0; VAR_4++) {
  struct ubi_device *VAR_6 = VAR_2[VAR_4];

  if (!VAR_6)
   continue;
  VAR_5 += FUNC_0(VAR_6, VAR_1, VAR_3);
 }

 return VAR_5;
}
