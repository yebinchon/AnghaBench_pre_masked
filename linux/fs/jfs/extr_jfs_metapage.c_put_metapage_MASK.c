
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct metapage {int page; scalar_t__ count; scalar_t__ nohomeok; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct metapage*) ;
 int FUNC_2 (struct metapage*) ;
 int FUNC_3 (int ) ;

void FUNC_4(struct metapage *VAR_0)
{
 if (VAR_0->count || VAR_0->nohomeok) {

  FUNC_3(VAR_0->page);
  return;
 }
 FUNC_0(VAR_0->page);
 VAR_0->count++;
 FUNC_1(VAR_0);
 FUNC_3(VAR_0->page);
 FUNC_2(VAR_0);
}
