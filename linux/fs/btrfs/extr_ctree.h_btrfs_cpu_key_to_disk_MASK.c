
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct btrfs_key {int objectid; int type; int offset; } ;
struct btrfs_disk_key {void* objectid; int type; void* offset; } ;


 void* FUNC_0 (int ) ;

__attribute__((used)) static inline void FUNC_1(struct btrfs_disk_key *VAR_0,
      const struct btrfs_key *VAR_1)
{
 VAR_0->offset = FUNC_0(VAR_1->offset);
 VAR_0->type = VAR_1->type;
 VAR_0->objectid = FUNC_0(VAR_1->objectid);
}
