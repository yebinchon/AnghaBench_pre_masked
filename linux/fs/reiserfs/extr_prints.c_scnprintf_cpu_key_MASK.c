
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int k_objectid; int k_dir_id; } ;
struct cpu_key {TYPE_1__ on_disk_key; } ;


 int FUNC_0 (struct cpu_key*) ;
 int FUNC_1 (struct cpu_key*) ;
 int FUNC_2 (char*,size_t,char*,...) ;

__attribute__((used)) static int FUNC_3(char *VAR_0, size_t VAR_1, struct cpu_key *VAR_2)
{
 if (VAR_2)
  return FUNC_2(VAR_0, VAR_1, "[%d %d %s %s]",
     VAR_2->on_disk_key.k_dir_id,
     VAR_2->on_disk_key.k_objectid,
     FUNC_1(VAR_2), FUNC_0(VAR_2));
 else
  return FUNC_2(VAR_0, VAR_1, "[NULL]");
}
