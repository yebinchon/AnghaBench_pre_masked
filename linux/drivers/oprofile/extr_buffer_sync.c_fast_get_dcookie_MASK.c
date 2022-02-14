
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct path {TYPE_1__* dentry; } ;
struct TYPE_2__ {int d_flags; } ;


 int VAR_0 ;
 int FUNC_0 (struct path const*,unsigned long*) ;

__attribute__((used)) static inline unsigned long FUNC_1(const struct path *VAR_1)
{
 unsigned long VAR_2;

 if (VAR_1->dentry->d_flags & VAR_0)
  return (unsigned long)VAR_1->dentry;
 FUNC_0(VAR_1, &VAR_2);
 return VAR_2;
}
