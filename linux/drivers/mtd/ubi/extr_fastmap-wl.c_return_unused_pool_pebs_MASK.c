
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ubi_wl_entry {int dummy; } ;
struct ubi_fm_pool {int used; int size; size_t* pebs; } ;
struct ubi_device {int free_count; int free; struct ubi_wl_entry** lookuptbl; } ;


 int FUNC_0 (struct ubi_wl_entry*,int *) ;

__attribute__((used)) static void FUNC_1(struct ubi_device *VAR_0,
        struct ubi_fm_pool *VAR_1)
{
 int VAR_2;
 struct ubi_wl_entry *VAR_3;

 for (VAR_2 = VAR_1->used; VAR_2 < VAR_1->size; VAR_2++) {
  VAR_3 = VAR_0->lookuptbl[VAR_1->pebs[VAR_2]];
  FUNC_0(VAR_3, &VAR_0->free);
  VAR_0->free_count++;
 }
}
