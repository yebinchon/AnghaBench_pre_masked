
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef scalar_t__ u32 ;
struct mei_cl {int dummy; } ;
struct file {struct mei_cl* private_data; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (struct mei_cl*,struct file const*,int ) ;

__attribute__((used)) static int FUNC_1(const struct file *VAR_3, u32 VAR_4)
{
 struct mei_cl *VAR_5 = VAR_3->private_data;

 if (VAR_4 != VAR_1 &&
     VAR_4 != VAR_2)
  return -VAR_0;

 return FUNC_0(VAR_5, VAR_3, (u8)VAR_4);
}
