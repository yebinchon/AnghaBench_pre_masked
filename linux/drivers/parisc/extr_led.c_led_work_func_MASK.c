
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct work_struct {int dummy; } ;
struct TYPE_2__ {scalar_t__ cpu_type; } ;


 unsigned long VAR_0 ;
 unsigned long VAR_1 ;
 unsigned long VAR_2 ;
 unsigned long VAR_3 ;
 unsigned char VAR_4 ;
 unsigned char VAR_5 ;
 unsigned char VAR_6 ;
 unsigned char VAR_7 ;
 unsigned char VAR_8 ;
 int VAR_9 ;
 TYPE_1__ VAR_10 ;
 unsigned long VAR_11 ;
 unsigned char VAR_12 ;
 int VAR_13 ;
 int FUNC_0 (unsigned char) ;
 unsigned char FUNC_1 () ;
 unsigned char FUNC_2 () ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 scalar_t__ FUNC_3 (int ) ;
 int VAR_18 ;
 scalar_t__ VAR_19 ;
 int FUNC_4 (int ,int *,int ) ;
 scalar_t__ FUNC_5 (int ) ;

__attribute__((used)) static void FUNC_6 (struct work_struct *VAR_20)
{
 static unsigned long VAR_21;
 static unsigned long VAR_22;
 unsigned char VAR_23 = 0;


 if (!&FUNC_0)
     return;


 VAR_22 += VAR_11 - VAR_21;
 VAR_21 = VAR_11;
 if (VAR_22 >= VAR_3)
     VAR_22 = 0;

 if (FUNC_3(VAR_14))
 {



  if (VAR_22 < VAR_2 ||
    (VAR_22 >= VAR_1 &&
    VAR_22 < VAR_0))
   VAR_23 |= VAR_8;
 }

 if (FUNC_3(VAR_15)) VAR_23 |= FUNC_2();
 if (FUNC_3(VAR_13)) VAR_23 |= FUNC_1();


 if (FUNC_5(VAR_18)) {
  if (VAR_10.cpu_type >= VAR_19) {


   VAR_23 = (VAR_22 <= (VAR_3/2)) ? 0 : 0xff;
  } else {

   if (VAR_22 <= (VAR_3/2))
    VAR_23 &= ~(VAR_4|VAR_5|VAR_6|VAR_7);
   else
    VAR_23 |= (VAR_4|VAR_5|VAR_6|VAR_7);
  }
 }

 if (VAR_23 != VAR_12)
 {
  FUNC_0(VAR_23);
  VAR_12 = VAR_23;
 }

 FUNC_4(VAR_17, &VAR_16, VAR_9);
}
