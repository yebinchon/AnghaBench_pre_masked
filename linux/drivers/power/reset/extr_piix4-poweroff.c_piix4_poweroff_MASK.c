
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct TYPE_2__ {int bus; } ;


 int FUNC_0 (int,int) ;
 int FUNC_1 (int ,int ) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (scalar_t__) ;
 scalar_t__ VAR_6 ;
 int FUNC_3 (int) ;
 int FUNC_4 (int,scalar_t__) ;
 int FUNC_5 (int ,int,int ,int ) ;
 TYPE_1__* VAR_7 ;
 int FUNC_6 (char*) ;

__attribute__((used)) static void FUNC_7(void)
{
 int VAR_8;
 u16 VAR_9;


 while (1) {
  VAR_9 = FUNC_2(VAR_6 + VAR_3);
  if (!(VAR_9 & VAR_4))
   break;
  FUNC_4(VAR_9, VAR_6 + VAR_3);
 }


 FUNC_4(VAR_2 | VAR_1,
      VAR_6 + VAR_0);


 FUNC_3(10);






 VAR_8 = FUNC_1(0, FUNC_0(0x1f, 0x7));
 FUNC_5(VAR_7->bus, VAR_8, 0,
       VAR_5);


 FUNC_3(1000);
 FUNC_6("Unable to poweroff system\n");
}
