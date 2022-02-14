
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bnx2x_config_rss_params {int * ind_table; } ;
struct bnx2x {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,...) ;
 int FUNC_1 (int ,char*,...) ;
 int VAR_1 ;

__attribute__((used)) static inline void FUNC_2(struct bnx2x *VAR_2,
     struct bnx2x_config_rss_params *VAR_3)
{
 int VAR_4;

 FUNC_0(VAR_0, "Setting indirection table to:\n");
 FUNC_0(VAR_0, "0x0000: ");
 for (VAR_4 = 0; VAR_4 < VAR_1; VAR_4++) {
  FUNC_1(VAR_0, "0x%02x ", VAR_3->ind_table[VAR_4]);


  if ((VAR_4 + 1 < VAR_1) &&
      (((VAR_4 + 1) & 0x3) == 0)) {
   FUNC_1(VAR_0, "\n");
   FUNC_0(VAR_0, "0x%04x: ", VAR_4 + 1);
  }
 }

 FUNC_1(VAR_0, "\n");
}
