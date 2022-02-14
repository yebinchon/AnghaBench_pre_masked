
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct efx_nic {unsigned int vi_stride; } ;



__attribute__((used)) static inline unsigned int FUNC_0(struct efx_nic *VAR_0, unsigned int VAR_1,
      unsigned int VAR_2)
{
 return VAR_1 * VAR_0->vi_stride + VAR_2;
}
