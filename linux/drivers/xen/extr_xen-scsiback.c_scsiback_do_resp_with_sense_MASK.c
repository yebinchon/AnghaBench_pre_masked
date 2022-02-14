
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct vscsibk_pend {TYPE_1__* v2p; int rqid; int info; } ;
typedef int int32_t ;
struct TYPE_2__ {int kref; } ;


 int FUNC_0 (int *,int ) ;
 int VAR_0 ;
 int FUNC_1 (int ,char*,int ,int ,int ) ;

__attribute__((used)) static void FUNC_2(char *VAR_1, int32_t VAR_2,
   uint32_t VAR_3, struct vscsibk_pend *VAR_4)
{
 FUNC_1(VAR_4->info, VAR_1, VAR_2,
          VAR_3, VAR_4->rqid);

 if (VAR_4->v2p)
  FUNC_0(&VAR_4->v2p->kref,
    VAR_0);
}
