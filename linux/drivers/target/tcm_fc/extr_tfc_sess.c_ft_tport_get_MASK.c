
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ft_tport {int * hash; struct ft_tpg* tpg; struct fc_lport* lport; } ;
struct ft_tpg {struct ft_tport* tport; } ;
struct fc_lport {int * prov; } ;


 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 struct ft_tpg* FUNC_1 (struct fc_lport*) ;
 int VAR_3 ;
 struct ft_tport* FUNC_2 (int,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ,struct ft_tport*) ;
 struct ft_tport* FUNC_5 (int ,int ) ;

__attribute__((used)) static struct ft_tport *FUNC_6(struct fc_lport *VAR_4)
{
 struct ft_tpg *VAR_5;
 struct ft_tport *VAR_6;
 int VAR_7;

 VAR_6 = FUNC_5(VAR_4->prov[VAR_0],
       FUNC_3(&VAR_3));
 if (VAR_6 && VAR_6->tpg)
  return VAR_6;

 VAR_5 = FUNC_1(VAR_4);
 if (!VAR_5)
  return ((void*)0);

 if (VAR_6) {
  VAR_6->tpg = VAR_5;
  VAR_5->tport = VAR_6;
  return VAR_6;
 }

 VAR_6 = FUNC_2(sizeof(*VAR_6), VAR_2);
 if (!VAR_6)
  return ((void*)0);

 VAR_6->lport = VAR_4;
 VAR_6->tpg = VAR_5;
 VAR_5->tport = VAR_6;
 for (VAR_7 = 0; VAR_7 < VAR_1; VAR_7++)
  FUNC_0(&VAR_6->hash[VAR_7]);

 FUNC_4(VAR_4->prov[VAR_0], VAR_6);
 return VAR_6;
}
