
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct dentry {int dummy; } ;
struct brcmf_pub {TYPE_2__* wiphy; TYPE_1__* bus_if; } ;
struct TYPE_4__ {int debugfsdir; } ;
struct TYPE_3__ {int dev; } ;


 int FUNC_0 (struct dentry*) ;
 int FUNC_1 (int,char*) ;
 struct dentry* FUNC_2 (int ,char const*,int ,int (*) (struct seq_file*,void*)) ;

int FUNC_3(struct brcmf_pub *VAR_0, const char *VAR_1,
       int (*VAR_2)(struct seq_file *VAR_3, void *VAR_4))
{
 struct dentry *VAR_5;

 FUNC_1(!VAR_0->wiphy->debugfsdir, "wiphy not (yet) registered\n");
 VAR_5 = FUNC_2(VAR_0->bus_if->dev, VAR_1,
     VAR_0->wiphy->debugfsdir, VAR_2);
 return FUNC_0(VAR_5);
}
