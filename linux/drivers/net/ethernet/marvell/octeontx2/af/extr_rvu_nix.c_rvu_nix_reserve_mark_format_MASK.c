
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct rvu {int dummy; } ;
struct TYPE_2__ {int in_use; int total; int * cfg; } ;
struct nix_hw {TYPE_1__ mark_format; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct rvu*,int,int ,int ) ;

int FUNC_2(struct rvu *VAR_1, struct nix_hw *VAR_2,
    int VAR_3, u32 VAR_4)
{
 int VAR_5;

 for (VAR_5 = 0; VAR_5 < VAR_2->mark_format.in_use; VAR_5++) {
  if (VAR_2->mark_format.cfg[VAR_5] == VAR_4)
   return VAR_5;
 }
 if (VAR_5 >= VAR_2->mark_format.total)
  return -VAR_0;

 FUNC_1(VAR_1, VAR_3, FUNC_0(VAR_5), VAR_4);
 VAR_2->mark_format.cfg[VAR_5] = VAR_4;
 VAR_2->mark_format.in_use++;
 return VAR_5;
}
