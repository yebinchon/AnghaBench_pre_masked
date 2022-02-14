
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef TYPE_1__* m_pool_p ;
typedef int m_pool_ident_t ;
struct TYPE_6__ {int nump; } ;


 TYPE_1__* FUNC_0 (int ) ;
 int FUNC_1 (TYPE_1__*) ;
 TYPE_1__* FUNC_2 (int ) ;
 void* FUNC_3 (TYPE_1__*,int,char*) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;
 int VAR_0 ;

void *FUNC_6(m_pool_ident_t VAR_1, int VAR_2, char *VAR_3)
{
 unsigned long VAR_4;
 m_pool_p VAR_5;
 void *VAR_6 = ((void*)0);

 FUNC_4(&VAR_0, VAR_4);
 VAR_5 = FUNC_2(VAR_1);
 if (!VAR_5)
  VAR_5 = FUNC_0(VAR_1);
 if (!VAR_5)
  goto out;
 VAR_6 = FUNC_3(VAR_5, VAR_2, VAR_3);





 out:
 FUNC_5(&VAR_0, VAR_4);
 return VAR_6;
}
