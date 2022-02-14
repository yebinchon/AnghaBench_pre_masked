
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int io_lock; scalar_t__ io_addr; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int,scalar_t__) ;
 TYPE_1__ VAR_4 ;
 int FUNC_3 (char*,...) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static int FUNC_6(int VAR_5, int *VAR_6, int *VAR_7)
{
 int VAR_8, VAR_9;

 if (VAR_3 >= VAR_0)
  FUNC_3("sending following data cmd=0x%02x msb=0x%02x lsb=0x%02x\n",
    VAR_5, *VAR_6, *VAR_7);

 FUNC_4(&VAR_4.io_lock);






 FUNC_2(*VAR_7, VAR_4.io_addr + 4);
 FUNC_2(*VAR_6, VAR_4.io_addr + 5);
 FUNC_2(VAR_5, VAR_4.io_addr + 6);




 VAR_8 = FUNC_0(VAR_4.io_addr + 2) & VAR_2;
 for (VAR_9 = 0; (VAR_9 < VAR_1) && (!VAR_8);
        VAR_9++) {
  FUNC_1(1);
  VAR_8 = FUNC_0(VAR_4.io_addr + 2) & VAR_2;
 }

 if (VAR_3 >= VAR_0) {
  if (VAR_8) {
   FUNC_3("time to process command was: %d ms\n",
     VAR_9);
  } else {
   FUNC_3("card did not respond on command!\n");
  }
 }

 if (VAR_8) {

  *VAR_7 = FUNC_0(VAR_4.io_addr + 4);
  *VAR_6 = FUNC_0(VAR_4.io_addr + 5);


  FUNC_0(VAR_4.io_addr + 6);

  if (VAR_3 >= VAR_0)
   FUNC_3("received following data for cmd=0x%02x: msb=0x%02x lsb=0x%02x\n",
     VAR_5, *VAR_6, *VAR_7);
 }

 FUNC_5(&VAR_4.io_lock);

 return VAR_8;
}
