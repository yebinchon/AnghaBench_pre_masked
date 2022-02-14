
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {void* k_objectid; void* k_dir_id; } ;
struct cpu_key {int version; int key_length; TYPE_1__ on_disk_key; } ;
typedef int loff_t ;
typedef void* __u32 ;


 int FUNC_0 (struct cpu_key*,int ) ;
 int FUNC_1 (struct cpu_key*,int) ;

__attribute__((used)) static void FUNC_2(struct cpu_key *VAR_0, int VAR_1, __u32 VAR_2,
     __u32 VAR_3, loff_t VAR_4, int VAR_5, int VAR_6)
{
 VAR_0->version = VAR_1;

 VAR_0->on_disk_key.k_dir_id = VAR_2;
 VAR_0->on_disk_key.k_objectid = VAR_3;
 FUNC_0(VAR_0, VAR_4);
 FUNC_1(VAR_0, VAR_5);
 VAR_0->key_length = VAR_6;
}
