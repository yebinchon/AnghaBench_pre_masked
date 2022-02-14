
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int u32 ;
struct sa1100fb_info {scalar_t__ base; int ctrlr_wait; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 unsigned int VAR_2 ;
 scalar_t__ VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (unsigned int,scalar_t__) ;

__attribute__((used)) static irqreturn_t FUNC_3(int VAR_5, void *VAR_6)
{
 struct sa1100fb_info *VAR_7 = VAR_6;
 unsigned int VAR_8 = FUNC_0(VAR_7->base + VAR_3);

 if (VAR_8 & VAR_4) {
  u32 VAR_9 = FUNC_0(VAR_7->base + VAR_1) | VAR_2;
  FUNC_2(VAR_9, VAR_7->base + VAR_1);
  FUNC_1(&VAR_7->ctrlr_wait);
 }

 FUNC_2(VAR_8, VAR_7->base + VAR_3);
 return VAR_0;
}
