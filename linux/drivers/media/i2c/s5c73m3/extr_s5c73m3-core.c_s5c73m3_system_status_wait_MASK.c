
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
typedef scalar_t__ u16 ;
struct s5c73m3 {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct s5c73m3*,int,scalar_t__*) ;
 int FUNC_1 (unsigned int,unsigned int) ;

__attribute__((used)) static int FUNC_2(struct s5c73m3 *VAR_1, u32 VAR_2,
          unsigned int VAR_3, unsigned int VAR_4)
{
 u16 VAR_5 = 0;

 while (VAR_4-- > 0) {
  int VAR_6 = FUNC_0(VAR_1, 0x30100010, &VAR_5);
  if (VAR_6 < 0)
   return VAR_6;
  if (VAR_5 == VAR_2)
   return 0;
  FUNC_1(VAR_3, VAR_3 + 25);
 }
 return -VAR_0;
}
