
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rvu {int dummy; } ;
struct npc_mcam_kex {int *** intf_ld_flags; int **** intf_lid_lt_ld; int * kex_ld_flags; int * keyx_cfg; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (size_t) ;
 int FUNC_1 (int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (size_t,int,int,int,int ) ;
 int FUNC_3 (size_t,int,int,int ) ;
 int FUNC_4 (struct rvu*,int,int ,int ) ;

__attribute__((used)) static void FUNC_5(struct rvu *VAR_6, int VAR_7,
         struct npc_mcam_kex *VAR_8)
{
 int VAR_9, VAR_10, VAR_11, VAR_12;

 FUNC_4(VAR_6, VAR_7, FUNC_0(VAR_0),
      VAR_8->keyx_cfg[VAR_0]);
 FUNC_4(VAR_6, VAR_7, FUNC_0(VAR_1),
      VAR_8->keyx_cfg[VAR_1]);

 for (VAR_11 = 0; VAR_11 < VAR_2; VAR_11++)
  FUNC_4(VAR_6, VAR_7, FUNC_1(VAR_11),
       VAR_8->kex_ld_flags[VAR_11]);

 for (VAR_9 = 0; VAR_9 < VAR_4; VAR_9++) {
  for (VAR_10 = 0; VAR_10 < VAR_5; VAR_10++) {
   for (VAR_11 = 0; VAR_11 < VAR_2; VAR_11++) {
    FUNC_2(VAR_0, VAR_9, VAR_10, VAR_11,
        VAR_8->intf_lid_lt_ld[VAR_0]
        [VAR_9][VAR_10][VAR_11]);

    FUNC_2(VAR_1, VAR_9, VAR_10, VAR_11,
        VAR_8->intf_lid_lt_ld[VAR_1]
        [VAR_9][VAR_10][VAR_11]);
   }
  }
 }

 for (VAR_11 = 0; VAR_11 < VAR_2; VAR_11++) {
  for (VAR_12 = 0; VAR_12 < VAR_3; VAR_12++) {
   FUNC_3(VAR_0, VAR_11, VAR_12,
     VAR_8->intf_ld_flags[VAR_0]
     [VAR_11][VAR_12]);

   FUNC_3(VAR_1, VAR_11, VAR_12,
     VAR_8->intf_ld_flags[VAR_1]
     [VAR_11][VAR_12]);
  }
 }
}
