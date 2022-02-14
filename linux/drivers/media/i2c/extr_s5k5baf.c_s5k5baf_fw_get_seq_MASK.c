
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u16 ;
struct s5k5baf_fw {int count; TYPE_1__* seq; scalar_t__* data; } ;
struct s5k5baf {struct s5k5baf_fw* fw; } ;
struct TYPE_2__ {scalar_t__ id; int offset; } ;



__attribute__((used)) static u16 *FUNC_0(struct s5k5baf *VAR_0, u16 VAR_1)
{
 struct s5k5baf_fw *VAR_2 = VAR_0->fw;
 u16 *VAR_3;
 int VAR_4;

 if (VAR_2 == ((void*)0))
  return ((void*)0);

 VAR_3 = VAR_2->data + 2 * VAR_2->count;

 for (VAR_4 = 0; VAR_4 < VAR_2->count; ++VAR_4) {
  if (VAR_2->seq[VAR_4].id == VAR_1)
   return VAR_3 + VAR_2->seq[VAR_4].offset;
 }

 return ((void*)0);
}
