
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tty_struct {scalar_t__ driver_data; } ;
struct raw3215_info {scalar_t__ count; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static int FUNC_0(struct tty_struct *VAR_2)
{
 struct raw3215_info *VAR_3;

 VAR_3 = (struct raw3215_info *) VAR_2->driver_data;


 if ((VAR_0 - VAR_3->count - VAR_1) >= 0)
  return VAR_0 - VAR_3->count - VAR_1;
 else
  return 0;
}
