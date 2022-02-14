
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct sky2_hw {int dummy; } ;


 unsigned int FUNC_0 (unsigned int,unsigned int) ;
 scalar_t__ FUNC_1 (struct sky2_hw*,unsigned int) ;

__attribute__((used)) static inline u64 FUNC_2(struct sky2_hw *VAR_0, unsigned VAR_1, unsigned VAR_2)
{
 unsigned VAR_3 = FUNC_0(VAR_1, VAR_2);

 return (u64) FUNC_1(VAR_0, VAR_3)
  | (u64) FUNC_1(VAR_0, VAR_3+4) << 16
  | (u64) FUNC_1(VAR_0, VAR_3+8) << 32
  | (u64) FUNC_1(VAR_0, VAR_3+12) << 48;
}
