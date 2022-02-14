
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct solo_dev {int dummy; } ;
struct file {int dummy; } ;


 scalar_t__ FUNC_0 (struct solo_dev*) ;
 int FUNC_1 (struct solo_dev*,unsigned int) ;
 struct solo_dev* FUNC_2 (struct file*) ;

__attribute__((used)) static int FUNC_3(struct file *VAR_0, void *VAR_1, unsigned int VAR_2)
{
 struct solo_dev *VAR_3 = FUNC_2(VAR_0);
 int VAR_4 = FUNC_1(VAR_3, VAR_2);

 if (!VAR_4) {
  while (FUNC_0(VAR_3))
                   ;
 }

 return VAR_4;
}
