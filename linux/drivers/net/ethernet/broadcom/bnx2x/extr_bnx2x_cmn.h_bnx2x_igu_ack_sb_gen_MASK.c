
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct igu_regular {int sb_id_and_flags; int member_0; } ;
struct bnx2x {int dummy; } ;


 int FUNC_0 (int ,char*,int,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct bnx2x*,int ,int) ;
 int FUNC_2 () ;

__attribute__((used)) static inline void FUNC_3(struct bnx2x *VAR_5, u8 VAR_6,
     u8 VAR_7, u16 VAR_8, u8 VAR_9,
     u8 VAR_10, u32 VAR_11)
{
 struct igu_regular VAR_12 = {0};

 VAR_12.sb_id_and_flags =
   ((VAR_8 << VAR_2) |
    (VAR_7 << VAR_3) |
    (VAR_10 << VAR_0) |
    (VAR_9 << VAR_1));

 FUNC_0(VAR_4, "write 0x%08x to IGU addr 0x%x\n",
    VAR_12.sb_id_and_flags, VAR_11);
 FUNC_1(VAR_5, VAR_11, VAR_12.sb_id_and_flags);


 FUNC_2();
}
