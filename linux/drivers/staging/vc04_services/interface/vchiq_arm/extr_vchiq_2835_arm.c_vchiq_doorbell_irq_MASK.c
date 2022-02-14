
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vchiq_state {int dummy; } ;
typedef int irqreturn_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 unsigned int FUNC_0 (scalar_t__) ;
 int FUNC_1 (struct vchiq_state*) ;

__attribute__((used)) static irqreturn_t
FUNC_2(int VAR_4, void *VAR_5)
{
 struct vchiq_state *VAR_6 = VAR_5;
 irqreturn_t VAR_7 = VAR_2;
 unsigned int VAR_8;


 VAR_8 = FUNC_0(VAR_3 + VAR_0);

 if (VAR_8 & 0x4) {
  FUNC_1(VAR_6);
  VAR_7 = VAR_1;
 }

 return VAR_7;
}
