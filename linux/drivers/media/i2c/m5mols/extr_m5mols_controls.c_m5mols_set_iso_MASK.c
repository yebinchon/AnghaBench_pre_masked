
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct m5mols_info {int sd; TYPE_1__* iso; } ;
struct TYPE_2__ {scalar_t__ val; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int ,scalar_t__) ;

__attribute__((used)) static int FUNC_1(struct m5mols_info *VAR_1, int VAR_2)
{
 u32 VAR_3 = VAR_2 ? 0 : VAR_1->iso->val + 1;

 return FUNC_0(&VAR_1->sd, VAR_0, VAR_3);
}
