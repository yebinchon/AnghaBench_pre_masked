
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct seq_file {struct dwc2_hsotg* private; } ;
struct dwc2_hsotg {int dev; } ;


 int FUNC_0 (int ,char*,char const**) ;
 int FUNC_1 (struct seq_file*,char*,char const*) ;

__attribute__((used)) static int FUNC_2(struct seq_file *VAR_0, void *VAR_1)
{
 struct dwc2_hsotg *VAR_2 = VAR_0->private;
 const char *VAR_3 = "";

 FUNC_0(VAR_2->dev, "dr_mode", &VAR_3);
 FUNC_1(VAR_0, "%s\n", VAR_3);
 return 0;
}
