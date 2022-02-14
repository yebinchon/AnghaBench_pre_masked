
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct TYPE_2__ {int in_use; scalar_t__* flowkey; } ;
struct nix_hw {TYPE_1__ flowkey; } ;


 int VAR_0 ;

__attribute__((used)) static int FUNC_0(struct nix_hw *VAR_1, u32 VAR_2)
{
 int VAR_3;


 for (VAR_3 = 0; VAR_3 < VAR_1->flowkey.in_use; VAR_3++)
  if (VAR_1->flowkey.flowkey[VAR_3] == VAR_2)
   return VAR_3;

 return -VAR_0;
}
