
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int irqreturn_t ;
struct TYPE_2__ {int suspend_ctrl; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 TYPE_1__ VAR_7 ;
 int FUNC_2 (int) ;
 scalar_t__ FUNC_3 (int) ;
 int VAR_8 ;
 int FUNC_4 (void*,int,int) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 scalar_t__ FUNC_7 () ;

__attribute__((used)) static irqreturn_t FUNC_8(int VAR_9, void *VAR_10)
{
 u8 VAR_11;
 u8 VAR_12;

 FUNC_5(&VAR_8);
 VAR_11 = FUNC_0(VAR_4);
 VAR_12 = FUNC_0(VAR_3);
 if (FUNC_7())
  VAR_11 = (unsigned long)VAR_9 & 0xF0;




 if (!VAR_7.suspend_ctrl)
  VAR_11 &= (VAR_12 & VAR_6) | VAR_5;
 else
  VAR_11 &= (VAR_7.suspend_ctrl & VAR_6) | VAR_5;





 if (VAR_11 & VAR_2) {
  VAR_7.suspend_ctrl &= ~VAR_2;
  VAR_12 &= ~VAR_2;
  FUNC_1(VAR_12, VAR_3);
  if (FUNC_7())
   FUNC_2(VAR_2);
  FUNC_0(VAR_4);
 }
 FUNC_6(&VAR_8);

 if (FUNC_3(VAR_11)) {
  FUNC_4(VAR_10, 1, VAR_11);
  return VAR_0;
 } else
  return VAR_1;
}
