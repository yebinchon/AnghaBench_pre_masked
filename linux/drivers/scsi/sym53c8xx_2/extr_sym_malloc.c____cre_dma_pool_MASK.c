
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef TYPE_1__* m_pool_p ;
typedef int m_pool_ident_t ;
struct TYPE_7__ {TYPE_1__* next; } ;
struct TYPE_6__ {struct TYPE_6__* next; int free_mem_cluster; int get_mem_cluster; int dev_dmat; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__* FUNC_0 (TYPE_2__*,int,char*) ;
 TYPE_2__ VAR_2 ;

__attribute__((used)) static m_pool_p FUNC_1(m_pool_ident_t VAR_3)
{
 m_pool_p VAR_4 = FUNC_0(&VAR_2, sizeof(*VAR_4), "MPOOL");
 if (VAR_4) {
  VAR_4->dev_dmat = VAR_3;
  VAR_4->get_mem_cluster = VAR_1;



  VAR_4->next = VAR_2;
  VAR_2 = VAR_4;
  return VAR_4;
 }
 return ((void*)0);
}
