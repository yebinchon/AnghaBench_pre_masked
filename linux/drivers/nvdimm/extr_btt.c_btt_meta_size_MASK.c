
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct btt {scalar_t__ sector_size; scalar_t__ lbasize; } ;



__attribute__((used)) static u32 FUNC_0(struct btt *VAR_0)
{
 return VAR_0->lbasize - VAR_0->sector_size;
}
