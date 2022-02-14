
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int rb; } ;
struct ubi_wl_entry {TYPE_1__ u; } ;
struct ubi_device {scalar_t__ free_count; int free; } ;


 int VAR_0 ;
 struct ubi_wl_entry* FUNC_0 (struct ubi_device*,int *,int ) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (struct ubi_device*,struct ubi_wl_entry*,int *) ;
 int FUNC_3 (int) ;

__attribute__((used)) static struct ubi_wl_entry *FUNC_4(struct ubi_device *VAR_1)
{
 struct ubi_wl_entry *VAR_2;

 VAR_2 = FUNC_0(VAR_1, &VAR_1->free, VAR_0);
 FUNC_2(VAR_1, VAR_2, &VAR_1->free);
 VAR_1->free_count--;
 FUNC_3(VAR_1->free_count >= 0);
 FUNC_1(&VAR_2->u.rb, &VAR_1->free);

 return VAR_2;
}
