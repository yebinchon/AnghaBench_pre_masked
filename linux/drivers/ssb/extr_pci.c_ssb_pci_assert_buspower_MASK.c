
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ssb_bus {int power_warn_count; int powered_up; } ;


 int VAR_0 ;
 int FUNC_0 () ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (char*) ;

__attribute__((used)) static int FUNC_3(struct ssb_bus *VAR_1)
{
 if (FUNC_1(VAR_1->powered_up))
  return 0;

 FUNC_2("FATAL ERROR: Bus powered down while accessing PCI MMIO space\n");
 if (VAR_1->power_warn_count <= 10) {
  VAR_1->power_warn_count++;
  FUNC_0();
 }

 return -VAR_0;
}
