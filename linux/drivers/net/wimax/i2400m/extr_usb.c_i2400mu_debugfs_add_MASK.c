
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {struct dentry* debugfs_dentry; } ;
struct TYPE_4__ {TYPE_1__ wimax_dev; } ;
struct i2400mu {int rx_size; int rx_size_auto_shrink; struct dentry* debugfs_dentry; TYPE_2__ i2400m; } ;
struct dentry {int dummy; } ;


 int FUNC_0 (char*,int ,struct dentry*) ;
 struct dentry* FUNC_1 (char*,struct dentry*) ;
 int FUNC_2 (char*,int,struct dentry*,int *) ;
 int FUNC_3 (char*,int,struct dentry*,int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static
void FUNC_4(struct i2400mu *VAR_5)
{
 struct dentry *VAR_6 = VAR_5->i2400m.wimax_dev.debugfs_dentry;

 VAR_6 = FUNC_1("i2400m-usb", VAR_6);
 VAR_5->debugfs_dentry = VAR_6;

 FUNC_0("dl_", VAR_4, VAR_6);
 FUNC_0("dl_", VAR_0, VAR_6);
 FUNC_0("dl_", VAR_1, VAR_6);
 FUNC_0("dl_", VAR_2, VAR_6);
 FUNC_0("dl_", VAR_3, VAR_6);


 FUNC_3("rx_size_auto_shrink", 0600, VAR_6,
     &VAR_5->rx_size_auto_shrink);

 FUNC_2("rx_size", 0600, VAR_6, &VAR_5->rx_size);
}
