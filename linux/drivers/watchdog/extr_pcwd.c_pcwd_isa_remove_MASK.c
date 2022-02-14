
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct device {int dummy; } ;
struct TYPE_2__ {int io_addr; scalar_t__ revision; scalar_t__ supports_temp; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int *) ;
 int VAR_4 ;
 int VAR_5 ;
 TYPE_1__ VAR_6 ;
 int FUNC_1 () ;
 int FUNC_2 (char*,unsigned int) ;
 int FUNC_3 (int,int) ;
 int VAR_7 ;

__attribute__((used)) static int FUNC_4(struct device *VAR_8, unsigned int VAR_9)
{
 if (VAR_3 >= VAR_0)
  FUNC_2("pcwd_isa_remove id=%d\n", VAR_9);

 if (!VAR_6.io_addr)
  return 1;


 if (!VAR_4)
  FUNC_1();


 FUNC_0(&VAR_5);
 if (VAR_6.supports_temp)
  FUNC_0(&VAR_7);
 FUNC_3(VAR_6.io_addr,
   (VAR_6.revision == VAR_1) ? 2 : 4);
 VAR_6.io_addr = 0x0000;
 VAR_2--;

 return 0;
}
