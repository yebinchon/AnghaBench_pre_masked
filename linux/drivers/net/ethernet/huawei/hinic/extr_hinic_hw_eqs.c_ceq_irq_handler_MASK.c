
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct hinic_eq {int q_len; int wrapped; int cons_idx; } ;
struct hinic_ceqs {int dummy; } ;


 int * FUNC_0 (struct hinic_eq*) ;
 int FUNC_1 (int ,int ) ;
 int VAR_0 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct hinic_ceqs*,int ) ;
 struct hinic_ceqs* FUNC_4 (struct hinic_eq*) ;

__attribute__((used)) static void FUNC_5(struct hinic_eq *VAR_1)
{
 struct hinic_ceqs *VAR_2 = FUNC_4(VAR_1);
 u32 VAR_3;
 int VAR_4;

 for (VAR_4 = 0; VAR_4 < VAR_1->q_len; VAR_4++) {
  VAR_3 = *(FUNC_0(VAR_1));


  VAR_3 = FUNC_2(VAR_3);


  if (FUNC_1(VAR_3, VAR_0) == VAR_1->wrapped)
   break;

  FUNC_3(VAR_2, VAR_3);

  VAR_1->cons_idx++;

  if (VAR_1->cons_idx == VAR_1->q_len) {
   VAR_1->cons_idx = 0;
   VAR_1->wrapped = !VAR_1->wrapped;
  }
 }
}
