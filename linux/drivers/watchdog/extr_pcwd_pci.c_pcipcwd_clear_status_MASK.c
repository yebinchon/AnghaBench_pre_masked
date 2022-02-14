
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ io_addr; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int,scalar_t__) ;
 TYPE_1__ VAR_6 ;
 int FUNC_2 (char*,int) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (int ,int*,int*) ;

__attribute__((used)) static int FUNC_5(void)
{
 int VAR_7;
 int VAR_8;
 int VAR_9;

 if (VAR_5 >= VAR_2)
  FUNC_3("clearing watchdog trip status & LED\n");

 VAR_7 = FUNC_0(VAR_6.io_addr + 1);

 if (VAR_5 >= VAR_1) {
  FUNC_2("status was: 0x%02x\n", VAR_7);
  FUNC_2("sending: 0x%02x\n",
    (VAR_7 & VAR_3) | VAR_4);
 }


 FUNC_1((VAR_7 & VAR_3) | VAR_4,
      VAR_6.io_addr + 1);


 VAR_8 = 0;
 VAR_9 = 0xff;
 FUNC_4(VAR_0, &VAR_8, &VAR_9);

 if (VAR_5 >= VAR_1) {
  FUNC_2("reset count was: 0x%02x\n", VAR_9);
 }

 return 0;
}
