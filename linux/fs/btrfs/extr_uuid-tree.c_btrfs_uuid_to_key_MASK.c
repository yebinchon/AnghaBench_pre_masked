
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u64 ;
struct btrfs_key {void* offset; void* objectid; int type; } ;


 void* FUNC_0 (int *) ;

__attribute__((used)) static void FUNC_1(u8 *VAR_0, u8 VAR_1, struct btrfs_key *VAR_2)
{
 VAR_2->type = VAR_1;
 VAR_2->objectid = FUNC_0(VAR_0);
 VAR_2->offset = FUNC_0(VAR_0 + sizeof(u64));
}
