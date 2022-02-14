
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int command_mode; int io_lock; scalar_t__ io_addr; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int,scalar_t__) ;
 TYPE_1__ VAR_4 ;
 int FUNC_1 (char*,int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int) ;

__attribute__((used)) static int FUNC_6(void)
{
 int VAR_5, VAR_6 = 0, VAR_7 = 0;


 FUNC_3(&VAR_4.io_lock);
 while ((!VAR_6) && (VAR_7 < 3)) {
  VAR_5 = FUNC_2(VAR_0);

  if (VAR_5 == 0x00)
   VAR_6 = 1;
  else if (VAR_5 == 0xF3) {

   FUNC_0(0x00, VAR_4.io_addr + 2);
   FUNC_5(1200);
   FUNC_0(0x00, VAR_4.io_addr + 2);
   FUNC_5(VAR_2);
  }
  VAR_7++;
 }
 FUNC_4(&VAR_4.io_lock);
 VAR_4.command_mode = VAR_6;

 if (VAR_3 >= VAR_1)
  FUNC_1("command_mode=%d\n", VAR_4.command_mode);

 return VAR_6;
}
