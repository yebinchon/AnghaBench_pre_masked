
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_long ;
struct m_pool {int nump; } ;
typedef int m_bush_t ;


 struct m_pool* FUNC_0 (int ) ;
 int FUNC_1 (struct m_pool*) ;
 struct m_pool* FUNC_2 (int ) ;
 void* FUNC_3 (struct m_pool*,int,char*) ;
 int VAR_0 ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 (int *,int ) ;

__attribute__((used)) static void *FUNC_6(m_bush_t VAR_1, int VAR_2, char *VAR_3)
{
 u_long VAR_4;
 struct m_pool *VAR_5;
 void *VAR_6 = ((void*)0);

 FUNC_4(&VAR_0, VAR_4);
 VAR_5 = FUNC_2(VAR_1);
 if (!VAR_5)
  VAR_5 = FUNC_0(VAR_1);
 if (VAR_5)
  VAR_6 = FUNC_3(VAR_5, VAR_2, VAR_3);
 if (VAR_5 && !VAR_5->nump)
  FUNC_1(VAR_5);
 FUNC_5(&VAR_0, VAR_4);

 return VAR_6;
}
