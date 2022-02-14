
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct dentry {int dummy; } ;
struct TYPE_4__ {TYPE_1__* sysctl; } ;
struct TYPE_3__ {int unregistering; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 TYPE_2__* FUNC_0 (int ) ;
 int FUNC_1 (struct dentry*) ;

__attribute__((used)) static int FUNC_2(struct dentry *VAR_2, unsigned int VAR_3)
{
 if (VAR_3 & VAR_1)
  return -VAR_0;
 return !FUNC_0(FUNC_1(VAR_2))->sysctl->unregistering;
}
