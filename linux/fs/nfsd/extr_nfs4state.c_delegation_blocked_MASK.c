
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct knfsd_fh {int fh_size; int fh_base; } ;
struct bloom_pair {scalar_t__ entries; int swap_time; scalar_t__ old_entries; size_t new; int * set; } ;


 struct bloom_pair VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ,int ) ;
 int FUNC_1 (int ,int ,int) ;
 int FUNC_2 () ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int,int ) ;

__attribute__((used)) static int FUNC_6(struct knfsd_fh *VAR_2)
{
 u32 VAR_3;
 struct bloom_pair *VAR_4 = &VAR_0;

 if (VAR_4->entries == 0)
  return 0;
 if (FUNC_2() - VAR_4->swap_time > 30) {
  FUNC_3(&VAR_1);
  if (FUNC_2() - VAR_4->swap_time > 30) {
   VAR_4->entries -= VAR_4->old_entries;
   VAR_4->old_entries = VAR_4->entries;
   FUNC_1(VAR_4->set[VAR_4->new], 0,
          sizeof(VAR_4->set[0]));
   VAR_4->new = 1-VAR_4->new;
   VAR_4->swap_time = FUNC_2();
  }
  FUNC_4(&VAR_1);
 }
 VAR_3 = FUNC_0(&VAR_2->fh_base, VAR_2->fh_size, 0);
 if (FUNC_5(VAR_3&255, VAR_4->set[0]) &&
     FUNC_5((VAR_3>>8)&255, VAR_4->set[0]) &&
     FUNC_5((VAR_3>>16)&255, VAR_4->set[0]))
  return 1;

 if (FUNC_5(VAR_3&255, VAR_4->set[1]) &&
     FUNC_5((VAR_3>>8)&255, VAR_4->set[1]) &&
     FUNC_5((VAR_3>>16)&255, VAR_4->set[1]))
  return 1;

 return 0;
}
