
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct m_pool {struct m_pool* next; } ;
typedef struct m_pool m_pool_s ;
struct TYPE_3__ {struct m_pool* next; } ;


 int FUNC_0 (TYPE_1__*,struct m_pool*,int,char*) ;
 TYPE_1__ VAR_0 ;

__attribute__((used)) static void FUNC_1(m_pool_s *VAR_1)
{
 struct m_pool **VAR_2 = &VAR_0;

 while (*VAR_2 && *VAR_2 != VAR_1)
  VAR_2 = &(*VAR_2)->next;
 if (*VAR_2) {
  *VAR_2 = (*VAR_2)->next;
  FUNC_0(&VAR_0, VAR_1, sizeof(*VAR_1), "MPOOL");
 }
}
