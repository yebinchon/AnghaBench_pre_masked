
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ revision; int io_lock; scalar_t__ io_addr; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int,scalar_t__) ;
 TYPE_1__ VAR_5 ;
 int FUNC_2 (char*,int) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static int FUNC_6(void)
{
 int VAR_6;

 if (VAR_5.revision == VAR_1) {
  FUNC_4(&VAR_5.io_lock);

  if (VAR_4 >= VAR_2)
   FUNC_3("clearing watchdog trip status\n");

  VAR_6 = FUNC_0(VAR_5.io_addr + 1);

  if (VAR_4 >= VAR_0) {
   FUNC_2("status was: 0x%02x\n", VAR_6);
   FUNC_2("sending: 0x%02x\n",
     (VAR_6 & VAR_3));
  }


  FUNC_1((VAR_6 & VAR_3),
      VAR_5.io_addr + 1);

  FUNC_5(&VAR_5.io_lock);
 }
 return 0;
}
