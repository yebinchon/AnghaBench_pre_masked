
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nfp_qdisc {TYPE_1__** children; } ;
struct TYPE_2__ {int use_cnt; } ;


 scalar_t__ FUNC_0 (struct nfp_qdisc*,unsigned int) ;

__attribute__((used)) static void
FUNC_1(struct nfp_qdisc *VAR_0,
         unsigned int VAR_1, unsigned int VAR_2)
{
 unsigned int VAR_3;

 for (VAR_3 = VAR_1; VAR_3 < VAR_2; VAR_3++)
  if (FUNC_0(VAR_0, VAR_3)) {
   VAR_0->children[VAR_3]->use_cnt--;
   VAR_0->children[VAR_3] = ((void*)0);
  }
}
