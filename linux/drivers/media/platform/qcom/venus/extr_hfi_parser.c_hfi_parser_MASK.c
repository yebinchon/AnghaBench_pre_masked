
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct venus_inst {int dummy; } ;
struct venus_core {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;







 int FUNC_0 (struct venus_core*) ;
 int FUNC_1 (struct venus_core*,int,int,int*) ;
 int FUNC_2 (struct venus_core*,int,int,int*) ;
 int FUNC_3 (struct venus_core*,int*) ;
 int FUNC_4 (int*,int*,int*) ;
 int FUNC_5 (struct venus_core*,int*) ;
 int FUNC_6 (struct venus_core*,int,int,int*) ;
 int FUNC_7 (struct venus_core*,int,int,int*) ;
 int FUNC_8 (struct venus_inst*,int,int) ;
 int FUNC_9 (struct venus_inst*,int*,int*) ;

u32 FUNC_10(struct venus_core *VAR_2, struct venus_inst *VAR_3, void *VAR_4,
        u32 VAR_5)
{
 unsigned int VAR_6 = VAR_5 >> 2;
 u32 *VAR_7 = VAR_4, *VAR_8, VAR_9 = 0, VAR_10 = 0;

 if (VAR_5 % 4)
  return VAR_1;

 FUNC_9(VAR_3, &VAR_9, &VAR_10);

 while (VAR_6) {
  VAR_8 = VAR_7 + 1;

  switch (*VAR_7) {
  case 131:
   FUNC_3(VAR_2, VAR_8);
   FUNC_0(VAR_2);
   break;
  case 130:
   FUNC_5(VAR_2, VAR_8);
   break;
  case 132:
   FUNC_4(&VAR_9, &VAR_10, VAR_8);
   break;
  case 128:
   FUNC_7(VAR_2, VAR_9, VAR_10, VAR_8);
   break;
  case 133:
   FUNC_2(VAR_2, VAR_9, VAR_10, VAR_8);
   break;
  case 129:
   FUNC_6(VAR_2, VAR_9, VAR_10, VAR_8);
   break;
  case 134:
   FUNC_1(VAR_2, VAR_9, VAR_10, VAR_8);
   break;
  default:
   break;
  }

  VAR_7++;
  VAR_6--;
 }

 FUNC_8(VAR_3, VAR_9, VAR_10);

 return VAR_0;
}
