
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bcm_kona_wdt {int lock; scalar_t__ base; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct bcm_kona_wdt*,scalar_t__) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int,scalar_t__) ;

__attribute__((used)) static int FUNC_4(struct bcm_kona_wdt *VAR_1,
     unsigned VAR_2, unsigned VAR_3)
{
 int VAR_4;
 unsigned long VAR_5;
 int VAR_6 = 0;

 FUNC_1(&VAR_1->lock, VAR_5);

 VAR_4 = FUNC_0(VAR_1, VAR_0);
 if (VAR_4 < 0) {
  VAR_6 = VAR_4;
 } else {
  VAR_4 &= ~VAR_2;
  VAR_4 |= VAR_3;
  FUNC_3(VAR_4, VAR_1->base + VAR_0);
 }

 FUNC_2(&VAR_1->lock, VAR_5);

 return VAR_6;
}
