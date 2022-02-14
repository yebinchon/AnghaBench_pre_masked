
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct ov5645 {int dummy; } ;
typedef scalar_t__ s32 ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__) ;
 int VAR_1 ;
 int FUNC_1 (struct ov5645*,int ,int ) ;

__attribute__((used)) static int FUNC_2(struct ov5645 *VAR_2, s32 VAR_3)
{
 u8 VAR_4 = 0;

 if (VAR_3) {
  VAR_4 = FUNC_0(VAR_3 - 1);
  VAR_4 |= VAR_1;
 }

 return FUNC_1(VAR_2, VAR_0, VAR_4);
}
