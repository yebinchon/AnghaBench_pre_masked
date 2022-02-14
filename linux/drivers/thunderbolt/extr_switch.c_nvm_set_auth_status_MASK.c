
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct tb_switch {int uuid; } ;
struct nvm_auth_status {int status; int list; int uuid; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int) ;
 struct nvm_auth_status* FUNC_2 (struct tb_switch const*) ;
 struct nvm_auth_status* FUNC_3 (int,int ) ;
 int FUNC_4 (int *,int *) ;
 int FUNC_5 (int *,int ,int) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static void FUNC_8(const struct tb_switch *VAR_3, u32 VAR_4)
{
 struct nvm_auth_status *VAR_5;

 if (FUNC_1(!VAR_3->uuid))
  return;

 FUNC_6(&VAR_2);
 VAR_5 = FUNC_2(VAR_3);

 if (!VAR_5) {
  VAR_5 = FUNC_3(sizeof(*VAR_5), VAR_0);
  if (!VAR_5)
   goto unlock;

  FUNC_5(&VAR_5->uuid, VAR_3->uuid, sizeof(VAR_5->uuid));
  FUNC_0(&VAR_5->list);
  FUNC_4(&VAR_5->list, &VAR_1);
 }

 VAR_5->status = VAR_4;
unlock:
 FUNC_7(&VAR_2);
}
