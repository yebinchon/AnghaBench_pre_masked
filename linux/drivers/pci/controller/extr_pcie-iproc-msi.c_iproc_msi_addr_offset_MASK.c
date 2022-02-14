
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct iproc_msi {int nr_msi_region; } ;


 unsigned int VAR_0 ;
 int FUNC_0 (struct iproc_msi*,unsigned long) ;

__attribute__((used)) static inline unsigned int FUNC_1(struct iproc_msi *VAR_1,
       unsigned long VAR_2)
{
 if (VAR_1->nr_msi_region > 1)
  return FUNC_0(VAR_1, VAR_2) * VAR_0;
 else
  return FUNC_0(VAR_1, VAR_2) * sizeof(u32);
}
