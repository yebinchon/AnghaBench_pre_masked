
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tty_struct {int driver_data; } ;
struct qt2_port_private {int dummy; } ;


 int FUNC_0 (struct qt2_port_private*,unsigned int,unsigned int) ;
 struct qt2_port_private* FUNC_1 (int ) ;

__attribute__((used)) static int FUNC_2(struct tty_struct *VAR_0,
   unsigned int VAR_1, unsigned int VAR_2)
{
 struct qt2_port_private *VAR_3;

 VAR_3 = FUNC_1(VAR_0->driver_data);
 return FUNC_0(VAR_3, VAR_1, VAR_2);
}
