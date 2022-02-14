
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct slgt_info {int init_error; int device_name; int irq_level; int phys_reg_addr; } ;


 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (struct slgt_info*) ;
 scalar_t__ FUNC_2 (struct slgt_info*) ;
 int FUNC_3 (char*,int ,...) ;
 scalar_t__ FUNC_4 (struct slgt_info*) ;

__attribute__((used)) static int FUNC_5(struct slgt_info *VAR_0)
{
 FUNC_0(("testing %s\n", VAR_0->device_name));
 if (FUNC_4(VAR_0) < 0) {
  FUNC_3("register test failure %s addr=%08X\n",
   VAR_0->device_name, VAR_0->phys_reg_addr);
 } else if (FUNC_1(VAR_0) < 0) {
  FUNC_3("IRQ test failure %s IRQ=%d\n",
   VAR_0->device_name, VAR_0->irq_level);
 } else if (FUNC_2(VAR_0) < 0) {
  FUNC_3("loopback test failure %s\n", VAR_0->device_name);
 }
 return VAR_0->init_error;
}
