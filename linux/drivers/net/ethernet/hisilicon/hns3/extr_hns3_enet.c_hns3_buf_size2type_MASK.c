
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static int FUNC_0(u32 VAR_4)
{
 int VAR_5;

 switch (VAR_4) {
 case 512:
  VAR_5 = VAR_3;
  break;
 case 1024:
  VAR_5 = VAR_0;
  break;
 case 2048:
  VAR_5 = VAR_1;
  break;
 case 4096:
  VAR_5 = VAR_2;
  break;
 default:
  VAR_5 = VAR_1;
 }

 return VAR_5;
}
