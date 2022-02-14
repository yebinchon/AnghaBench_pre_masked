
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fintek_8250 {int pid; } ;




 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct fintek_8250*,int ,int,int) ;

__attribute__((used)) static void FUNC_1(struct fintek_8250 *VAR_5)
{
 switch (VAR_5->pid) {
 case 129:
 case 128:
  FUNC_0(VAR_5, VAR_0,
       VAR_2 | VAR_4,
       VAR_1 | VAR_3);
  break;

 default:
  break;
 }
}
