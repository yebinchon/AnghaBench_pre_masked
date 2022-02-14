
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ io_addr; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int,scalar_t__) ;
 TYPE_1__ VAR_4 ;
 int FUNC_2 (char*,int,...) ;
 int FUNC_3 (int) ;

__attribute__((used)) static int FUNC_4(int VAR_5)
{
 int VAR_6;
 int VAR_7;
 int VAR_8, VAR_9;

 if (VAR_3 >= VAR_0)
  FUNC_2("sending following data cmd=0x%02x\n", VAR_5);


 VAR_7 = (VAR_5 & 0x0F) | VAR_2;
 FUNC_1(VAR_7, VAR_4.io_addr + 2);
 FUNC_3(VAR_1);

 VAR_8 = FUNC_0(VAR_4.io_addr);
 for (VAR_6 = 0; VAR_6 < 25; ++VAR_6) {
  VAR_9 = VAR_8;
  VAR_8 = FUNC_0(VAR_4.io_addr);

  if (VAR_8 == VAR_9)
   break;

  FUNC_3(250);
 }

 if (VAR_3 >= VAR_0)
  FUNC_2("received following data for cmd=0x%02x: port0=0x%02x last_port0=0x%02x\n",
    VAR_5, VAR_8, VAR_9);

 return VAR_8;
}
