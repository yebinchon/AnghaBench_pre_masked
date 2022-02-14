
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct cx23885_dev {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int ,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (int ,int) ;
 unsigned long VAR_8 ;
 unsigned long FUNC_4 (int) ;
 scalar_t__ FUNC_5 (unsigned long,unsigned long) ;
 int FUNC_6 (int) ;

__attribute__((used)) static int FUNC_7(void *VAR_9, int VAR_10, int VAR_11, int VAR_12)
{
 struct cx23885_dev *VAR_13 = (struct cx23885_dev *)VAR_9;
 unsigned long VAR_14 = VAR_8 + FUNC_4(1);
 uint32_t VAR_15 = 0;

 VAR_15 = FUNC_1(VAR_7);
 if (VAR_12)
  FUNC_2(VAR_6, VAR_2);
 else {
  FUNC_0(VAR_6, VAR_2);
  VAR_15 &= ~VAR_2;
  VAR_15 |= (VAR_11 & VAR_2);
 }

 if (VAR_10)
  VAR_15 |= VAR_0;
 else
  VAR_15 &= ~VAR_0;

 VAR_15 &= ~VAR_1;
 if (VAR_12)
  VAR_15 = (VAR_15 & ~VAR_3) | VAR_5;
 else
  VAR_15 = (VAR_15 & ~VAR_5) | VAR_3;

 FUNC_3(VAR_7, VAR_15);

 for (;;) {
  VAR_15 = FUNC_1(VAR_7);
  if ((VAR_15 & VAR_4) == 0)
   break;
  if (FUNC_5(VAR_8, VAR_14))
   break;
  FUNC_6(1);
 }

 FUNC_2(VAR_7, VAR_3 | VAR_5 | VAR_1);
 if (VAR_12)
  return VAR_15 & VAR_2;

 return 0;
}
