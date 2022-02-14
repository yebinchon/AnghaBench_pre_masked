
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct extent_status {int es_pblk; } ;
typedef int ext4_fsblk_t ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static inline void FUNC_0(struct extent_status *VAR_2,
     unsigned int VAR_3)
{
 VAR_2->es_pblk = (((ext4_fsblk_t)VAR_3 << VAR_1) & VAR_0) |
        (VAR_2->es_pblk & ~VAR_0);
}
