
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct path {TYPE_2__* dentry; } ;
struct TYPE_4__ {int d_flags; TYPE_1__* d_op; } ;
struct TYPE_3__ {int (* d_manage ) (struct path const*,int) ;} ;


 int VAR_0 ;
 int FUNC_0 (struct path const*,int) ;

__attribute__((used)) static inline int FUNC_1(const struct path *VAR_1)
{
 return (VAR_1->dentry->d_flags & VAR_0) ?
  VAR_1->dentry->d_op->d_manage(VAR_1, 1) : 0;
}
