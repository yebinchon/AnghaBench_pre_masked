
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int * count; } ;
struct mm_struct {int pmd_huge_pte; TYPE_1__ rss_stat; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int,char*) ;
 int VAR_0 ;
 int FUNC_2 (int ,struct mm_struct*) ;
 long FUNC_3 (int *) ;
 int FUNC_4 (struct mm_struct*) ;
 int FUNC_5 (char*,struct mm_struct*,...) ;
 int * VAR_1 ;
 scalar_t__ FUNC_6 (long) ;

__attribute__((used)) static void FUNC_7(struct mm_struct *VAR_2)
{
 int VAR_3;

 FUNC_1(FUNC_0(VAR_1) != VAR_0,
    "Please make sure 'struct resident_page_types[]' is updated as well");

 for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3++) {
  long VAR_4 = FUNC_3(&VAR_2->rss_stat.count[VAR_3]);

  if (FUNC_6(VAR_4))
   FUNC_5("BUG: Bad rss-counter state mm:%p type:%s val:%ld\n",
     VAR_2, VAR_1[VAR_3], VAR_4);
 }

 if (FUNC_4(VAR_2))
  FUNC_5("BUG: non-zero pgtables_bytes on freeing mm: %ld\n",
    FUNC_4(VAR_2));




}
