
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u32 ;
struct hl_device {int dev; } ;
struct hl_debug_params_etr {int buffer_size; int sink_mode; int buffer_address; } ;
struct hl_debug_params {int output_size; scalar_t__ output; struct hl_debug_params_etr* input; scalar_t__ enable; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (int ,char*,...) ;
 int FUNC_3 (struct hl_device*,int,int,int) ;
 int FUNC_4 (struct hl_device*,int ,int) ;
 int FUNC_5 (int ) ;
 int VAR_3 ;
 int FUNC_6 (int ) ;

__attribute__((used)) static int FUNC_7(struct hl_device *VAR_4,
  struct hl_debug_params *VAR_5)
{
 struct hl_debug_params_etr *VAR_6;
 u64 VAR_7 = VAR_3 - VAR_0;
 u32 VAR_8;
 int VAR_9;

 FUNC_1(VAR_7 + 0xFB0, VAR_1);

 VAR_8 = FUNC_0(VAR_7 + 0x304);
 VAR_8 |= 0x1000;
 FUNC_1(VAR_7 + 0x304, VAR_8);
 VAR_8 |= 0x40;
 FUNC_1(VAR_7 + 0x304, VAR_8);

 VAR_9 = FUNC_3(VAR_4, VAR_7 + 0x304, 6, 0);
 if (VAR_9) {
  FUNC_2(VAR_4->dev, "Failed to %s ETR on timeout, error %d\n",
    VAR_5->enable ? "enable" : "disable", VAR_9);
  return VAR_9;
 }

 VAR_9 = FUNC_3(VAR_4, VAR_7 + 0xC, 2, 1);
 if (VAR_9) {
  FUNC_2(VAR_4->dev, "Failed to %s ETR on timeout, error %d\n",
    VAR_5->enable ? "enable" : "disable", VAR_9);
  return VAR_9;
 }

 FUNC_1(VAR_7 + 0x20, 0);

 if (VAR_5->enable) {
  VAR_6 = VAR_5->input;

  if (!VAR_6)
   return -VAR_2;

  if (VAR_6->buffer_size == 0) {
   FUNC_2(VAR_4->dev,
    "ETR buffer size should be bigger than 0\n");
   return -VAR_2;
  }

  if (!FUNC_4(VAR_4,
    VAR_6->buffer_address, VAR_6->buffer_size)) {
   FUNC_2(VAR_4->dev, "buffer address is not valid\n");
   return -VAR_2;
  }

  FUNC_1(VAR_7 + 0x34, 0x3FFC);
  FUNC_1(VAR_7 + 0x4, VAR_6->buffer_size);
  FUNC_1(VAR_7 + 0x28, VAR_6->sink_mode);
  FUNC_1(VAR_7 + 0x110, 0x700);
  FUNC_1(VAR_7 + 0x118,
    FUNC_5(VAR_6->buffer_address));
  FUNC_1(VAR_7 + 0x11C,
    FUNC_6(VAR_6->buffer_address));
  FUNC_1(VAR_7 + 0x304, 3);
  FUNC_1(VAR_7 + 0x308, 0xA);
  FUNC_1(VAR_7 + 0x20, 1);
 } else {
  FUNC_1(VAR_7 + 0x34, 0);
  FUNC_1(VAR_7 + 0x4, 0x400);
  FUNC_1(VAR_7 + 0x118, 0);
  FUNC_1(VAR_7 + 0x11C, 0);
  FUNC_1(VAR_7 + 0x308, 0);
  FUNC_1(VAR_7 + 0x28, 0);
  FUNC_1(VAR_7 + 0x304, 0);

  if (VAR_5->output_size >= sizeof(u64)) {
   u32 VAR_10, VAR_11;






   VAR_10 = FUNC_0(VAR_7 + 0x18);
   VAR_11 = FUNC_0(VAR_7 + 0x3c) & 0xff;
   *(u64 *) VAR_5->output = ((u64) VAR_11 << 32) | VAR_10;
  }
 }

 return 0;
}
