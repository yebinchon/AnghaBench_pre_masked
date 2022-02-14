
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct TYPE_2__ {scalar_t__ cookie; } ;
struct qed_spq_entry {TYPE_1__ comp_cb; } ;
struct qed_spq_comp_done {int fw_return_code; int done; } ;
struct qed_hwfn {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3(struct qed_hwfn *VAR_5,
      struct qed_spq_entry *VAR_6,
      u8 *VAR_7, bool VAR_8)
{
 struct qed_spq_comp_done *VAR_9;
 u32 VAR_10;

 VAR_9 = (struct qed_spq_comp_done *)VAR_6->comp_cb.cookie;
 VAR_10 = VAR_8 ? VAR_3
          : VAR_1;

 while (VAR_10--) {

  if (FUNC_1(&VAR_9->done) == 1) {
   if (VAR_7)
    *VAR_7 = VAR_9->fw_return_code;
   return 0;
  }

  if (VAR_8)
   FUNC_0(VAR_4);
  else
   FUNC_2(VAR_2);
 }

 return -VAR_0;
}
