
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct efx_nic {unsigned int vf_count; } ;


 int FUNC_0 (struct efx_nic*,unsigned int) ;
 int FUNC_1 (struct efx_nic*) ;

__attribute__((used)) static int FUNC_2(struct efx_nic *VAR_0)
{
 unsigned int VAR_1;
 int VAR_2;

 for (VAR_1 = 0; VAR_1 < VAR_0->vf_count; VAR_1++) {
  VAR_2 = FUNC_0(VAR_0, VAR_1);
  if (VAR_2)
   goto fail;
 }

 return 0;
fail:
 FUNC_1(VAR_0);
 return VAR_2;
}
