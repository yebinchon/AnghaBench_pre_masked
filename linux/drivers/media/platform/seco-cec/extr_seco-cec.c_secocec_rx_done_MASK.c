
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct secocec_data {int cec_adap; struct device* dev; } ;
struct device {int dummy; } ;
struct cec_msg {int len; int* msg; } ;
struct cec_adapter {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 struct secocec_data* FUNC_0 (struct cec_adapter*) ;
 int FUNC_1 (int ,struct cec_msg*) ;
 int FUNC_2 (struct device*,char*) ;
 int FUNC_3 (int,int ) ;
 int FUNC_4 (scalar_t__,int*) ;
 int FUNC_5 (int ,int) ;

__attribute__((used)) static void FUNC_6(struct cec_adapter *VAR_10, u16 VAR_11)
{
 struct secocec_data *VAR_12 = FUNC_0(VAR_10);
 struct device *VAR_13 = VAR_12->dev;
 struct cec_msg VAR_14 = { };
 bool VAR_15 = 0;
 u8 VAR_16, VAR_17 = 0;
 u8 *VAR_18;
 u16 VAR_19 = 0;
 int VAR_20;

 if (VAR_11 & VAR_9) {

  FUNC_2(VAR_13, "Received more than 16 bytes. Discarding");
  VAR_15 = 1;
 }

 if (VAR_11 & VAR_8) {
  FUNC_2(VAR_13, "Message received with errors. Discarding");
  VAR_20 = -VAR_1;
  goto rxerr;
 }


 VAR_20 = FUNC_4(VAR_4, &VAR_19);
 if (VAR_20)
  return;


 VAR_14.len = FUNC_3(VAR_19 + 1, VAR_0);


 VAR_20 = FUNC_4(VAR_2, &VAR_19);
 if (VAR_20)
  return;


 VAR_14.msg[0] = VAR_19;


 VAR_20 = FUNC_4(VAR_5, &VAR_19);
 if (VAR_20)
  return;

 VAR_14.msg[1] = VAR_19;


 if (VAR_14.len > 1) {
  VAR_16 = VAR_14.len - 2;
  VAR_18 = &VAR_14.msg[2];


  for (VAR_17 = 0; VAR_17 < VAR_16; VAR_17 += 2) {
   VAR_20 = FUNC_4(VAR_3 + VAR_17 / 2, &VAR_19);
   if (VAR_20)
    return;


   VAR_18[VAR_17] = VAR_19 & 0x00ff;


   VAR_18[VAR_17 + 1] = (VAR_19 & 0xff00) >> 8;
  }
 }

 FUNC_1(VAR_12->cec_adap, &VAR_14);


 VAR_11 = VAR_7;
 if (VAR_15)
  VAR_11 |= VAR_9;

 VAR_20 = FUNC_5(VAR_6, VAR_11);

 return;

rxerr:

 VAR_11 = VAR_7 |
  VAR_8;
 if (VAR_15)
  VAR_11 |= VAR_9;
 FUNC_5(VAR_6, VAR_11);
}
