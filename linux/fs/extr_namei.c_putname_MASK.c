
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct filename {scalar_t__ refcnt; scalar_t__ name; scalar_t__ iname; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct filename*) ;
 int FUNC_2 (struct filename*) ;

void FUNC_3(struct filename *VAR_0)
{
 FUNC_0(VAR_0->refcnt <= 0);

 if (--VAR_0->refcnt > 0)
  return;

 if (VAR_0->name != VAR_0->iname) {
  FUNC_1(VAR_0->name);
  FUNC_2(VAR_0);
 } else
  FUNC_1(VAR_0);
}
