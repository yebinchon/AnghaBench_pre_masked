
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct r8152 {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct r8152*,int ,int ) ;
 int FUNC_1 (struct r8152*,int ,int ,int ) ;

__attribute__((used)) static void FUNC_2(struct r8152 *VAR_5, bool VAR_6)
{
 u32 VAR_7;

 VAR_7 = FUNC_0(VAR_5, VAR_0, VAR_4);
 if (VAR_6)
  VAR_7 |= VAR_1;
 else
  VAR_7 &= ~VAR_1;
 FUNC_1(VAR_5, VAR_0, VAR_4, VAR_7);

 VAR_7 = FUNC_0(VAR_5, VAR_0, VAR_3);
 VAR_7 &= ~VAR_2;
 FUNC_1(VAR_5, VAR_0, VAR_3, VAR_7);
}
