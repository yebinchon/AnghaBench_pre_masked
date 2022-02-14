
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct rcom_slot {int ro_slot; int ro_nodeid; } ;
struct dlm_slot {int nodeid; int slot; } ;
struct dlm_ls {int dummy; } ;
typedef int line ;


 int VAR_0 ;
 int FUNC_0 (struct dlm_ls*,char*,int ,int,char*) ;
 int FUNC_1 (char*,int ,int) ;
 int FUNC_2 (char*,int,char*,int,int) ;

__attribute__((used)) static void FUNC_3(struct dlm_ls *VAR_1, uint32_t VAR_2, int VAR_3,
        struct rcom_slot *VAR_4, struct dlm_slot *VAR_5,
        int VAR_6)
{
 char VAR_7[VAR_0];
 int VAR_8 = VAR_0 - 1;
 int VAR_9 = 0;
 int VAR_10, VAR_11;

 FUNC_1(VAR_7, 0, sizeof(VAR_7));

 if (VAR_5) {
  for (VAR_11 = 0; VAR_11 < VAR_6; VAR_11++) {
   if (!VAR_5[VAR_11].nodeid)
    continue;

   VAR_10 = FUNC_2(VAR_7 + VAR_9, VAR_8 - VAR_9, " %d:%d",
           VAR_5[VAR_11].slot, VAR_5[VAR_11].nodeid);
   if (VAR_10 >= VAR_8 - VAR_9)
    break;
   VAR_9 += VAR_10;
  }
 } else if (VAR_4) {
  for (VAR_11 = 0; VAR_11 < VAR_3; VAR_11++) {
   VAR_10 = FUNC_2(VAR_7 + VAR_9, VAR_8 - VAR_9, " %d:%d",
           VAR_4[VAR_11].ro_slot, VAR_4[VAR_11].ro_nodeid);
   if (VAR_10 >= VAR_8 - VAR_9)
    break;
   VAR_9 += VAR_10;
  }
 }

 FUNC_0(VAR_1, "generation %u slots %d%s", VAR_2, VAR_3, VAR_7);
}
