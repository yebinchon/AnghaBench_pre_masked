
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tty_struct {scalar_t__ driver_data; } ;
struct raw3215_info {int dummy; } ;


 int FUNC_0 (struct raw3215_info*,unsigned char) ;

__attribute__((used)) static int FUNC_1(struct tty_struct *VAR_0, unsigned char VAR_1)
{
 struct raw3215_info *VAR_2;

 if (!VAR_0)
  return 0;
 VAR_2 = (struct raw3215_info *) VAR_0->driver_data;
 FUNC_0(VAR_2, VAR_1);
 return 1;
}
