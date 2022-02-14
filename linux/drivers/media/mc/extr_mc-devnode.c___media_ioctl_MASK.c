
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct media_devnode {int dummy; } ;
struct file {int dummy; } ;


 long VAR_0 ;
 long VAR_1 ;
 struct media_devnode* FUNC_0 (struct file*) ;
 int FUNC_1 (struct media_devnode*) ;

__attribute__((used)) static long
FUNC_2(struct file *VAR_2, unsigned int VAR_3, unsigned long VAR_4,
       long (*VAR_5)(struct file *VAR_6, unsigned int VAR_7,
     unsigned long VAR_8))
{
 struct media_devnode *VAR_9 = FUNC_0(VAR_2);

 if (!VAR_5)
  return -VAR_1;

 if (!FUNC_1(VAR_9))
  return -VAR_0;

 return VAR_5(VAR_2, VAR_3, VAR_4);
}
