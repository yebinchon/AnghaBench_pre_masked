
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned long u32 ;
struct mvebu_mpp_ctrl_data {int dummy; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 unsigned int FUNC_0 (scalar_t__) ;
 int FUNC_1 (unsigned long,scalar_t__) ;

__attribute__((used)) static int FUNC_2(struct mvebu_mpp_ctrl_data *VAR_5,
         unsigned VAR_6, unsigned long VAR_7)
{
 unsigned VAR_8 = (VAR_6 % VAR_0) * VAR_1;

 if (VAR_6 < 16) {
  unsigned VAR_9 = (VAR_6 / VAR_0) * VAR_1;
  u32 VAR_10 = FUNC_0(VAR_4 + VAR_9) & ~(VAR_2 << VAR_8);
  FUNC_1(VAR_10 | (VAR_7 << VAR_8), VAR_4 + VAR_9);
 }
 else {
  u32 VAR_11 = FUNC_0(VAR_3) & ~(VAR_2 << VAR_8);
  FUNC_1(VAR_11 | (VAR_7 << VAR_8), VAR_3);
 }

 return 0;
}
