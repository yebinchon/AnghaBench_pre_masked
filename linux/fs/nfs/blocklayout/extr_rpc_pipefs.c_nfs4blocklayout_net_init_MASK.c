
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nfs_net {struct dentry* bl_device_pipe; int bl_wq; int bl_mutex; } ;
struct net {int dummy; } ;
struct dentry {struct dentry* dentry; } ;


 scalar_t__ FUNC_0 (struct dentry*) ;
 int FUNC_1 (struct dentry*) ;
 int VAR_0 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 struct nfs_net* FUNC_4 (struct net*,int ) ;
 struct dentry* FUNC_5 (struct net*,struct dentry*) ;
 int VAR_1 ;
 int FUNC_6 (struct dentry*) ;
 struct dentry* FUNC_7 (int *,int ) ;

__attribute__((used)) static int FUNC_8(struct net *VAR_2)
{
 struct nfs_net *VAR_3 = FUNC_4(VAR_2, VAR_1);
 struct dentry *VAR_4;

 FUNC_3(&VAR_3->bl_mutex);
 FUNC_2(&VAR_3->bl_wq);
 VAR_3->bl_device_pipe = FUNC_7(&VAR_0, 0);
 if (FUNC_0(VAR_3->bl_device_pipe))
  return FUNC_1(VAR_3->bl_device_pipe);
 VAR_4 = FUNC_5(VAR_2, VAR_3->bl_device_pipe);
 if (FUNC_0(VAR_4)) {
  FUNC_6(VAR_3->bl_device_pipe);
  return FUNC_1(VAR_4);
 }
 VAR_3->bl_device_pipe->dentry = VAR_4;
 return 0;
}
