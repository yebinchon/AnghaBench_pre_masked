
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct file {int private_data; } ;
struct TYPE_4__ {TYPE_1__* dev; } ;
struct TYPE_3__ {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int *,char*,int ) ;
 int FUNC_1 (struct file*) ;
 int FUNC_2 (int ) ;
 TYPE_2__ VAR_1 ;
 int FUNC_3 (int ) ;

inline int FUNC_4(struct file *VAR_2)
{
 int VAR_3 = FUNC_3(FUNC_1(VAR_2));

 if (VAR_3)
  return VAR_3;
 if (!VAR_2->private_data) {
  FUNC_0(&VAR_1.dev->dev,
   "No private data on fd, region %d\n",
   FUNC_2(FUNC_1(VAR_2)));
  return -VAR_0;
 }
 return 0;
}
