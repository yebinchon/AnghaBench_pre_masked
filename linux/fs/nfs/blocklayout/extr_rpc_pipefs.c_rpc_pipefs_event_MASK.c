
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct super_block {struct net* s_fs_info; } ;
struct notifier_block {int dummy; } ;
struct nfs_net {TYPE_1__* bl_device_pipe; } ;
struct net {int dummy; } ;
struct dentry {int dummy; } ;
struct TYPE_3__ {struct dentry* dentry; } ;


 int VAR_0 ;
 int FUNC_0 (struct dentry*) ;
 int FUNC_1 (struct dentry*) ;


 int VAR_1 ;
 int FUNC_2 (int ) ;
 struct nfs_net* FUNC_3 (struct net*,int ) ;
 struct dentry* FUNC_4 (struct super_block*,TYPE_1__*) ;
 int FUNC_5 (struct super_block*,TYPE_1__*) ;
 int VAR_2 ;
 int FUNC_6 (int ) ;

__attribute__((used)) static int FUNC_7(struct notifier_block *VAR_3, unsigned long VAR_4,
      void *VAR_5)
{
 struct super_block *VAR_6 = VAR_5;
 struct net *VAR_7 = VAR_6->s_fs_info;
 struct nfs_net *VAR_8 = FUNC_3(VAR_7, VAR_2);
 struct dentry *VAR_9;
 int VAR_10 = 0;

 if (!FUNC_6(VAR_1))
  return 0;

 if (VAR_8->bl_device_pipe == ((void*)0)) {
  FUNC_2(VAR_1);
  return 0;
 }

 switch (VAR_4) {
 case 129:
  VAR_9 = FUNC_4(VAR_6, VAR_8->bl_device_pipe);
  if (FUNC_0(VAR_9)) {
   VAR_10 = FUNC_1(VAR_9);
   break;
  }
  VAR_8->bl_device_pipe->dentry = VAR_9;
  break;
 case 128:
  if (VAR_8->bl_device_pipe->dentry)
   FUNC_5(VAR_6, VAR_8->bl_device_pipe);
  break;
 default:
  VAR_10 = -VAR_0;
  break;
 }
 FUNC_2(VAR_1);
 return VAR_10;
}
