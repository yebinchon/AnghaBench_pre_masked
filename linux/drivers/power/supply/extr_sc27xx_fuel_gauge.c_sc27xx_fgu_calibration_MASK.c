
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct sc27xx_fgu_data {int vol_1000mv_adc; int cur_1000ma_adc; int dev; } ;
typedef void nvmem_cell ;


 int FUNC_0 (int,int) ;
 scalar_t__ FUNC_1 (void*) ;
 int FUNC_2 (void*) ;
 int FUNC_3 (void*) ;
 int FUNC_4 (int*,void*,int ) ;
 int FUNC_5 (size_t,int) ;
 void* FUNC_6 (int ,char*) ;
 int FUNC_7 (void*) ;
 void* FUNC_8 (void*,size_t*) ;

__attribute__((used)) static int FUNC_9(struct sc27xx_fgu_data *VAR_0)
{
 struct nvmem_cell *VAR_1;
 int VAR_2, VAR_3;
 void *VAR_4;
 size_t VAR_5;

 VAR_1 = FUNC_6(VAR_0->dev, "fgu_calib");
 if (FUNC_1(VAR_1))
  return FUNC_2(VAR_1);

 VAR_4 = FUNC_8(VAR_1, &VAR_5);
 FUNC_7(VAR_1);

 if (FUNC_1(VAR_4))
  return FUNC_2(VAR_4);

 FUNC_4(&VAR_2, VAR_4, FUNC_5(VAR_5, sizeof(u32)));






 VAR_3 = (VAR_2 & 0x1ff) + 6963 - 4096 - 256;
 VAR_0->vol_1000mv_adc = FUNC_0(VAR_3 * 10, 42);
 VAR_0->cur_1000ma_adc = VAR_0->vol_1000mv_adc * 4;

 FUNC_3(VAR_4);
 return 0;
}
