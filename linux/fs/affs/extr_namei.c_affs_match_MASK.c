
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef scalar_t__ (* toupper_t ) (int ) ;
struct TYPE_2__ {int* name; int len; } ;
struct dentry {TYPE_1__ d_name; } ;


 int VAR_0 ;

__attribute__((used)) static inline int
FUNC_0(struct dentry *VAR_1, const u8 *VAR_2, toupper_t VAR_3)
{
 const u8 *VAR_4 = VAR_1->d_name.name;
 int VAR_5 = VAR_1->d_name.len;

 if (VAR_5 >= VAR_0) {
  if (*VAR_2 < VAR_0)
   return 0;
  VAR_5 = VAR_0;
 } else if (VAR_5 != *VAR_2)
  return 0;

 for (VAR_2++; VAR_5 > 0; VAR_5--)
  if (VAR_3(*VAR_4++) != VAR_3(*VAR_2++))
   return 0;
 return 1;
}
