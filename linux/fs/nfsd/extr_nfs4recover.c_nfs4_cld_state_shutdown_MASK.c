
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nfsd_net {int track_reclaim_completes; int reclaim_str_hashtbl; } ;
struct net {int dummy; } ;


 int FUNC_0 (int ) ;
 struct nfsd_net* FUNC_1 (struct net*,int ) ;
 int VAR_0 ;

__attribute__((used)) static void
FUNC_2(struct net *VAR_1)
{
 struct nfsd_net *VAR_2 = FUNC_1(VAR_1, VAR_0);

 VAR_2->track_reclaim_completes = 0;
 FUNC_0(VAR_2->reclaim_str_hashtbl);
}
