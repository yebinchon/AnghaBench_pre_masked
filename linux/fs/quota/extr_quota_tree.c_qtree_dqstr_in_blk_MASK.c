
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qtree_mem_dqinfo {int dqi_usable_bs; int dqi_entry_size; } ;
struct qt_disk_dqdbheader {int dummy; } ;



__attribute__((used)) static int FUNC_0(struct qtree_mem_dqinfo *VAR_0)
{
 return (VAR_0->dqi_usable_bs - sizeof(struct qt_disk_dqdbheader))
        / VAR_0->dqi_entry_size;
}
