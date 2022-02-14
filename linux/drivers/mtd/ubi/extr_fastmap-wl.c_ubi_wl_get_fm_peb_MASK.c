
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int rb; } ;
struct ubi_wl_entry {TYPE_1__ u; } ;
struct TYPE_7__ {int rb_node; } ;
struct ubi_device {int free_count; int beb_rsvd_pebs; TYPE_2__ free; } ;


 struct ubi_wl_entry* FUNC_0 (TYPE_2__*) ;
 struct ubi_wl_entry* FUNC_1 (struct ubi_device*,TYPE_2__*) ;
 int FUNC_2 (int *,TYPE_2__*) ;
 int FUNC_3 (struct ubi_device*,struct ubi_wl_entry*,TYPE_2__*) ;

struct ubi_wl_entry *FUNC_4(struct ubi_device *VAR_0, int VAR_1)
{
 struct ubi_wl_entry *VAR_2 = ((void*)0);

 if (!VAR_0->free.rb_node || (VAR_0->free_count - VAR_0->beb_rsvd_pebs < 1))
  goto out;

 if (VAR_1)
  VAR_2 = FUNC_0(&VAR_0->free);
 else
  VAR_2 = FUNC_1(VAR_0, &VAR_0->free);

 if (!VAR_2)
  goto out;

 FUNC_3(VAR_0, VAR_2, &VAR_0->free);



 FUNC_2(&VAR_2->u.rb, &VAR_0->free);
 VAR_0->free_count--;
out:
 return VAR_2;
}
