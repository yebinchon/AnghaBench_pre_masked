
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {void* k_objectid; void* k_dir_id; } ;
struct item_head {TYPE_1__ ih_key; } ;
struct TYPE_4__ {int k_objectid; int k_dir_id; } ;
struct cpu_key {TYPE_2__ on_disk_key; } ;
typedef int loff_t ;


 void* FUNC_0 (int ) ;
 int FUNC_1 (struct item_head*,int) ;
 int FUNC_2 (struct item_head*,int) ;
 int FUNC_3 (struct item_head*,int) ;
 int FUNC_4 (struct item_head*,int ) ;
 int FUNC_5 (struct item_head*,int) ;

inline void FUNC_6(struct item_head *VAR_0, const struct cpu_key *VAR_1,
         int VAR_2,
         loff_t VAR_3, int VAR_4, int VAR_5,
         int VAR_6 )
{
 if (VAR_1) {
  VAR_0->ih_key.k_dir_id = FUNC_0(VAR_1->on_disk_key.k_dir_id);
  VAR_0->ih_key.k_objectid =
      FUNC_0(VAR_1->on_disk_key.k_objectid);
 }
 FUNC_3(VAR_0, VAR_2);
 FUNC_4(VAR_0, VAR_3);
 FUNC_5(VAR_0, VAR_4);
 FUNC_2(VAR_0, VAR_5);





 FUNC_1(VAR_0, VAR_6);
}
