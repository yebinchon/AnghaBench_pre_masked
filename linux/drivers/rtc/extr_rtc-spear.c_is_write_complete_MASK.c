
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct spear_rtc_config {int lock; scalar_t__ ioaddr; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;

__attribute__((used)) static inline int FUNC_3(struct spear_rtc_config *VAR_3)
{
 int VAR_4 = 0;
 unsigned long VAR_5;

 FUNC_1(&VAR_3->lock, VAR_5);
 if ((FUNC_0(VAR_3->ioaddr + VAR_2)) & VAR_1)
  VAR_4 = -VAR_0;
 FUNC_2(&VAR_3->lock, VAR_5);

 return VAR_4;
}
