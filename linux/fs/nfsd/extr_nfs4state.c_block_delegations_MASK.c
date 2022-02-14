
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct knfsd_fh {int fh_size; int fh_base; } ;
struct bloom_pair {size_t new; scalar_t__ entries; int swap_time; int * set; } ;


 int FUNC_0 (int,int ) ;
 struct bloom_pair VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *,int ,int ) ;
 int FUNC_2 () ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static void FUNC_5(struct knfsd_fh *VAR_2)
{
 u32 VAR_3;
 struct bloom_pair *VAR_4 = &VAR_0;

 VAR_3 = FUNC_1(&VAR_2->fh_base, VAR_2->fh_size, 0);

 FUNC_3(&VAR_1);
 FUNC_0(VAR_3&255, VAR_4->set[VAR_4->new]);
 FUNC_0((VAR_3>>8)&255, VAR_4->set[VAR_4->new]);
 FUNC_0((VAR_3>>16)&255, VAR_4->set[VAR_4->new]);
 if (VAR_4->entries == 0)
  VAR_4->swap_time = FUNC_2();
 VAR_4->entries += 1;
 FUNC_4(&VAR_1);
}
