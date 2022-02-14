
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct brcms_info {int isr_lock; int wlc; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;

u32 FUNC_3(struct brcms_info *VAR_0)
{
 unsigned long VAR_1;
 u32 VAR_2;

 FUNC_1(&VAR_0->isr_lock, VAR_1);
 VAR_2 = FUNC_0(VAR_0->wlc);
 FUNC_2(&VAR_0->isr_lock, VAR_1);
 return VAR_2;
}
