
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int workspace; } ;
struct ppp_deflate_state {TYPE_1__ strm; } ;


 int FUNC_0 (struct ppp_deflate_state*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_3(void *VAR_0)
{
 struct ppp_deflate_state *VAR_1 = (struct ppp_deflate_state *) VAR_0;

 if (VAR_1) {
  FUNC_2(&VAR_1->strm);
  FUNC_1(VAR_1->strm.workspace);
  FUNC_0(VAR_1);
 }
}
