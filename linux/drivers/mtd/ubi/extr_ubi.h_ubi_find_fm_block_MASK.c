
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ubi_wl_entry {int pnum; } ;
struct ubi_device {TYPE_1__* fm; } ;
struct TYPE_2__ {int used_blocks; struct ubi_wl_entry** e; } ;



__attribute__((used)) static inline struct ubi_wl_entry *FUNC_0(const struct ubi_device *VAR_0,
           int VAR_1)
{
 int VAR_2;

 if (VAR_0->fm) {
  for (VAR_2 = 0; VAR_2 < VAR_0->fm->used_blocks; VAR_2++) {
   if (VAR_0->fm->e[VAR_2]->pnum == VAR_1)
    return VAR_0->fm->e[VAR_2];
  }
 }

 return ((void*)0);
}
