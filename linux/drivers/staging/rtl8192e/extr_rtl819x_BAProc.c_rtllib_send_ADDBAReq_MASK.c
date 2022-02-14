
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct sk_buff {int dummy; } ;
struct rtllib_device {int dev; } ;
struct ba_record {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ,char*) ;
 struct sk_buff* FUNC_2 (struct rtllib_device*,int *,struct ba_record*,int ,int ) ;
 int FUNC_3 (struct sk_buff*,struct rtllib_device*) ;

__attribute__((used)) static void FUNC_4(struct rtllib_device *VAR_2, u8 *VAR_3,
     struct ba_record *VAR_4)
{
 struct sk_buff *VAR_5;

 VAR_5 = FUNC_2(VAR_2, VAR_3, VAR_4, 0, VAR_0);

 if (VAR_5) {
  FUNC_0(VAR_1, "====>to send ADDBAREQ!!!!!\n");
  FUNC_3(VAR_5, VAR_2);
 } else {
  FUNC_1(VAR_2->dev, "Failed to generate ADDBAReq packet.\n");
 }
}
