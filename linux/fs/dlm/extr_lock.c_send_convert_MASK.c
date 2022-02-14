
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct dlm_rsb {TYPE_1__* res_ls; } ;
struct dlm_lkb {int dummy; } ;
struct TYPE_4__ {scalar_t__ m_result; int m_type; int m_flags; } ;
struct TYPE_3__ {TYPE_2__ ls_stub_ms; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct dlm_rsb*,struct dlm_lkb*,TYPE_2__*) ;
 scalar_t__ FUNC_1 (struct dlm_lkb*) ;
 int FUNC_2 (struct dlm_lkb*,int ) ;
 int FUNC_3 (struct dlm_rsb*,struct dlm_lkb*,int ) ;

__attribute__((used)) static int FUNC_4(struct dlm_rsb *VAR_3, struct dlm_lkb *VAR_4)
{
 int VAR_5;

 VAR_5 = FUNC_3(VAR_3, VAR_4, VAR_1);


 if (!VAR_5 && FUNC_1(VAR_4)) {
  FUNC_2(VAR_4, VAR_2);
  VAR_3->res_ls->ls_stub_ms.m_flags = VAR_0;
  VAR_3->res_ls->ls_stub_ms.m_type = VAR_2;
  VAR_3->res_ls->ls_stub_ms.m_result = 0;
  FUNC_0(VAR_3, VAR_4, &VAR_3->res_ls->ls_stub_ms);
 }

 return VAR_5;
}
