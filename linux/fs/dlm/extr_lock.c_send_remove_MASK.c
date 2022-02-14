
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dlm_rsb {int res_hash; int res_length; int res_name; } ;
struct dlm_mhandle {int dummy; } ;
struct dlm_message {int m_hash; int m_extra; } ;


 int VAR_0 ;
 int FUNC_0 (struct dlm_rsb*,int *,int,int ,struct dlm_message**,struct dlm_mhandle**) ;
 int FUNC_1 (struct dlm_rsb*) ;
 int FUNC_2 (int ,int ,int ) ;
 int FUNC_3 (struct dlm_mhandle*,struct dlm_message*) ;

__attribute__((used)) static int FUNC_4(struct dlm_rsb *VAR_1)
{
 struct dlm_message *VAR_2;
 struct dlm_mhandle *VAR_3;
 int VAR_4, VAR_5;

 VAR_4 = FUNC_1(VAR_1);

 VAR_5 = FUNC_0(VAR_1, ((void*)0), VAR_4, VAR_0, &VAR_2, &VAR_3);
 if (VAR_5)
  goto out;

 FUNC_2(VAR_2->m_extra, VAR_1->res_name, VAR_1->res_length);
 VAR_2->m_hash = VAR_1->res_hash;

 VAR_5 = FUNC_3(VAR_3, VAR_2);
 out:
 return VAR_5;
}
