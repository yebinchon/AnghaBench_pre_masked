
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef union event_ring_data {int dummy; } event_ring_data ;
typedef int u8 ;
struct qed_spq_comp_done {int done; int fw_return_code; } ;
struct qed_hwfn {int dummy; } ;


 int FUNC_0 (int *,int) ;

__attribute__((used)) static void FUNC_1(struct qed_hwfn *VAR_0,
    void *VAR_1,
    union event_ring_data *VAR_2, u8 VAR_3)
{
 struct qed_spq_comp_done *VAR_4;

 VAR_4 = (struct qed_spq_comp_done *)VAR_1;

 VAR_4->fw_return_code = VAR_3;


 FUNC_0(&VAR_4->done, 0x1);
}
