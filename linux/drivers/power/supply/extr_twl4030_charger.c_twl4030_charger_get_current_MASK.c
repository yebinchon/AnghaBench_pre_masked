
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int,int) ;
 int FUNC_1 (int ,int*) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3(void)
{
 int VAR_3;
 int VAR_4;
 u8 VAR_5;

 VAR_3 = FUNC_2(VAR_1);
 if (VAR_3 < 0)
  return VAR_3;

 VAR_4 = FUNC_1(VAR_0, &VAR_5);
 if (VAR_4)
  return VAR_4;

 return FUNC_0(VAR_3, VAR_5 & VAR_2);
}
