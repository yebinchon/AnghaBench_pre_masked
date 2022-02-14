
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct extent_buffer {int dummy; } ;
struct btrfs_map_token {int * kaddr; struct extent_buffer* eb; } ;



__attribute__((used)) static inline void FUNC_0(struct btrfs_map_token *VAR_0,
     struct extent_buffer *VAR_1)
{
 VAR_0->eb = VAR_1;
 VAR_0->kaddr = ((void*)0);
}
