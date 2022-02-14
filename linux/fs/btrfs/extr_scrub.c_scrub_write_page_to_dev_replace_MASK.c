
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scrub_page {int * page; scalar_t__ io_error; } ;
struct scrub_block {int sctx; struct scrub_page** pagev; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (void*) ;
 int FUNC_2 (int *) ;
 void* FUNC_3 (int *) ;
 int FUNC_4 (void*) ;
 int FUNC_5 (int ,struct scrub_page*) ;

__attribute__((used)) static int FUNC_6(struct scrub_block *VAR_0,
        int VAR_1)
{
 struct scrub_page *VAR_2 = VAR_0->pagev[VAR_1];

 FUNC_0(VAR_2->page == ((void*)0));
 if (VAR_2->io_error) {
  void *VAR_3 = FUNC_3(VAR_2->page);

  FUNC_1(VAR_3);
  FUNC_2(VAR_2->page);
  FUNC_4(VAR_3);
 }
 return FUNC_5(VAR_0->sctx, VAR_2);
}
