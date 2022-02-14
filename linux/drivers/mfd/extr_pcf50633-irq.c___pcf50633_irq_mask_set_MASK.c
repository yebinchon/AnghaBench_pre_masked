
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct pcf50633 {int* mask_regs; int lock; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct pcf50633*,int,int,int) ;

__attribute__((used)) static int FUNC_3(struct pcf50633 *VAR_1, int VAR_2, u8 VAR_3)
{
 u8 VAR_4, VAR_5;
 int VAR_6;

 VAR_6 = VAR_2 >> 3;
 VAR_4 = VAR_0 + VAR_6;
 VAR_5 = 1 << (VAR_2 & 0x07);

 FUNC_2(VAR_1, VAR_4, VAR_5, VAR_3 ? VAR_5 : 0);

 FUNC_0(&VAR_1->lock);

 if (VAR_3)
  VAR_1->mask_regs[VAR_6] |= VAR_5;
 else
  VAR_1->mask_regs[VAR_6] &= ~VAR_5;

 FUNC_1(&VAR_1->lock);

 return 0;
}
