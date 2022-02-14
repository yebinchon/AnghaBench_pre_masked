
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct asm9260_rtc_priv {TYPE_1__* rtc; scalar_t__ iobase; } ;
typedef int irqreturn_t ;
struct TYPE_2__ {int ops_lock; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned long VAR_3 ;
 unsigned long VAR_4 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int ,scalar_t__) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (TYPE_1__*,int,unsigned long) ;

__attribute__((used)) static irqreturn_t FUNC_5(int VAR_5, void *VAR_6)
{
 struct asm9260_rtc_priv *VAR_7 = VAR_6;
 u32 VAR_8;
 unsigned long VAR_9 = 0;

 FUNC_2(&VAR_7->rtc->ops_lock);
 VAR_8 = FUNC_0(VAR_7->iobase + VAR_0);
 if (!VAR_8) {
  FUNC_3(&VAR_7->rtc->ops_lock);
  return VAR_2;
 }

 FUNC_1(0, VAR_7->iobase + VAR_0);
 FUNC_3(&VAR_7->rtc->ops_lock);

 VAR_9 |= VAR_3 | VAR_4;

 FUNC_4(VAR_7->rtc, 1, VAR_9);

 return VAR_1;
}
