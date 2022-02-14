
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct dlm_rcom {int rc_result; } ;
struct dlm_ls {int ls_low_nodeid; struct dlm_rcom* ls_recover_buf; } ;


 int VAR_0 ;
 int FUNC_0 (struct dlm_ls*,int,int) ;
 scalar_t__ FUNC_1 (struct dlm_ls*) ;
 int FUNC_2 (int) ;

__attribute__((used)) static int FUNC_3(struct dlm_ls *VAR_1, uint32_t VAR_2,
      uint32_t VAR_3)
{
 struct dlm_rcom *VAR_4 = VAR_1->ls_recover_buf;
 int VAR_5 = 0, VAR_6 = 0, VAR_7 = VAR_1->ls_low_nodeid;

 for (;;) {
  if (FUNC_1(VAR_1)) {
   VAR_5 = -VAR_0;
   goto out;
  }

  VAR_5 = FUNC_0(VAR_1, VAR_7, VAR_3);
  if (VAR_5)
   break;

  if (VAR_4->rc_result & VAR_2)
   break;
  if (VAR_6 < 1000)
   VAR_6 += 20;
  FUNC_2(VAR_6);
 }
 out:
 return VAR_5;
}
