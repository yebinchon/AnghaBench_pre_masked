
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct bnx2x {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int) ;
 int FUNC_1 (int ,char*,int,int ,int,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (struct bnx2x*,int) ;
 int FUNC_3 (struct bnx2x*,int,int) ;

__attribute__((used)) static void FUNC_4(struct bnx2x *VAR_4, u8 VAR_5,
        u16 VAR_6, u8 VAR_7,
        u8 VAR_8)
{
 u32 VAR_9 = VAR_8 ? 0 : (1 << VAR_2);
 u32 VAR_10 = VAR_0 +
     FUNC_0(VAR_6, VAR_7);
 u8 VAR_11 = FUNC_2(VAR_4, VAR_10);

 VAR_11 &= ~VAR_1;
 VAR_11 |= VAR_9;
 FUNC_3(VAR_4, VAR_10, VAR_11);
 FUNC_1(VAR_3,
    "port %x fw_sb_id %d sb_index %d disable %d\n",
    VAR_5, VAR_6, VAR_7, VAR_8);
}
