
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct seq_file {int dummy; } ;
struct platform_device {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct platform_device*,struct seq_file*) ;
 struct platform_device* FUNC_1 (int) ;

void FUNC_2(struct seq_file *VAR_1)
{
 struct platform_device *VAR_2;
 int VAR_3;

 for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3++) {
  VAR_2 = FUNC_1(VAR_3);
  if (VAR_2)
   FUNC_0(VAR_2, VAR_1);
 }
}
