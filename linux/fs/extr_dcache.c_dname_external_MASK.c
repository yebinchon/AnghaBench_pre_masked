
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ name; } ;
struct dentry {scalar_t__ d_iname; TYPE_1__ d_name; } ;



__attribute__((used)) static inline int FUNC_0(const struct dentry *VAR_0)
{
 return VAR_0->d_name.name != VAR_0->d_iname;
}
