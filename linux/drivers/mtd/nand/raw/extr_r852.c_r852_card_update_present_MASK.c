
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct r852_device {int card_detected; int irqlock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct r852_device*,int ) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_3(struct r852_device *VAR_2)
{
 unsigned long VAR_3;
 uint8_t VAR_4;

 FUNC_1(&VAR_2->irqlock, VAR_3);
 VAR_4 = FUNC_0(VAR_2, VAR_0);
 VAR_2->card_detected = !!(VAR_4 & VAR_1);
 FUNC_2(&VAR_2->irqlock, VAR_3);
}
