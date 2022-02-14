
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
struct extent_map {scalar_t__ block_start; scalar_t__ block_len; } ;



__attribute__((used)) static inline u64 FUNC_0(struct extent_map *VAR_0)
{
 if (VAR_0->block_start + VAR_0->block_len < VAR_0->block_start)
  return (u64)-1;
 return VAR_0->block_start + VAR_0->block_len;
}
