
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct file {int dummy; } ;
struct em28xx {int dummy; } ;
struct TYPE_2__ {int type; } ;


 int VAR_0 ;
 TYPE_1__* FUNC_0 (unsigned int) ;
 unsigned int VAR_1 ;
 struct em28xx* FUNC_1 (struct file*) ;
 int FUNC_2 (struct em28xx*,unsigned int) ;

__attribute__((used)) static int FUNC_3(struct file *VAR_2, void *VAR_3, unsigned int VAR_4)
{
 struct em28xx *VAR_5 = FUNC_1(VAR_2);

 if (VAR_4 >= VAR_1)
  return -VAR_0;
 if (!FUNC_0(VAR_4)->type)
  return -VAR_0;

 FUNC_2(VAR_5, VAR_4);
 return 0;
}
