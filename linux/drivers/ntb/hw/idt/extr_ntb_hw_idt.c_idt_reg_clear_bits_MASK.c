
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
typedef int u32 ;
struct idt_ntb_dev {int dummy; } ;
typedef int spinlock_t ;


 int FUNC_0 (struct idt_ntb_dev*,unsigned int) ;
 int FUNC_1 (struct idt_ntb_dev*,unsigned int,int) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;

__attribute__((used)) static inline void FUNC_4(struct idt_ntb_dev *VAR_0,
         unsigned int VAR_1, spinlock_t *VAR_2,
         u64 VAR_3)
{
 unsigned long VAR_4;
 u32 VAR_5;


 FUNC_2(VAR_2, VAR_4);
 VAR_5 = FUNC_0(VAR_0, VAR_1) & ~(u32)VAR_3;
 FUNC_1(VAR_0, VAR_1, VAR_5);

 FUNC_3(VAR_2, VAR_4);
}
