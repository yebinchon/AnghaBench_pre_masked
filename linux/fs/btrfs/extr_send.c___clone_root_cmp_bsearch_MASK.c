
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u64 ;
struct clone_root {TYPE_2__* root; } ;
struct TYPE_3__ {scalar_t__ objectid; } ;
struct TYPE_4__ {TYPE_1__ root_key; } ;



__attribute__((used)) static int FUNC_0(const void *VAR_0, const void *VAR_1)
{
 u64 VAR_2 = (u64)(uintptr_t)VAR_0;
 struct clone_root *VAR_3 = (struct clone_root *)VAR_1;

 if (VAR_2 < VAR_3->root->root_key.objectid)
  return -1;
 if (VAR_2 > VAR_3->root->root_key.objectid)
  return 1;
 return 0;
}
