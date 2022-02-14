
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct niu {TYPE_1__* parent; } ;
struct TYPE_2__ {unsigned long tcam_num_entries; } ;


 int FUNC_0 (struct niu*,unsigned long) ;

__attribute__((used)) static int FUNC_1(struct niu *VAR_0)
{
 unsigned long VAR_1;

 for (VAR_1 = 0; VAR_1 < VAR_0->parent->tcam_num_entries; VAR_1++) {
  int VAR_2 = FUNC_0(VAR_0, VAR_1);
  if (VAR_2)
   return VAR_2;
 }
 return 0;
}
