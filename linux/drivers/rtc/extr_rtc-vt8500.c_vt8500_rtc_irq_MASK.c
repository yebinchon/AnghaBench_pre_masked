
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct vt8500_rtc {int rtc; int lock; scalar_t__ regbase; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 unsigned long VAR_1 ;
 unsigned long VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int ,int,unsigned long) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int,scalar_t__) ;

__attribute__((used)) static irqreturn_t FUNC_5(int VAR_5, void *VAR_6)
{
 struct vt8500_rtc *VAR_7 = VAR_6;
 u32 VAR_8;
 unsigned long VAR_9 = 0;

 FUNC_2(&VAR_7->lock);


 VAR_8 = FUNC_0(VAR_7->regbase + VAR_3);
 FUNC_4(VAR_8, VAR_7->regbase + VAR_3);

 FUNC_3(&VAR_7->lock);

 if (VAR_8 & VAR_4)
  VAR_9 |= VAR_1 | VAR_2;

 FUNC_1(VAR_7->rtc, 1, VAR_9);

 return VAR_0;
}
