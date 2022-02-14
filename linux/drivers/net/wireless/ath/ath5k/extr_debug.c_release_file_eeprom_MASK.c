
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int dummy; } ;
struct file {struct eeprom_private* private_data; } ;
struct eeprom_private {int buf; } ;


 int FUNC_0 (struct eeprom_private*) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static int FUNC_2(struct inode *VAR_0, struct file *VAR_1)
{
 struct eeprom_private *VAR_2 = VAR_1->private_data;

 FUNC_1(VAR_2->buf);
 FUNC_0(VAR_2);

 return 0;
}
