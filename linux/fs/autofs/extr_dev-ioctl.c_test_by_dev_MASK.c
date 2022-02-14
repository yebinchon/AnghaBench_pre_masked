
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct path {TYPE_2__* dentry; } ;
typedef scalar_t__ dev_t ;
struct TYPE_4__ {TYPE_1__* d_sb; } ;
struct TYPE_3__ {scalar_t__ s_dev; } ;



__attribute__((used)) static int FUNC_0(const struct path *VAR_0, void *VAR_1)
{
 return VAR_0->dentry->d_sb->s_dev == *(dev_t *)VAR_1;
}
