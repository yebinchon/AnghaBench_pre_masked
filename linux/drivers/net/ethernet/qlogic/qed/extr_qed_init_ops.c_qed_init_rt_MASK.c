
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
typedef size_t u16 ;
struct qed_ptt {int dummy; } ;
struct TYPE_2__ {int* b_valid; scalar_t__* init_val; } ;
struct qed_hwfn {TYPE_1__ rt_data; } ;


 int FUNC_0 (struct qed_hwfn*,struct qed_ptt*,uintptr_t,scalar_t__,size_t,int *) ;
 int FUNC_1 (struct qed_hwfn*,struct qed_ptt*,scalar_t__,scalar_t__) ;

__attribute__((used)) static int FUNC_2(struct qed_hwfn *VAR_0,
         struct qed_ptt *VAR_1,
         u32 VAR_2, u16 VAR_3, u16 VAR_4, bool VAR_5)
{
 u32 *VAR_6 = &VAR_0->rt_data.init_val[VAR_3];
 bool *VAR_7 = &VAR_0->rt_data.b_valid[VAR_3];
 u16 VAR_8, VAR_9;
 int VAR_10 = 0;




 for (VAR_8 = 0; VAR_8 < VAR_4; VAR_8++) {
  if (!VAR_7[VAR_8])
   continue;




  if (!VAR_5) {
   FUNC_1(VAR_0, VAR_1, VAR_2 + (VAR_8 << 2), VAR_6[VAR_8]);
   continue;
  }


  for (VAR_9 = 1; VAR_8 + VAR_9 < VAR_4; VAR_9++)
   if (!VAR_7[VAR_8 + VAR_9])
    break;

  VAR_10 = FUNC_0(VAR_0, VAR_1,
           (uintptr_t)(VAR_6 + VAR_8),
           VAR_2 + (VAR_8 << 2), VAR_9, ((void*)0));
  if (VAR_10)
   return VAR_10;


  VAR_8 += VAR_9;
 }

 return VAR_10;
}
