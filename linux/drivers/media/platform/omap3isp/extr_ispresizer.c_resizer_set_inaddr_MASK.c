
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct isp_res_device {int addr_base; int crop_offset; } ;


 int FUNC_0 (struct isp_res_device*,int) ;

__attribute__((used)) static void FUNC_1(struct isp_res_device *VAR_0, u32 VAR_1)
{
 VAR_0->addr_base = VAR_1;


 if (VAR_0->crop_offset)
  VAR_1 += VAR_0->crop_offset & ~0x1f;

 FUNC_0(VAR_0, VAR_1);
}
