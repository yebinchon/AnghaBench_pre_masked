
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {char* name; } ;
struct dentry {TYPE_1__ d_name; } ;



__attribute__((used)) static bool FUNC_0(struct dentry *VAR_0)
{
 return VAR_0->d_name.name[0] == '#';
}
