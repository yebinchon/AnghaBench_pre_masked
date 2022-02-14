
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int __u16 ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,char*,int) ;

__attribute__((used)) static __u16 FUNC_1(int VAR_4)
{
 __u16 VAR_5 = 0;

 switch (VAR_4) {
  case 128:
   VAR_5 = VAR_2 | VAR_3;
   break;
  case 132:
   VAR_5 = VAR_1;
   break;
  case 133:
   VAR_5 = VAR_2;
   break;
  case 131:
   VAR_5 = VAR_2 | VAR_1;
   break;
  case 130:
   VAR_5 = VAR_3;
   break;
  case 129:
   VAR_5 = VAR_2 | VAR_3;
   break;
  default:
   FUNC_0(VAR_0, "unknown disposition %d\n", VAR_4);
   VAR_5 = VAR_1;
 }
 return VAR_5;
}
