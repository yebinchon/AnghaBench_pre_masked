
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;
struct sdw_msg {int dev_num; scalar_t__ flags; int* buf; int ssp_sync; scalar_t__ len; int addr; } ;
struct sdw_cdns {int msg_count; int dev; int tx_complete; } ;
typedef enum sdw_command_response { ____Placeholder_sdw_command_response } sdw_command_response ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct sdw_cdns*,struct sdw_msg*,int,int) ;
 int FUNC_2 (struct sdw_cdns*,int,int) ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 (int ) ;
 unsigned long FUNC_5 (int *,int ) ;

__attribute__((used)) static enum sdw_command_response
FUNC_6(struct sdw_cdns *VAR_11, struct sdw_msg *VAR_12, int VAR_13,
        int VAR_14, int VAR_15, bool VAR_16)
{
 unsigned long VAR_17;
 u32 VAR_18, VAR_19, VAR_20;
 u16 VAR_21;


 if (VAR_11->msg_count != VAR_15) {
  FUNC_2(VAR_11, VAR_6, VAR_15);
  VAR_11->msg_count = VAR_15;
 }

 VAR_18 = VAR_0;
 VAR_21 = VAR_12->addr;

 for (VAR_19 = 0; VAR_19 < VAR_15; VAR_19++) {
  VAR_20 = VAR_12->dev_num << FUNC_0(VAR_2);
  VAR_20 |= VAR_13 << FUNC_0(VAR_1);
  VAR_20 |= VAR_21++ << FUNC_0(VAR_3);

  if (VAR_12->flags == VAR_10)
   VAR_20 |= VAR_12->buf[VAR_19 + VAR_14];

  VAR_20 |= VAR_12->ssp_sync << FUNC_0(VAR_4);
  FUNC_2(VAR_11, VAR_18, VAR_20);
  VAR_18 += VAR_5;
 }

 if (VAR_16)
  return VAR_8;


 VAR_17 = FUNC_5(&VAR_11->tx_complete,
        FUNC_4(VAR_7));
 if (!VAR_17) {
  FUNC_3(VAR_11->dev, "IO transfer timed out\n");
  VAR_12->len = 0;
  return VAR_9;
 }

 return FUNC_1(VAR_11, VAR_12, VAR_15, VAR_14);
}
