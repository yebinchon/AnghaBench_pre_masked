
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct inode {int dummy; } ;
struct TYPE_2__ {int version; } ;


 unsigned int VAR_0 ;
 TYPE_1__* FUNC_0 (struct inode*) ;

__attribute__((used)) static int FUNC_1(struct inode *VAR_1, unsigned int VAR_2)
{
 if (FUNC_0(VAR_1)->version == 2)
  return 0;
 return VAR_2 & VAR_0;
}
