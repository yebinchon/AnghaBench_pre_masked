
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef TYPE_1__* m_pool_p ;
struct TYPE_7__ {TYPE_1__* next; } ;
struct TYPE_6__ {struct TYPE_6__* next; } ;


 int FUNC_0 (TYPE_2__*,TYPE_1__*,int,char*) ;
 TYPE_2__ VAR_0 ;

__attribute__((used)) static void FUNC_1(m_pool_p VAR_1)
{
 m_pool_p *VAR_2 = &VAR_0;

 while (*VAR_2 && *VAR_2 != VAR_1)
  VAR_2 = &(*VAR_2)->next;
 if (*VAR_2) {
  *VAR_2 = (*VAR_2)->next;
  FUNC_0(&VAR_0, VAR_1, sizeof(*VAR_1), "MPOOL");
 }
}
