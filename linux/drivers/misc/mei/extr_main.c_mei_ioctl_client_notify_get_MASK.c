
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct mei_cl {int dummy; } ;
struct file {int f_flags; struct mei_cl* private_data; } ;


 int VAR_0 ;
 int FUNC_0 (struct mei_cl*,int,int*) ;

__attribute__((used)) static int FUNC_1(const struct file *VAR_1, u32 *VAR_2)
{
 struct mei_cl *VAR_3 = VAR_1->private_data;
 bool VAR_4;
 bool VAR_5 = (VAR_1->f_flags & VAR_0) == 0;
 int VAR_6;

 VAR_6 = FUNC_0(VAR_3, VAR_5, &VAR_4);
 if (VAR_6)
  return VAR_6;

 *VAR_2 = VAR_4 ? 1 : 0;
 return 0;
}
