
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct dentry {int dummy; } ;
struct TYPE_4__ {TYPE_1__* sysctl; } ;
struct TYPE_3__ {int unregistering; } ;


 TYPE_2__* FUNC_0 (int ) ;
 int FUNC_1 (struct dentry const*) ;

__attribute__((used)) static int FUNC_2(const struct dentry *VAR_0)
{
 return !!FUNC_0(FUNC_1(VAR_0))->sysctl->unregistering;
}
