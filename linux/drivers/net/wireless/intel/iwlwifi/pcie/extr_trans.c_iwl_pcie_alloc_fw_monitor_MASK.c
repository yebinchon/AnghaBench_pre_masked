
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_2__ {scalar_t__ num_blocks; } ;
struct iwl_trans {TYPE_1__ dbg; } ;


 scalar_t__ FUNC_0 (int,char*,int) ;
 int FUNC_1 (struct iwl_trans*,int,int) ;

void FUNC_2(struct iwl_trans *VAR_0, u8 VAR_1)
{
 if (!VAR_1) {

  VAR_1 = 26;
 } else {
  VAR_1 += 11;
 }

 if (FUNC_0(VAR_1 > 26,
   "External buffer size for monitor is too big %d, check the FW TLV\n",
   VAR_1))
  return;





 if (VAR_0->dbg.num_blocks)
  return;

 FUNC_1(VAR_0, VAR_1, 11);
}
