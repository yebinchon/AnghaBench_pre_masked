
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct meson_ir {int lock; int rc; scalar_t__ reg; } ;
struct ir_raw_event {int pulse; int duration; } ;
typedef int irqreturn_t ;


 int FUNC_0 (int ,int) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ,struct ir_raw_event*) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static irqreturn_t FUNC_6(int VAR_6, void *VAR_7)
{
 struct meson_ir *VAR_8 = VAR_7;
 u32 VAR_9, VAR_10;
 struct ir_raw_event VAR_11 = {};

 FUNC_4(&VAR_8->lock);

 VAR_9 = FUNC_3(VAR_8->reg + VAR_1);
 VAR_9 = FUNC_0(VAR_4, VAR_9);
 VAR_11.duration = FUNC_1(VAR_9 * VAR_3);

 VAR_10 = FUNC_3(VAR_8->reg + VAR_2);
 VAR_11.pulse = !!(VAR_10 & VAR_5);

 FUNC_2(VAR_8->rc, &VAR_11);

 FUNC_5(&VAR_8->lock);

 return VAR_0;
}
