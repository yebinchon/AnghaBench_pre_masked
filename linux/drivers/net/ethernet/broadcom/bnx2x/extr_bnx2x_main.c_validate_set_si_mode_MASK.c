
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u8 ;
typedef int u32 ;
struct bnx2x {void** mf_config; int mf_mode; } ;
struct TYPE_2__ {int config; int mac_upper; } ;


 int FUNC_0 (char*) ;
 size_t FUNC_1 (struct bnx2x*) ;
 size_t FUNC_2 (struct bnx2x*) ;
 void* FUNC_3 (struct bnx2x*,int ) ;
 int VAR_0 ;
 TYPE_1__* VAR_1 ;

__attribute__((used)) static void FUNC_4(struct bnx2x *VAR_2)
{
 u8 VAR_3 = FUNC_1(VAR_2);
 u32 VAR_4;

 VAR_4 = FUNC_3(VAR_2, VAR_1[VAR_3].mac_upper);


 if (VAR_4 != 0xffff) {
  VAR_2->mf_mode = VAR_0;
  VAR_2->mf_config[FUNC_2(VAR_2)] =
   FUNC_3(VAR_2, VAR_1[VAR_3].config);
 } else
  FUNC_0("illegal MAC address for SI\n");
}
