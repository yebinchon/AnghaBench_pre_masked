
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sdw_slave {struct dentry* debugfs; int dev; TYPE_1__* bus; } ;
struct dentry {int dummy; } ;
typedef int name ;
struct TYPE_2__ {struct dentry* debugfs; } ;


 struct dentry* FUNC_0 (char*,struct dentry*) ;
 int FUNC_1 (char*,int,struct dentry*,struct sdw_slave*,int *) ;
 char* FUNC_2 (int *) ;
 int VAR_0 ;
 int FUNC_3 (char*,int,char*,char*) ;

void FUNC_4(struct sdw_slave *VAR_1)
{
 struct dentry *VAR_2;
 struct dentry *VAR_3;
 char VAR_4[32];

 VAR_2 = VAR_1->bus->debugfs;


 FUNC_3(VAR_4, sizeof(VAR_4), "%s", FUNC_2(&VAR_1->dev));
 VAR_3 = FUNC_0(VAR_4, VAR_2);

 FUNC_1("registers", 0400, VAR_3, VAR_1, &VAR_0);

 VAR_1->debugfs = VAR_3;
}
