
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dlm_rsb {int dummy; } ;
struct dlm_mhandle {int dummy; } ;
struct dlm_message {int dummy; } ;
struct dlm_lkb {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct dlm_lkb*,int ,int) ;
 int FUNC_1 (struct dlm_rsb*,int *,int,int ,struct dlm_message**,struct dlm_mhandle**) ;
 int FUNC_2 (struct dlm_rsb*) ;
 int FUNC_3 (struct dlm_lkb*,int ) ;
 int FUNC_4 (struct dlm_rsb*,struct dlm_lkb*,struct dlm_message*) ;
 int FUNC_5 (struct dlm_mhandle*,struct dlm_message*) ;

__attribute__((used)) static int FUNC_6(struct dlm_rsb *VAR_2, struct dlm_lkb *VAR_3)
{
 struct dlm_message *VAR_4;
 struct dlm_mhandle *VAR_5;
 int VAR_6, VAR_7;

 VAR_6 = FUNC_2(VAR_2);

 VAR_7 = FUNC_0(VAR_3, VAR_0, VAR_6);
 if (VAR_7)
  return VAR_7;

 VAR_7 = FUNC_1(VAR_2, ((void*)0), VAR_6, VAR_0, &VAR_4, &VAR_5);
 if (VAR_7)
  goto fail;

 FUNC_4(VAR_2, VAR_3, VAR_4);

 VAR_7 = FUNC_5(VAR_5, VAR_4);
 if (VAR_7)
  goto fail;
 return 0;

 fail:
 FUNC_3(VAR_3, VAR_1);
 return VAR_7;
}
