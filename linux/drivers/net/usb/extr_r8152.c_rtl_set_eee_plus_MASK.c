
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct r8152 {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct r8152*,int ,int ) ;
 int FUNC_1 (struct r8152*,int ,int ,int ) ;
 int FUNC_2 (struct r8152*) ;

__attribute__((used)) static void FUNC_3(struct r8152 *VAR_4)
{
 u32 VAR_5;
 u8 VAR_6;

 VAR_6 = FUNC_2(VAR_4);
 if (VAR_6 & VAR_3) {
  VAR_5 = FUNC_0(VAR_4, VAR_1, VAR_2);
  VAR_5 |= VAR_0;
  FUNC_1(VAR_4, VAR_1, VAR_2, VAR_5);
 } else {
  VAR_5 = FUNC_0(VAR_4, VAR_1, VAR_2);
  VAR_5 &= ~VAR_0;
  FUNC_1(VAR_4, VAR_1, VAR_2, VAR_5);
 }
}
