
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct bnx2x {int dummy; } ;


 scalar_t__ FUNC_0 (struct bnx2x*,scalar_t__) ;
 int FUNC_1 (int) ;

__attribute__((used)) static inline u32 FUNC_2(struct bnx2x *VAR_0, u32 VAR_1, u32 VAR_2, int VAR_3,
      int VAR_4)
{
 u32 VAR_5;

 do {
  VAR_5 = FUNC_0(VAR_0, VAR_1);
  if (VAR_5 == VAR_2)
   break;
  VAR_3 -= VAR_4;
  FUNC_1(VAR_4);

 } while (VAR_3 > 0);

 return VAR_5;
}
