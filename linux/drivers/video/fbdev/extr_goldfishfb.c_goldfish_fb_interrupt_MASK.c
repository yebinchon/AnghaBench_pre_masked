
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct goldfish_fb {int lock; int wait; int base_update_count; scalar_t__ reg_base; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static irqreturn_t FUNC_4(int VAR_4, void *VAR_5)
{
 unsigned long VAR_6;
 struct goldfish_fb *VAR_7 = VAR_5;
 u32 VAR_8;

 FUNC_1(&VAR_7->lock, VAR_6);
 VAR_8 = FUNC_0(VAR_7->reg_base + VAR_1);
 if (VAR_8 & VAR_0) {
  VAR_7->base_update_count++;
  FUNC_3(&VAR_7->wait);
 }
 FUNC_2(&VAR_7->lock, VAR_6);
 return VAR_8 ? VAR_2 : VAR_3;
}
