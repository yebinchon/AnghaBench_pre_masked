
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct seq_file {int dummy; } ;
struct device {int dummy; } ;


 int FUNC_0 (struct seq_file*,char*,int,...) ;
 int FUNC_1 (struct device*) ;
 int FUNC_2 (int ,int*) ;
 int FUNC_3 (int ,int*) ;

__attribute__((used)) static int FUNC_4(struct device *VAR_0, struct seq_file *VAR_1)
{
 int VAR_2, VAR_3, VAR_4;

 VAR_2 = FUNC_3(FUNC_1(VAR_0), &VAR_3);
 if (!VAR_2)
  FUNC_0(VAR_1, "digital_trim\t: %d ppm\n", VAR_3);

 VAR_2 = FUNC_2(FUNC_1(VAR_0), &VAR_4);
 if (!VAR_2)
  FUNC_0(VAR_1, "analog_trim\t: %d.%02d pF\n",
   VAR_4 / 1000, VAR_4 % 1000);
 return 0;
}
