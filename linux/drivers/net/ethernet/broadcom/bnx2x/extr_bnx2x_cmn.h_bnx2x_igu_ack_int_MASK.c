
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
typedef scalar_t__ u16 ;
struct bnx2x {int dummy; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ,char*,scalar_t__,scalar_t__) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (struct bnx2x*,scalar_t__) ;
 int FUNC_2 () ;

__attribute__((used)) static inline u16 FUNC_3(struct bnx2x *VAR_3)
{
 u32 VAR_4 = (VAR_0 + VAR_1*8);
 u32 VAR_5 = FUNC_1(VAR_3, VAR_4);

 FUNC_0(VAR_2, "read 0x%08x from IGU addr 0x%x\n",
    VAR_5, VAR_4);

 FUNC_2();
 return VAR_5;
}
