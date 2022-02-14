
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* u64 ;
struct btrfs_ref {int action; void* parent; void* len; void* bytenr; } ;



__attribute__((used)) static inline void FUNC_0(struct btrfs_ref *VAR_0,
    int VAR_1, u64 VAR_2, u64 VAR_3, u64 VAR_4)
{
 VAR_0->action = VAR_1;
 VAR_0->bytenr = VAR_2;
 VAR_0->len = VAR_3;
 VAR_0->parent = VAR_4;
}
