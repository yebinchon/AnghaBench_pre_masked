
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u8 ;
typedef int u32 ;
struct vpif_vbi_params {int hstart0; int vstart0; int hstart1; int vstart1; int hsize0; int vsize0; int hsize1; int vsize1; } ;
struct TYPE_2__ {int vanc1_size; int vanc0_size; int vanc1_strt; int vanc0_strt; } ;


 int FUNC_0 (int,int ) ;
 TYPE_1__* VAR_0 ;

void FUNC_1(struct vpif_vbi_params *VAR_1,
    u8 VAR_2)
{
 u32 VAR_3;

 VAR_3 = 0x3F8 & (VAR_1->hstart0);
 VAR_3 |= 0x3FFFFFF & ((VAR_1->vstart0) << 16);
 FUNC_0(VAR_3, VAR_0[VAR_2].vanc0_strt);

 VAR_3 = 0x3F8 & (VAR_1->hstart1);
 VAR_3 |= 0x3FFFFFF & ((VAR_1->vstart1) << 16);
 FUNC_0(VAR_3, VAR_0[VAR_2].vanc1_strt);

 VAR_3 = 0x3F8 & (VAR_1->hsize0);
 VAR_3 |= 0x3FFFFFF & ((VAR_1->vsize0) << 16);
 FUNC_0(VAR_3, VAR_0[VAR_2].vanc0_size);

 VAR_3 = 0x3F8 & (VAR_1->hsize1);
 VAR_3 |= 0x3FFFFFF & ((VAR_1->vsize1) << 16);
 FUNC_0(VAR_3, VAR_0[VAR_2].vanc1_size);

}
