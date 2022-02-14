
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rvu {int mkex_pfl_name; } ;
struct npc_get_kex_cfg_rsp {int mkex_pfl_name; void**** intf_ld_flags; int * kex_ld_flags; void***** intf_lid_lt_ld; void* tx_keyx_cfg; void* rx_keyx_cfg; } ;
struct msg_req {int dummy; } ;


 void* FUNC_0 (size_t) ;
 int FUNC_1 (int) ;
 void* FUNC_2 (size_t,int,int,int) ;
 void* FUNC_3 (size_t,int,int) ;
 int VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_4 (int ,int ,int ) ;

int FUNC_5(struct rvu *VAR_7, struct msg_req *VAR_8,
         struct npc_get_kex_cfg_rsp *VAR_9)
{
 int VAR_10, VAR_11, VAR_12, VAR_13;

 VAR_9->rx_keyx_cfg = FUNC_0(VAR_1);
 VAR_9->tx_keyx_cfg = FUNC_0(VAR_2);
 for (VAR_10 = 0; VAR_10 < VAR_5; VAR_10++) {
  for (VAR_11 = 0; VAR_11 < VAR_6; VAR_11++) {
   for (VAR_12 = 0; VAR_12 < VAR_3; VAR_12++) {
    VAR_9->intf_lid_lt_ld[VAR_1][VAR_10][VAR_11][VAR_12] =
     FUNC_2(VAR_1, VAR_10, VAR_11, VAR_12);
    VAR_9->intf_lid_lt_ld[VAR_2][VAR_10][VAR_11][VAR_12] =
     FUNC_2(VAR_2, VAR_10, VAR_11, VAR_12);
   }
  }
 }
 for (VAR_12 = 0; VAR_12 < VAR_3; VAR_12++)
  VAR_9->kex_ld_flags[VAR_12] = FUNC_1(VAR_12);

 for (VAR_12 = 0; VAR_12 < VAR_3; VAR_12++) {
  for (VAR_13 = 0; VAR_13 < VAR_4; VAR_13++) {
   VAR_9->intf_ld_flags[VAR_1][VAR_12][VAR_13] =
     FUNC_3(VAR_1, VAR_12, VAR_13);
   VAR_9->intf_ld_flags[VAR_2][VAR_12][VAR_13] =
     FUNC_3(VAR_2, VAR_12, VAR_13);
  }
 }
 FUNC_4(VAR_9->mkex_pfl_name, VAR_7->mkex_pfl_name, VAR_0);
 return 0;
}
