
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef scalar_t__ u32 ;
struct bnx2x {int dummy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,char*,int ,int ,int ,int ) ;
 int VAR_1 ;
 int FUNC_2 (struct bnx2x*,scalar_t__,int ) ;

__attribute__((used)) static void FUNC_3(struct bnx2x *VAR_2, u8 VAR_3,
        u8 VAR_4, u8 VAR_5,
        u8 VAR_6)
{
 u32 VAR_7 = VAR_0 +
     FUNC_0(VAR_4, VAR_5);
 FUNC_2(VAR_2, VAR_7, VAR_6);
 FUNC_1(VAR_1,
    "port %x fw_sb_id %d sb_index %d ticks %d\n",
    VAR_3, VAR_4, VAR_5, VAR_6);
}
