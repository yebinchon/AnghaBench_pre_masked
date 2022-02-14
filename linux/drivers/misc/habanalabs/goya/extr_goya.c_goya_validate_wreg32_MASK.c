
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;
struct packet_wreg32 {int ctl; int value; } ;
struct hl_device {int dev; struct goya_device* asic_specific; } ;
struct hl_cs_parser {int dummy; } ;
struct goya_device {int hw_cap_initialized; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,char*,...) ;
 int FUNC_1 (int ,char*,int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (scalar_t__) ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;

__attribute__((used)) static int FUNC_4(struct hl_device *VAR_7,
    struct hl_cs_parser *VAR_8,
    struct packet_wreg32 *VAR_9)
{
 struct goya_device *VAR_10 = VAR_7->asic_specific;
 u32 VAR_11, VAR_12;
 u16 VAR_13;

 VAR_13 = FUNC_2(VAR_9->ctl) &
   VAR_2;

 FUNC_0(VAR_7->dev, "WREG32 packet details:\n");
 FUNC_0(VAR_7->dev, "reg_offset == 0x%x\n", VAR_13);
 FUNC_0(VAR_7->dev, "value      == 0x%x\n",
  FUNC_2(VAR_9->value));

 if (VAR_13 != (VAR_4 & 0x1FFF)) {
  FUNC_1(VAR_7->dev, "WREG32 packet with illegal address 0x%x\n",
   VAR_13);
  return -VAR_1;
 }






 if (VAR_10->hw_cap_initialized & VAR_3)
  return 0;

 VAR_11 = FUNC_3(VAR_0 + VAR_5);
 VAR_12 = FUNC_3(VAR_0 + VAR_6);

 if ((FUNC_2(VAR_9->value) < VAR_11) ||
   (FUNC_2(VAR_9->value) > VAR_12)) {

  FUNC_1(VAR_7->dev, "WREG32 packet with illegal value 0x%x\n",
   VAR_9->value);
  return -VAR_1;
 }

 return 0;
}
