
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qlcnic_host_tx_ring {int num_desc; int * desc_head; } ;
struct cmd_desc_type0 {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,int) ;
 int FUNC_1 (int ,char*,int ,int,int,int *,int,int) ;

__attribute__((used)) static inline void FUNC_2(struct qlcnic_host_tx_ring *VAR_2)
{
 int VAR_3;

 for (VAR_3 = 0; VAR_3 < VAR_2->num_desc; VAR_3++) {
  FUNC_0("TX Desc: %d\n", VAR_3);
  FUNC_1(VAR_1, "TX: ", VAR_0, 16, 1,
          &VAR_2->desc_head[VAR_3],
          sizeof(struct cmd_desc_type0), 1);
 }
}
