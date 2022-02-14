
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct idt_ntb_dev {int dummy; } ;
typedef enum idt_temp_val { ____Placeholder_idt_temp_val } idt_temp_val ;


 int FUNC_0 (int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;




 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 long FUNC_1 (int ) ;
 long FUNC_2 (int ) ;
 int FUNC_3 (struct idt_ntb_dev*,int ) ;

__attribute__((used)) static void FUNC_4(struct idt_ntb_dev *VAR_6,
     const enum idt_temp_val VAR_7, long *VAR_8)
{
 u32 VAR_9;


 switch (VAR_7) {
 case 131:
  VAR_9 = FUNC_0(VAR_5,
     FUNC_3(VAR_6, VAR_1));
  break;
 case 129:
  VAR_9 = FUNC_0(VAR_4,
     FUNC_3(VAR_6, VAR_1));
  break;
 case 130:
  VAR_9 = FUNC_0(VAR_3,
     FUNC_3(VAR_6, VAR_1));
  break;
 case 128:

  VAR_9 = FUNC_0(VAR_2,
     FUNC_3(VAR_6, VAR_0));
  *VAR_8 = FUNC_1(VAR_9);
  return;
 default:
  VAR_9 = FUNC_0(VAR_5,
     FUNC_3(VAR_6, VAR_1));
  break;
 }


 *VAR_8 = FUNC_2(VAR_9);
}
