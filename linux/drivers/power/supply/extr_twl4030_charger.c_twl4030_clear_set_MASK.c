
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;


 int FUNC_0 (int ,int *,int ) ;
 int FUNC_1 (int ,int ,int ) ;

__attribute__((used)) static int FUNC_2(u8 VAR_0, u8 VAR_1, u8 VAR_2, u8 VAR_3)
{
 u8 VAR_4 = 0;
 int VAR_5;

 VAR_5 = FUNC_0(VAR_0, &VAR_4, VAR_3);
 if (VAR_5)
  return VAR_5;

 VAR_4 &= ~VAR_1;
 VAR_4 |= VAR_2;

 return FUNC_1(VAR_0, VAR_4, VAR_3);
}
