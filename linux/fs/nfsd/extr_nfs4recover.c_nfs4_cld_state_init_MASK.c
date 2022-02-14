
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nfsd_net {int track_reclaim_completes; int nr_reclaim_complete; scalar_t__ reclaim_str_hashtbl_size; int * reclaim_str_hashtbl; } ;
struct net {int dummy; } ;
struct list_head {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int ) ;
 int * FUNC_2 (int,int,int ) ;
 struct nfsd_net* FUNC_3 (struct net*,int ) ;
 int VAR_3 ;

__attribute__((used)) static int
FUNC_4(struct net *VAR_4)
{
 struct nfsd_net *VAR_5 = FUNC_3(VAR_4, VAR_3);
 int VAR_6;

 VAR_5->reclaim_str_hashtbl = FUNC_2(VAR_0,
      sizeof(struct list_head),
      VAR_2);
 if (!VAR_5->reclaim_str_hashtbl)
  return -VAR_1;

 for (VAR_6 = 0; VAR_6 < VAR_0; VAR_6++)
  FUNC_0(&VAR_5->reclaim_str_hashtbl[VAR_6]);
 VAR_5->reclaim_str_hashtbl_size = 0;
 VAR_5->track_reclaim_completes = 1;
 FUNC_1(&VAR_5->nr_reclaim_complete, 0);

 return 0;
}
