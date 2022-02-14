
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct nvidia_par {int dummy; } ;
struct nvidia_i2c_chan {scalar_t__ ddc_base; struct nvidia_par* par; } ;


 int FUNC_0 (struct nvidia_par*,scalar_t__) ;
 int FUNC_1 (struct nvidia_par*,scalar_t__,int) ;

__attribute__((used)) static void FUNC_2(void *VAR_0, int VAR_1)
{
 struct nvidia_i2c_chan *VAR_2 = VAR_0;
 struct nvidia_par *VAR_3 = VAR_2->par;
 u32 VAR_4;

 VAR_4 = FUNC_0(VAR_3, VAR_2->ddc_base + 1) & 0xf0;

 if (VAR_1)
  VAR_4 |= 0x20;
 else
  VAR_4 &= ~0x20;

 FUNC_1(VAR_3, VAR_2->ddc_base + 1, VAR_4 | 0x01);
}
