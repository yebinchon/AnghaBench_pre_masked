
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct extent_status {unsigned int es_pblk; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;

__attribute__((used)) static inline unsigned int FUNC_0(struct extent_status *VAR_2)
{
 return (VAR_2->es_pblk & VAR_1) >> VAR_0;
}
