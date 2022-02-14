
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tty_port {int dummy; } ;
struct serial_struct {scalar_t__ iomem_base; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 int VAR_0 ;
 struct tty_port* FUNC_0 (struct device*) ;
 int FUNC_1 (char*,int ,char*,unsigned long) ;
 int FUNC_2 (struct tty_port*,struct serial_struct*) ;

__attribute__((used)) static ssize_t FUNC_3(struct device *VAR_1,
 struct device_attribute *VAR_2, char *VAR_3)
{
 struct serial_struct VAR_4;
 struct tty_port *VAR_5 = FUNC_0(VAR_1);

 FUNC_2(VAR_5, &VAR_4);
 return FUNC_1(VAR_3, VAR_0, "0x%lX\n", (unsigned long)VAR_4.iomem_base);
}
