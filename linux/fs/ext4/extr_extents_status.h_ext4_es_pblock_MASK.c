
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct extent_status {int es_pblk; } ;
typedef int ext4_fsblk_t ;


 int VAR_0 ;

__attribute__((used)) static inline ext4_fsblk_t FUNC_0(struct extent_status *VAR_1)
{
 return VAR_1->es_pblk & ~VAR_0;
}
