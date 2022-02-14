
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct TYPE_2__ {int * port_status; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (scalar_t__) ;
 TYPE_1__* VAR_10 ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (int) ;
 int FUNC_4 (scalar_t__,int *) ;

__attribute__((used)) static int FUNC_5(int VAR_11)
{
 u32 VAR_12;
 u32 VAR_13, VAR_14;
 int VAR_15;

 FUNC_0("reset port");

 VAR_12 = FUNC_2(&VAR_10->port_status[VAR_11 - 1]);
 VAR_12 &= ~VAR_7;
 VAR_12 |= VAR_8;
 FUNC_4(VAR_12, &VAR_10->port_status[VAR_11 - 1]);

 VAR_14 = VAR_4;
 for (VAR_13 = 0; VAR_13 < VAR_3;
      VAR_13 += VAR_14) {
  FUNC_1(VAR_14);
  VAR_12 = FUNC_2(&VAR_10->port_status[VAR_11 - 1]);
  if (!(VAR_12 & VAR_8))
   break;
 }
 if (VAR_12 & VAR_8) {

  VAR_15 = 100 * 1000;
  FUNC_4(VAR_12 & ~(VAR_9 | VAR_8),
   &VAR_10->port_status[VAR_11 - 1]);
  do {
   FUNC_3(1);
   VAR_12 = FUNC_2(&VAR_10->port_status[VAR_11-1]);
  } while ((VAR_12 & VAR_8) && (--VAR_15 > 0));
 }


 if (!(VAR_12 & VAR_5))
  return -VAR_2;


 if ((VAR_12 & VAR_6))
  return -VAR_1;


 if (!(VAR_12 & VAR_8) && (VAR_12 & VAR_7))
  return 0;
 return -VAR_0;
}
