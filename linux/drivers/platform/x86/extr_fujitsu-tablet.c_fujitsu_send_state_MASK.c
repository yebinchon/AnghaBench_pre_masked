
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int quirks; } ;
struct TYPE_4__ {int idev; TYPE_1__ config; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 TYPE_2__ VAR_5 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,int ,int) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(void)
{
 int VAR_6;
 int VAR_7, VAR_8;

 VAR_6 = FUNC_0(0xdd);

 VAR_7 = VAR_6 & 0x02;
 if (VAR_5.config.quirks & VAR_1)
  VAR_7 = !VAR_7;

 if ((VAR_5.config.quirks & VAR_0) && (!VAR_7)) {
  VAR_8 = 1;
 } else{
  VAR_8 = VAR_6 & 0x01;
  if (VAR_5.config.quirks & VAR_2)
   VAR_8 = !VAR_8;
 }

 FUNC_1(VAR_5.idev, VAR_3, VAR_7);
 FUNC_1(VAR_5.idev, VAR_4, VAR_8);
 FUNC_2(VAR_5.idev);
}
