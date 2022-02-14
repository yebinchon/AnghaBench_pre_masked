
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u32 ;
struct qed_ptt {int dummy; } ;
struct dbg_tools_data {size_t chip_id; } ;
struct qed_hwfn {struct dbg_tools_data dbg_info; } ;
struct TYPE_2__ {int addr; int * exists; } ;


 int FUNC_0 (int ) ;
 size_t VAR_0 ;
 int VAR_1 ;
 size_t FUNC_1 (struct qed_hwfn*,struct qed_ptt*,size_t*,int,int ,int,int,int ,int ) ;
 size_t FUNC_2 (size_t*,int,size_t,int ,int ,int *,int *) ;
 TYPE_1__* VAR_2 ;

__attribute__((used)) static u32 FUNC_3(struct qed_hwfn *VAR_3,
       struct qed_ptt *VAR_4,
       u32 *VAR_5, bool VAR_6)
{
 struct dbg_tools_data *VAR_7 = &VAR_3->dbg_info;
 u32 VAR_8, VAR_9 = 0, VAR_10 = 0;


 VAR_9 += FUNC_2(VAR_5,
     0, 0,
     VAR_1, 0, ((void*)0), ((void*)0));


 for (VAR_8 = 0; VAR_8 < VAR_0; VAR_8++) {
  if (!VAR_2[VAR_8].exists[VAR_7->chip_id])
   continue;

  VAR_9 += FUNC_1(VAR_3,
       VAR_4,
       VAR_5 + VAR_9,
       VAR_6,
       FUNC_0
       (VAR_2[VAR_8].addr), 1,
       0, VAR_1, 0);
  VAR_10++;
 }


 if (VAR_6)
  FUNC_2(VAR_5,
          1, VAR_10, VAR_1,
          0, ((void*)0), ((void*)0));

 return VAR_9;
}
