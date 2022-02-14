
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct audit_chunk {int count; TYPE_1__* owners; } ;
struct TYPE_2__ {scalar_t__ owner; } ;



__attribute__((used)) static int FUNC_0(struct audit_chunk *VAR_0)
{
 int VAR_1;
 int VAR_2 = 0;

 for (VAR_1 = 0; VAR_1 < VAR_0->count; VAR_1++)
  if (VAR_0->owners[VAR_1].owner)
   VAR_2++;
 return VAR_2;
}
