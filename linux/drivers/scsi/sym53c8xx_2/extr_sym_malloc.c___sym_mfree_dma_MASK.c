
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef TYPE_1__* m_pool_p ;
typedef int m_pool_ident_t ;
struct TYPE_5__ {int nump; } ;


 int FUNC_0 (TYPE_1__*) ;
 TYPE_1__* FUNC_1 (int ) ;
 int FUNC_2 (TYPE_1__*,void*,int,char*) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;
 int VAR_0 ;

void FUNC_5(m_pool_ident_t VAR_1, void *VAR_2, int VAR_3, char *VAR_4)
{
 unsigned long VAR_5;
 m_pool_p VAR_6;

 FUNC_3(&VAR_0, VAR_5);
 VAR_6 = FUNC_1(VAR_1);
 if (!VAR_6)
  goto out;
 FUNC_2(VAR_6, VAR_2, VAR_3, VAR_4);




 out:
 FUNC_4(&VAR_0, VAR_5);
}
