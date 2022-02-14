
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct spear_rtc_config {int lock; scalar_t__ ioaddr; } ;


 unsigned int VAR_0 ;
 scalar_t__ VAR_1 ;
 unsigned int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (unsigned int,scalar_t__) ;

__attribute__((used)) static inline void FUNC_4(struct spear_rtc_config *VAR_2)
{
 unsigned int VAR_3;
 unsigned long VAR_4;

 FUNC_1(&VAR_2->lock, VAR_4);
 VAR_3 = FUNC_0(VAR_2->ioaddr + VAR_1);
 VAR_3 |= VAR_0;
 FUNC_3(VAR_3, VAR_2->ioaddr + VAR_1);
 FUNC_2(&VAR_2->lock, VAR_4);
}
