
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct super_block {int dummy; } ;
struct seq_file {struct super_block* private; } ;
struct TYPE_2__ {int s_properties; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__* FUNC_0 (struct super_block*) ;
 int FUNC_1 (struct seq_file*,char*,char*,char*) ;

__attribute__((used)) static int FUNC_2(struct seq_file *VAR_2, void *VAR_3)
{
 struct super_block *VAR_4 = VAR_2->private;
 char *VAR_5;

 if (FUNC_0(VAR_4)->s_properties & (1 << VAR_1)) {
  VAR_5 = "3.6";
 } else if (FUNC_0(VAR_4)->s_properties & (1 << VAR_0)) {
  VAR_5 = "3.5";
 } else {
  VAR_5 = "unknown";
 }

 FUNC_1(VAR_2, "%s format\twith checks %s\n", VAR_5,



     "off"

     );
 return 0;
}
