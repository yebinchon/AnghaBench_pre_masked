
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u32 ;
struct idt_ntb_dev {int dummy; } ;
typedef int spinlock_t ;


 int VAR_0 ;
 int FUNC_0 (struct idt_ntb_dev*,unsigned int) ;
 int FUNC_1 (struct idt_ntb_dev*,unsigned int,int) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;

__attribute__((used)) static inline int FUNC_4(struct idt_ntb_dev *VAR_1, unsigned int VAR_2,
       spinlock_t *VAR_3,
       u64 VAR_4, u64 VAR_5)
{
 unsigned long VAR_6;
 u32 VAR_7;

 if (VAR_5 & ~(u64)VAR_4)
  return -VAR_0;


 FUNC_2(VAR_3, VAR_6);
 VAR_7 = FUNC_0(VAR_1, VAR_2) | (u32)VAR_5;
 FUNC_1(VAR_1, VAR_2, VAR_7);

 FUNC_3(VAR_3, VAR_6);

 return 0;
}
