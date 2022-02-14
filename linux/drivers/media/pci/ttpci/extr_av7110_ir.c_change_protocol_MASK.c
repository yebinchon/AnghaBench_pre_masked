
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
typedef scalar_t__ u32 ;
struct rc_dev {struct av7110* priv; } ;
struct TYPE_2__ {scalar_t__ ir_config; } ;
struct av7110 {TYPE_1__ ir; int arm_app; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (struct av7110*) ;

__attribute__((used)) static int FUNC_2(struct rc_dev *VAR_6, u64 *VAR_7)
{
 struct av7110 *VAR_8 = VAR_6->priv;
 u32 VAR_9;

 if (*VAR_7 & VAR_5) {
  VAR_9 = VAR_3;
  *VAR_7 = VAR_5;
 } else if (*VAR_7 & VAR_4) {
  if (FUNC_0(VAR_8->arm_app) >= 0x2620)
   VAR_9 = VAR_2;
  else
   VAR_9 = VAR_1;
  *VAR_7 = VAR_4;
 } else {
  return -VAR_0;
 }

 if (VAR_9 == VAR_8->ir.ir_config)
  return 0;

 VAR_8->ir.ir_config = VAR_9;

 return FUNC_1(VAR_8);
}
