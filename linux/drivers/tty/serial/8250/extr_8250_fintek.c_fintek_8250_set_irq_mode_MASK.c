
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fintek_8250 {int pid; int index; } ;







 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (struct fintek_8250*,int ,int ,int ) ;
 int FUNC_1 (struct fintek_8250*,int ,int ) ;

__attribute__((used)) static void FUNC_2(struct fintek_8250 *VAR_11, bool VAR_12)
{
 FUNC_1(VAR_11, VAR_10, VAR_11->index);

 switch (VAR_11->pid) {
 case 128:
  FUNC_0(VAR_11, VAR_0, VAR_3,
       0);

 case 129:
  FUNC_0(VAR_11, VAR_1, VAR_4,
       VAR_4);
  FUNC_0(VAR_11, VAR_1, VAR_2,
       VAR_12 ? 0 : VAR_2);
  break;

 case 131:
 case 130:
 case 132:
  FUNC_0(VAR_11, VAR_5, VAR_9,
       VAR_9);
  FUNC_0(VAR_11, VAR_5, VAR_8,
       VAR_12 ? VAR_7 : VAR_6);
  break;
 }
}
