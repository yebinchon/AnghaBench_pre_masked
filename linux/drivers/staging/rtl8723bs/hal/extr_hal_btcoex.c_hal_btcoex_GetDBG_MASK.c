
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef scalar_t__ u32 ;
struct adapter {int dummy; } ;
typedef scalar_t__ s32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 size_t VAR_10 ;
 size_t VAR_11 ;
 int VAR_12 ;
 int* VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 scalar_t__ FUNC_0 (int *,scalar_t__,char*,...) ;

u32 FUNC_1(struct adapter *VAR_16, u8 *VAR_17, u32 VAR_18)
{
 s32 VAR_19;
 u8 *VAR_20;
 u32 VAR_21;


 if (!VAR_17 || VAR_18 == 0)
  return 0;

 VAR_20 = VAR_17;
 VAR_21 = VAR_18;


 VAR_19 = FUNC_0(VAR_20, VAR_21, "#define DBG\t%d\n", VAR_12);
 if ((VAR_19 < 0) || (VAR_19 >= VAR_21))
  goto exit;
 VAR_20 += VAR_19;
 VAR_21 -= VAR_19;

 VAR_19 = FUNC_0(VAR_20, VAR_21, "BTCOEX Debug Setting:\n");
 if ((VAR_19 < 0) || (VAR_19 >= VAR_21))
  goto exit;
 VAR_20 += VAR_19;
 VAR_21 -= VAR_19;

 VAR_19 = FUNC_0(VAR_20, VAR_21,
  "INTERFACE / ALGORITHM: 0x%08X / 0x%08X\n\n",
  VAR_13[VAR_11],
  VAR_13[VAR_10]);
 if ((VAR_19 < 0) || (VAR_19 >= VAR_21))
  goto exit;
 VAR_20 += VAR_19;
 VAR_21 -= VAR_19;

 VAR_19 = FUNC_0(VAR_20, VAR_21, "INTERFACE Debug Setting Definition:\n");
 if ((VAR_19 < 0) || (VAR_19 >= VAR_21))
  goto exit;
 VAR_20 += VAR_19;
 VAR_21 -= VAR_19;
 VAR_19 = FUNC_0(VAR_20, VAR_21, "\tbit[0]=%d for INTF_INIT\n",
  (VAR_13[VAR_11]&VAR_14)?1:0);
 if ((VAR_19 < 0) || (VAR_19 >= VAR_21))
  goto exit;
 VAR_20 += VAR_19;
 VAR_21 -= VAR_19;
 VAR_19 = FUNC_0(VAR_20, VAR_21, "\tbit[2]=%d for INTF_NOTIFY\n\n",
  (VAR_13[VAR_11]&VAR_15)?1:0);
 if ((VAR_19 < 0) || (VAR_19 >= VAR_21))
  goto exit;
 VAR_20 += VAR_19;
 VAR_21 -= VAR_19;

 VAR_19 = FUNC_0(VAR_20, VAR_21, "ALGORITHM Debug Setting Definition:\n");
 if ((VAR_19 < 0) || (VAR_19 >= VAR_21))
  goto exit;
 VAR_20 += VAR_19;
 VAR_21 -= VAR_19;
 VAR_19 = FUNC_0(VAR_20, VAR_21, "\tbit[0]=%d for BT_RSSI_STATE\n",
  (VAR_13[VAR_10]&VAR_1)?1:0);
 if ((VAR_19 < 0) || (VAR_19 >= VAR_21))
  goto exit;
 VAR_20 += VAR_19;
 VAR_21 -= VAR_19;
 VAR_19 = FUNC_0(VAR_20, VAR_21, "\tbit[1]=%d for WIFI_RSSI_STATE\n",
  (VAR_13[VAR_10]&VAR_9)?1:0);
 if ((VAR_19 < 0) || (VAR_19 >= VAR_21))
  goto exit;
 VAR_20 += VAR_19;
 VAR_21 -= VAR_19;
 VAR_19 = FUNC_0(VAR_20, VAR_21, "\tbit[2]=%d for BT_MONITOR\n",
  (VAR_13[VAR_10]&VAR_0)?1:0);
 if ((VAR_19 < 0) || (VAR_19 >= VAR_21))
  goto exit;
 VAR_20 += VAR_19;
 VAR_21 -= VAR_19;
 VAR_19 = FUNC_0(VAR_20, VAR_21, "\tbit[3]=%d for TRACE\n",
  (VAR_13[VAR_10]&VAR_2)?1:0);
 if ((VAR_19 < 0) || (VAR_19 >= VAR_21))
  goto exit;
 VAR_20 += VAR_19;
 VAR_21 -= VAR_19;
 VAR_19 = FUNC_0(VAR_20, VAR_21, "\tbit[4]=%d for TRACE_FW\n",
  (VAR_13[VAR_10]&VAR_3)?1:0);
 if ((VAR_19 < 0) || (VAR_19 >= VAR_21))
  goto exit;
 VAR_20 += VAR_19;
 VAR_21 -= VAR_19;
 VAR_19 = FUNC_0(VAR_20, VAR_21, "\tbit[5]=%d for TRACE_FW_DETAIL\n",
  (VAR_13[VAR_10]&VAR_4)?1:0);
 if ((VAR_19 < 0) || (VAR_19 >= VAR_21))
  goto exit;
 VAR_20 += VAR_19;
 VAR_21 -= VAR_19;
 VAR_19 = FUNC_0(VAR_20, VAR_21, "\tbit[6]=%d for TRACE_FW_EXEC\n",
  (VAR_13[VAR_10]&VAR_5)?1:0);
 if ((VAR_19 < 0) || (VAR_19 >= VAR_21))
  goto exit;
 VAR_20 += VAR_19;
 VAR_21 -= VAR_19;
 VAR_19 = FUNC_0(VAR_20, VAR_21, "\tbit[7]=%d for TRACE_SW\n",
  (VAR_13[VAR_10]&VAR_6)?1:0);
 if ((VAR_19 < 0) || (VAR_19 >= VAR_21))
  goto exit;
 VAR_20 += VAR_19;
 VAR_21 -= VAR_19;
 VAR_19 = FUNC_0(VAR_20, VAR_21, "\tbit[8]=%d for TRACE_SW_DETAIL\n",
  (VAR_13[VAR_10]&VAR_7)?1:0);
 if ((VAR_19 < 0) || (VAR_19 >= VAR_21))
  goto exit;
 VAR_20 += VAR_19;
 VAR_21 -= VAR_19;
 VAR_19 = FUNC_0(VAR_20, VAR_21, "\tbit[9]=%d for TRACE_SW_EXEC\n",
  (VAR_13[VAR_10]&VAR_8)?1:0);
 if ((VAR_19 < 0) || (VAR_19 >= VAR_21))
  goto exit;
 VAR_20 += VAR_19;
 VAR_21 -= VAR_19;

exit:
 VAR_19 = VAR_20 - VAR_17;


 return VAR_19;
}
