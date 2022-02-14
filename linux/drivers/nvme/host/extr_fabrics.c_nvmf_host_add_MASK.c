
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nvmf_host {int list; int nqn; int ref; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct nvmf_host* FUNC_0 (char const*) ;
 struct nvmf_host* FUNC_1 (int,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_7 (int ,char const*,int ) ;

__attribute__((used)) static struct nvmf_host *FUNC_8(const char *VAR_4)
{
 struct nvmf_host *VAR_5;

 FUNC_5(&VAR_3);
 VAR_5 = FUNC_0(VAR_4);
 if (VAR_5) {
  FUNC_2(&VAR_5->ref);
  goto out_unlock;
 }

 VAR_5 = FUNC_1(sizeof(*VAR_5), VAR_0);
 if (!VAR_5)
  goto out_unlock;

 FUNC_3(&VAR_5->ref);
 FUNC_7(VAR_5->nqn, VAR_4, VAR_1);

 FUNC_4(&VAR_5->list, &VAR_2);
out_unlock:
 FUNC_6(&VAR_3);
 return VAR_5;
}
