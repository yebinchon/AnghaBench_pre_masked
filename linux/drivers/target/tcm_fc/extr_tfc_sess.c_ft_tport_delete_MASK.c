
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ft_tport {struct ft_tpg* tpg; struct fc_lport* lport; } ;
struct ft_tpg {int * tport; } ;
struct fc_lport {struct ft_tport** prov; int service_params; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 size_t VAR_1 ;
 int FUNC_1 (struct ft_tport*,int *) ;
 int FUNC_2 (struct ft_tport*) ;
 int FUNC_3 (struct ft_tport*,int ) ;
 int VAR_2 ;

__attribute__((used)) static void FUNC_4(struct ft_tport *VAR_3)
{
 struct fc_lport *VAR_4;
 struct ft_tpg *VAR_5;

 FUNC_2(VAR_3);
 VAR_4 = VAR_3->lport;
 VAR_4->service_params &= ~VAR_0;
 FUNC_0(VAR_3 != VAR_4->prov[VAR_1]);
 FUNC_1(VAR_4->prov[VAR_1], ((void*)0));

 VAR_5 = VAR_3->tpg;
 if (VAR_5) {
  VAR_5->tport = ((void*)0);
  VAR_3->tpg = ((void*)0);
 }
 FUNC_3(VAR_3, VAR_2);
}
