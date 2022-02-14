
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct super_block {struct net* s_fs_info; } ;
struct notifier_block {int dummy; } ;
struct nfsd_net {struct cld_net* cld_net; } ;
struct net {int dummy; } ;
struct dentry {int dummy; } ;
struct cld_net {TYPE_1__* cn_pipe; } ;
struct TYPE_3__ {struct dentry* dentry; } ;


 int VAR_0 ;
 int FUNC_0 (struct dentry*) ;
 int FUNC_1 (struct dentry*) ;


 int VAR_1 ;
 int FUNC_2 (int ) ;
 struct nfsd_net* FUNC_3 (struct net*,int ) ;
 struct dentry* FUNC_4 (struct super_block*,TYPE_1__*) ;
 int FUNC_5 (TYPE_1__*) ;
 int VAR_2 ;
 int FUNC_6 (int ) ;

__attribute__((used)) static int
FUNC_7(struct notifier_block *VAR_3, unsigned long VAR_4, void *VAR_5)
{
 struct super_block *VAR_6 = VAR_5;
 struct net *VAR_7 = VAR_6->s_fs_info;
 struct nfsd_net *VAR_8 = FUNC_3(VAR_7, VAR_2);
 struct cld_net *VAR_9 = VAR_8->cld_net;
 struct dentry *VAR_10;
 int VAR_11 = 0;

 if (!FUNC_6(VAR_1))
  return 0;

 if (!VAR_9) {
  FUNC_2(VAR_1);
  return 0;
 }

 switch (VAR_4) {
 case 129:
  VAR_10 = FUNC_4(VAR_6, VAR_9->cn_pipe);
  if (FUNC_0(VAR_10)) {
   VAR_11 = FUNC_1(VAR_10);
   break;
  }
  VAR_9->cn_pipe->dentry = VAR_10;
  break;
 case 128:
  if (VAR_9->cn_pipe->dentry)
   FUNC_5(VAR_9->cn_pipe);
  break;
 default:
  VAR_11 = -VAR_0;
  break;
 }
 FUNC_2(VAR_1);
 return VAR_11;
}
