
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct opp_table {struct dentry* dentry; int dentry_name; } ;
struct opp_device {struct dentry* dentry; struct device* dev; } ;
struct device {int dummy; } ;
struct dentry {int dummy; } ;


 struct dentry* FUNC_0 (int ,int ) ;
 int FUNC_1 (struct device const*,int ) ;
 int VAR_0 ;

__attribute__((used)) static void FUNC_2(struct opp_device *VAR_1,
          struct opp_table *VAR_2)
{
 const struct device *VAR_3 = VAR_1->dev;
 struct dentry *VAR_4;

 FUNC_1(VAR_3, VAR_2->dentry_name);


 VAR_4 = FUNC_0(VAR_2->dentry_name, VAR_0);

 VAR_1->dentry = VAR_4;
 VAR_2->dentry = VAR_4;
}
