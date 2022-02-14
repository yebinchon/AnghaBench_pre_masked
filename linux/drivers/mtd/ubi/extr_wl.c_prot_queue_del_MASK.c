
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int list; } ;
struct ubi_wl_entry {int pnum; TYPE_1__ u; } ;
struct ubi_device {struct ubi_wl_entry** lookuptbl; } ;


 int VAR_0 ;
 int FUNC_0 (char*,int ) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (struct ubi_device*,struct ubi_wl_entry*) ;

__attribute__((used)) static int FUNC_3(struct ubi_device *VAR_1, int VAR_2)
{
 struct ubi_wl_entry *VAR_3;

 VAR_3 = VAR_1->lookuptbl[VAR_2];
 if (!VAR_3)
  return -VAR_0;

 if (FUNC_2(VAR_1, VAR_3))
  return -VAR_0;

 FUNC_1(&VAR_3->u.list);
 FUNC_0("deleted PEB %d from the protection queue", VAR_3->pnum);
 return 0;
}
