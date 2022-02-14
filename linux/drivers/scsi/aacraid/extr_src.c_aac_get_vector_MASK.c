
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct aac_dev {int max_msix; int msix_counter; } ;


 int FUNC_0 (int *) ;

__attribute__((used)) static inline u32 FUNC_1(struct aac_dev *VAR_0)
{
 return FUNC_0(&VAR_0->msix_counter)%VAR_0->max_msix;
}
