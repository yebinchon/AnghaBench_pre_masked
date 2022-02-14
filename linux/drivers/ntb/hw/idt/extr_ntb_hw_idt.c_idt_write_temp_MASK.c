
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct idt_ntb_dev {int hwmon_mtx; } ;
typedef enum idt_temp_val { ____Placeholder_idt_temp_val } idt_temp_val ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;



 int VAR_2 ;
 int FUNC_0 (int ,int ,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (struct idt_ntb_dev*,unsigned int) ;
 int FUNC_2 (struct idt_ntb_dev*,unsigned int,int) ;
 int FUNC_3 (long const) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static void FUNC_6(struct idt_ntb_dev *VAR_6,
      const enum idt_temp_val VAR_7, const long VAR_8)
{
 unsigned int VAR_9;
 u32 VAR_10;
 u8 VAR_11;


 VAR_11 = FUNC_3(VAR_8);

 FUNC_4(&VAR_6->hwmon_mtx);
 switch (VAR_7) {
 case 129:
  VAR_9 = VAR_1;
  VAR_10 = FUNC_0(VAR_5, FUNC_1(VAR_6, VAR_9), VAR_11) &
   ~VAR_2;
  break;
 case 130:
  VAR_9 = VAR_1;
  VAR_10 = FUNC_0(VAR_4, FUNC_1(VAR_6, VAR_9), VAR_11) &
   ~VAR_2;
  break;
 case 128:
  VAR_9 = VAR_0;
  VAR_10 = FUNC_0(VAR_3, FUNC_1(VAR_6, VAR_9), VAR_11);
  break;
 default:
  goto inval_spin_unlock;
 }

 FUNC_2(VAR_6, VAR_9, VAR_10);

inval_spin_unlock:
 FUNC_5(&VAR_6->hwmon_mtx);
}
