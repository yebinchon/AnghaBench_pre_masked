
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct super_block {struct net* s_fs_info; } ;
struct notifier_block {int dummy; } ;
struct nfs_net {struct cache_detail* nfs_dns_resolve; } ;
struct net {int dummy; } ;
struct cache_detail {int dummy; } ;


 int VAR_0 ;


 int VAR_1 ;
 int FUNC_0 (int ) ;
 struct nfs_net* FUNC_1 (struct net*,int ) ;
 int FUNC_2 (struct super_block*,struct cache_detail*) ;
 int FUNC_3 (struct super_block*,struct cache_detail*) ;
 int VAR_2 ;
 int FUNC_4 (int ) ;

__attribute__((used)) static int FUNC_5(struct notifier_block *VAR_3, unsigned long VAR_4,
      void *VAR_5)
{
 struct super_block *VAR_6 = VAR_5;
 struct net *VAR_7 = VAR_6->s_fs_info;
 struct nfs_net *VAR_8 = FUNC_1(VAR_7, VAR_2);
 struct cache_detail *VAR_9 = VAR_8->nfs_dns_resolve;
 int VAR_10 = 0;

 if (VAR_9 == ((void*)0))
  return 0;

 if (!FUNC_4(VAR_1))
  return 0;

 switch (VAR_4) {
 case 129:
  VAR_10 = FUNC_2(VAR_6, VAR_9);
  break;
 case 128:
  FUNC_3(VAR_6, VAR_9);
  break;
 default:
  VAR_10 = -VAR_0;
  break;
 }
 FUNC_0(VAR_1);
 return VAR_10;
}
