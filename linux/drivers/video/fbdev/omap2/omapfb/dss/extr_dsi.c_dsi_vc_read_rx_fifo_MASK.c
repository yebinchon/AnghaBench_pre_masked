
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
typedef int u32 ;
typedef int u16 ;
struct platform_device {int dummy; } ;
struct dsi_data {scalar_t__ debug_read; } ;
typedef enum dss_dsi_content_type { ____Placeholder_dss_dsi_content_type } dss_dsi_content_type ;


 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (char*,...) ;
 int FUNC_3 (char*,...) ;
 int VAR_0 ;
 int VAR_1 ;
 void* FUNC_4 (int,int,int) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ FUNC_5 (struct platform_device*,int ,int,int) ;
 struct dsi_data* FUNC_6 (struct platform_device*) ;
 int FUNC_7 (struct platform_device*,int ) ;
 int FUNC_8 (int) ;

__attribute__((used)) static int FUNC_9(struct platform_device *VAR_9, int VAR_10,
  u8 *VAR_11, int VAR_12, enum dss_dsi_content_type VAR_13)
{
 struct dsi_data *VAR_14 = FUNC_6(VAR_9);
 u32 VAR_15;
 u8 VAR_16;
 int VAR_17;


 if (FUNC_5(VAR_9, FUNC_0(VAR_10), 20, 20) == 0) {
  FUNC_3("RX fifo empty when trying to read.\n");
  VAR_17 = -VAR_1;
  goto err;
 }

 VAR_15 = FUNC_7(VAR_9, FUNC_1(VAR_10));
 if (VAR_14->debug_read)
  FUNC_2("\theader: %08x\n", VAR_15);
 VAR_16 = FUNC_4(VAR_15, 5, 0);
 if (VAR_16 == VAR_2) {
  u16 VAR_18 = FUNC_4(VAR_15, 23, 8);
  FUNC_8(VAR_18);
  VAR_17 = -VAR_1;
  goto err;

 } else if (VAR_16 == (VAR_13 == VAR_0 ?
   VAR_7 :
   VAR_4)) {
  u8 VAR_19 = FUNC_4(VAR_15, 15, 8);
  if (VAR_14->debug_read)
   FUNC_2("\t%s short response, 1 byte: %02x\n",
    VAR_13 == VAR_0 ? "GENERIC" :
    "DCS", VAR_19);

  if (VAR_12 < 1) {
   VAR_17 = -VAR_1;
   goto err;
  }

  VAR_11[0] = VAR_19;

  return 1;
 } else if (VAR_16 == (VAR_13 == VAR_0 ?
   VAR_8 :
   VAR_5)) {
  u16 VAR_20 = FUNC_4(VAR_15, 23, 8);
  if (VAR_14->debug_read)
   FUNC_2("\t%s short response, 2 byte: %04x\n",
    VAR_13 == VAR_0 ? "GENERIC" :
    "DCS", VAR_20);

  if (VAR_12 < 2) {
   VAR_17 = -VAR_1;
   goto err;
  }

  VAR_11[0] = VAR_20 & 0xff;
  VAR_11[1] = (VAR_20 >> 8) & 0xff;

  return 2;
 } else if (VAR_16 == (VAR_13 == VAR_0 ?
   VAR_6 :
   VAR_3)) {
  int VAR_21;
  int VAR_22 = FUNC_4(VAR_15, 23, 8);
  if (VAR_14->debug_read)
   FUNC_2("\t%s long response, len %d\n",
    VAR_13 == VAR_0 ? "GENERIC" :
    "DCS", VAR_22);

  if (VAR_22 > VAR_12) {
   VAR_17 = -VAR_1;
   goto err;
  }


  for (VAR_21 = 0; VAR_21 < VAR_22 + 2;) {
   int VAR_23;
   VAR_15 = FUNC_7(VAR_9,
    FUNC_1(VAR_10));
   if (VAR_14->debug_read)
    FUNC_2("\t\t%02x %02x %02x %02x\n",
      (VAR_15 >> 0) & 0xff,
      (VAR_15 >> 8) & 0xff,
      (VAR_15 >> 16) & 0xff,
      (VAR_15 >> 24) & 0xff);

   for (VAR_23 = 0; VAR_23 < 4; ++VAR_23) {
    if (VAR_21 < VAR_22)
     VAR_11[VAR_21] = (VAR_15 >> (VAR_23 * 8)) & 0xff;

    ++VAR_21;
   }
  }

  return VAR_22;
 } else {
  FUNC_3("\tunknown datatype 0x%02x\n", VAR_16);
  VAR_17 = -VAR_1;
  goto err;
 }

err:
 FUNC_3("dsi_vc_read_rx_fifo(ch %d type %s) failed\n", VAR_10,
  VAR_13 == VAR_0 ? "GENERIC" : "DCS");

 return VAR_17;
}
