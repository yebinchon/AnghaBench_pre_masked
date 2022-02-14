
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct fintek_8250 {int pid; } ;


 int VAR_0 ;
 int VAR_1 ;





 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct fintek_8250*,int ) ;

__attribute__((used)) static int FUNC_1(struct fintek_8250 *VAR_7)
{
 u16 VAR_8;

 if (FUNC_0(VAR_7, VAR_3) != VAR_4)
  return -VAR_2;

 if (FUNC_0(VAR_7, VAR_5) != VAR_6)
  return -VAR_2;

 VAR_8 = FUNC_0(VAR_7, VAR_0);
 VAR_8 |= FUNC_0(VAR_7, VAR_1) << 8;

 switch (VAR_8) {
 case 129:
 case 128:
 case 131:
 case 130:
 case 132:
  break;
 default:
  return -VAR_2;
 }

 VAR_7->pid = VAR_8;
 return 0;
}
