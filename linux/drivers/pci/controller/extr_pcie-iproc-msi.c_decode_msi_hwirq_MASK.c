
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct iproc_msi {scalar_t__ eq_cpu; } ;


 int FUNC_0 (struct iproc_msi*,int) ;
 int FUNC_1 (struct iproc_msi*,int) ;
 int FUNC_2 (int*) ;

__attribute__((used)) static inline u32 FUNC_3(struct iproc_msi *VAR_0, u32 VAR_1, u32 VAR_2)
{
 u32 *VAR_3, VAR_4;
 unsigned int VAR_5;

 VAR_5 = FUNC_1(VAR_0, VAR_1) + VAR_2 * sizeof(u32);
 VAR_3 = (u32 *)(VAR_0->eq_cpu + VAR_5);
 VAR_4 = FUNC_2(VAR_3);
 VAR_4 = (VAR_4 >> 5) + (VAR_4 & 0x1f);






 return FUNC_0(VAR_0, VAR_4);
}
