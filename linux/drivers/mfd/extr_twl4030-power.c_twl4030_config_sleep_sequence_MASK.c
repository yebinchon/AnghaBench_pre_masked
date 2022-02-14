
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int ,int ,int ) ;

__attribute__((used)) static int FUNC_2(u8 VAR_2)
{
 int VAR_3;


 VAR_3 = FUNC_1(VAR_1, VAR_2, VAR_0);

 if (VAR_3)
  FUNC_0("TWL4030 sleep sequence config error\n");

 return VAR_3;
}
