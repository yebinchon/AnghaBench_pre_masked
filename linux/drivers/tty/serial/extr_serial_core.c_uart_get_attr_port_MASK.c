
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tty_port {int dummy; } ;
struct serial_struct {unsigned long port; scalar_t__ port_high; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int VAR_1 ;
 struct tty_port* FUNC_0 (struct device*) ;
 int FUNC_1 (char*,int ,char*,unsigned long) ;
 int FUNC_2 (struct tty_port*,struct serial_struct*) ;

__attribute__((used)) static ssize_t FUNC_3(struct device *VAR_2,
 struct device_attribute *VAR_3, char *VAR_4)
{
 struct serial_struct VAR_5;
 struct tty_port *VAR_6 = FUNC_0(VAR_2);
 unsigned long VAR_7;

 FUNC_2(VAR_6, &VAR_5);
 VAR_7 = VAR_5.port;
 if (VAR_0)
  VAR_7 |= (unsigned long)VAR_5.port_high << VAR_0;
 return FUNC_1(VAR_4, VAR_1, "0x%lX\n", VAR_7);
}
