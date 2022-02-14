
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nvmf_host {int list; int nqn; int id; int ref; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct nvmf_host* FUNC_0 (int,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_5 (int ,int ,char*,int *) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static struct nvmf_host *FUNC_7(void)
{
 struct nvmf_host *VAR_4;

 VAR_4 = FUNC_0(sizeof(*VAR_4), VAR_0);
 if (!VAR_4)
  return ((void*)0);

 FUNC_1(&VAR_4->ref);
 FUNC_6(&VAR_4->id);
 FUNC_5(VAR_4->nqn, VAR_1,
  "nqn.2014-08.org.nvmexpress:uuid:%pUb", &VAR_4->id);

 FUNC_3(&VAR_3);
 FUNC_2(&VAR_4->list, &VAR_2);
 FUNC_4(&VAR_3);

 return VAR_4;
}
