
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct dlm_rsb {int dummy; } ;
struct dlm_mhandle {int dummy; } ;
struct dlm_message {char* m_extra; int m_hash; } ;
struct dlm_ls {int ls_rsbtbl_size; int ls_remove_len; char* ls_remove_name; int ls_remove_spin; TYPE_1__* ls_rsbtbl; } ;
typedef int name ;
struct TYPE_2__ {int lock; int toss; int keep; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct dlm_ls*,int,int,int ,struct dlm_message**,struct dlm_mhandle**) ;
 int FUNC_1 (struct dlm_ls*,int) ;
 int FUNC_2 (int *,char*,int,struct dlm_rsb**) ;
 int FUNC_3 (char*,int,int ) ;
 int FUNC_4 (struct dlm_ls*,char*,...) ;
 int FUNC_5 (char*,char*,int) ;
 int FUNC_6 (char*,int ,int) ;
 int FUNC_7 (struct dlm_mhandle*,struct dlm_message*) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;

__attribute__((used)) static void FUNC_10(struct dlm_ls *VAR_2, char *VAR_3, int VAR_4)
{
 char VAR_5[VAR_1 + 1];
 struct dlm_message *VAR_6;
 struct dlm_mhandle *VAR_7;
 struct dlm_rsb *VAR_8;
 uint32_t VAR_9, VAR_10;
 int VAR_11, VAR_12;

 FUNC_6(VAR_5, 0, sizeof(VAR_5));
 FUNC_5(VAR_5, VAR_3, VAR_4);

 VAR_9 = FUNC_3(VAR_5, VAR_4, 0);
 VAR_10 = VAR_9 & (VAR_2->ls_rsbtbl_size - 1);

 VAR_12 = FUNC_1(VAR_2, VAR_9);

 FUNC_4(VAR_2, "send_repeat_remove dir %d %s", VAR_12, VAR_5);

 FUNC_8(&VAR_2->ls_rsbtbl[VAR_10].lock);
 VAR_11 = FUNC_2(&VAR_2->ls_rsbtbl[VAR_10].keep, VAR_5, VAR_4, &VAR_8);
 if (!VAR_11) {
  FUNC_9(&VAR_2->ls_rsbtbl[VAR_10].lock);
  FUNC_4(VAR_2, "repeat_remove on keep %s", VAR_5);
  return;
 }

 VAR_11 = FUNC_2(&VAR_2->ls_rsbtbl[VAR_10].toss, VAR_5, VAR_4, &VAR_8);
 if (!VAR_11) {
  FUNC_9(&VAR_2->ls_rsbtbl[VAR_10].lock);
  FUNC_4(VAR_2, "repeat_remove on toss %s", VAR_5);
  return;
 }



 FUNC_8(&VAR_2->ls_remove_spin);
 VAR_2->ls_remove_len = VAR_4;
 FUNC_5(VAR_2->ls_remove_name, VAR_5, VAR_1);
 FUNC_9(&VAR_2->ls_remove_spin);
 FUNC_9(&VAR_2->ls_rsbtbl[VAR_10].lock);

 VAR_11 = FUNC_0(VAR_2, sizeof(struct dlm_message) + VAR_4,
        VAR_12, VAR_0, &VAR_6, &VAR_7);
 if (VAR_11)
  return;

 FUNC_5(VAR_6->m_extra, VAR_5, VAR_4);
 VAR_6->m_hash = VAR_9;

 FUNC_7(VAR_7, VAR_6);

 FUNC_8(&VAR_2->ls_remove_spin);
 VAR_2->ls_remove_len = 0;
 FUNC_6(VAR_2->ls_remove_name, 0, VAR_1);
 FUNC_9(&VAR_2->ls_remove_spin);
}
