
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct seq_file {int dummy; } ;
struct TYPE_2__ {int id; } ;
struct fb_info {TYPE_1__ fix; int node; } ;
typedef int loff_t ;


 struct fb_info** VAR_0 ;
 int FUNC_0 (struct seq_file*,char*,int ,int ) ;

__attribute__((used)) static int FUNC_1(struct seq_file *VAR_1, void *VAR_2)
{
 int VAR_3 = *(loff_t *)VAR_2;
 struct fb_info *VAR_4 = VAR_0[VAR_3];

 if (VAR_4)
  FUNC_0(VAR_1, "%d %s\n", VAR_4->node, VAR_4->fix.id);
 return 0;
}
