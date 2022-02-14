
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int u32 ;
struct iproc_msi {int nr_eq_region; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;

__attribute__((used)) static inline unsigned int FUNC_0(struct iproc_msi *VAR_2, u32 VAR_3)
{
 if (VAR_2->nr_eq_region > 1)
  return VAR_3 * VAR_1;
 else
  return VAR_3 * VAR_0 * sizeof(u32);
}
