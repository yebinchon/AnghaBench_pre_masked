
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct posix_ace_state_array {int n; TYPE_1__* aces; } ;
struct TYPE_2__ {int perms; } ;


 int FUNC_0 (int *,int ) ;

__attribute__((used)) static void FUNC_1(struct posix_ace_state_array *VAR_0, u32 VAR_1)
{
 int VAR_2;

 for (VAR_2=0; VAR_2 < VAR_0->n; VAR_2++)
  FUNC_0(&VAR_0->aces[VAR_2].perms, VAR_1);
}
