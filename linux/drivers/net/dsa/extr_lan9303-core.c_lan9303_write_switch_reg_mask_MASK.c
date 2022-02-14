
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;
struct lan9303 {int dummy; } ;


 int FUNC_0 (struct lan9303*,int ,int*) ;
 int FUNC_1 (struct lan9303*,int ,int) ;

__attribute__((used)) static int FUNC_2(struct lan9303 *VAR_0, u16 VAR_1,
      u32 VAR_2, u32 VAR_3)
{
 int VAR_4;
 u32 VAR_5;

 VAR_4 = FUNC_0(VAR_0, VAR_1, &VAR_5);
 if (VAR_4)
  return VAR_4;

 VAR_5 = (VAR_5 & ~VAR_3) | VAR_2;

 return FUNC_1(VAR_0, VAR_1, VAR_5);
}
