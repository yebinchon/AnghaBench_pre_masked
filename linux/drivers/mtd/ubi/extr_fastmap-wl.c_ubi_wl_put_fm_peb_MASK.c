
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ubi_wl_entry {int pnum; scalar_t__ ec; } ;
struct ubi_device {int peb_count; int wl_lock; struct ubi_wl_entry** lookuptbl; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,int) ;
 int FUNC_1 (struct ubi_device*,struct ubi_wl_entry*,int,int,int,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int) ;

int FUNC_5(struct ubi_device *VAR_2, struct ubi_wl_entry *VAR_3,
        int VAR_4, int VAR_5)
{
 struct ubi_wl_entry *VAR_6;
 int VAR_7, VAR_8 = VAR_3->pnum;

 FUNC_0("PEB %d", VAR_8);

 FUNC_4(VAR_8 >= 0);
 FUNC_4(VAR_8 < VAR_2->peb_count);

 FUNC_2(&VAR_2->wl_lock);
 VAR_6 = VAR_2->lookuptbl[VAR_8];





 if (!VAR_6) {
  VAR_6 = VAR_3;
  FUNC_4(VAR_6->ec >= 0);
  VAR_2->lookuptbl[VAR_8] = VAR_6;
 }

 FUNC_3(&VAR_2->wl_lock);

 VAR_7 = VAR_4 ? VAR_0 : VAR_1;
 return FUNC_1(VAR_2, VAR_6, VAR_7, VAR_4, VAR_5, 1);
}
