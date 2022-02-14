
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scrub_block {int page_count; int * pagev; scalar_t__ sparity; int refs; } ;


 int FUNC_0 (struct scrub_block*) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (scalar_t__) ;

__attribute__((used)) static void FUNC_4(struct scrub_block *VAR_0)
{
 if (FUNC_1(&VAR_0->refs)) {
  int VAR_1;

  if (VAR_0->sparity)
   FUNC_3(VAR_0->sparity);

  for (VAR_1 = 0; VAR_1 < VAR_0->page_count; VAR_1++)
   FUNC_2(VAR_0->pagev[VAR_1]);
  FUNC_0(VAR_0);
 }
}
