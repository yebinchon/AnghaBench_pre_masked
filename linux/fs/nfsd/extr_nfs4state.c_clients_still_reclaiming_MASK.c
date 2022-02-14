
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nfsd_net {int boot_time; int nfsd4_lease; scalar_t__ reclaim_str_hashtbl_size; int somebody_reclaimed; int nr_reclaim_complete; scalar_t__ track_reclaim_completes; } ;


 scalar_t__ FUNC_0 (int *) ;
 unsigned long FUNC_1 () ;
 scalar_t__ FUNC_2 (unsigned long,unsigned long) ;

__attribute__((used)) static bool FUNC_3(struct nfsd_net *VAR_0)
{
 unsigned long VAR_1 = FUNC_1();
 unsigned long VAR_2 = VAR_0->boot_time +
      2 * VAR_0->nfsd4_lease;

 if (VAR_0->track_reclaim_completes &&
   FUNC_0(&VAR_0->nr_reclaim_complete) ==
   VAR_0->reclaim_str_hashtbl_size)
  return 0;
 if (!VAR_0->somebody_reclaimed)
  return 0;
 VAR_0->somebody_reclaimed = 0;




 if (FUNC_2(VAR_1, VAR_2))
  return 0;
 return 1;
}
