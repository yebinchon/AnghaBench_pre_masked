
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct cedrus_dev {int dummy; } ;
typedef enum cedrus_h264_sram_off { ____Placeholder_cedrus_h264_sram_off } cedrus_h264_sram_off ;


 size_t FUNC_0 (size_t,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct cedrus_dev*,int ,int) ;

__attribute__((used)) static void FUNC_2(struct cedrus_dev *VAR_2,
       enum cedrus_h264_sram_off VAR_3,
       const void *VAR_4, size_t VAR_5)
{
 const u32 *VAR_6 = VAR_4;
 size_t VAR_7 = FUNC_0(VAR_5, 4);

 FUNC_1(VAR_2, VAR_1, VAR_3 << 2);

 while (VAR_7--)
  FUNC_1(VAR_2, VAR_0, *VAR_6++);
}
