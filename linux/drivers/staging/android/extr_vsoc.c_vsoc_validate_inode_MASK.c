
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct inode {int dummy; } ;
struct TYPE_6__ {TYPE_2__* dev; TYPE_1__* layout; } ;
struct TYPE_5__ {int dev; } ;
struct TYPE_4__ {scalar_t__ region_count; } ;


 int VAR_0 ;
 int FUNC_0 (int *,char*,scalar_t__) ;
 scalar_t__ FUNC_1 (struct inode*) ;
 TYPE_3__ VAR_1 ;

inline int FUNC_2(struct inode *VAR_2)
{
 if (FUNC_1(VAR_2) >= VAR_1.layout->region_count) {
  FUNC_0(&VAR_1.dev->dev,
   "describe_region: invalid region %d\n", FUNC_1(VAR_2));
  return -VAR_0;
 }
 return 0;
}
