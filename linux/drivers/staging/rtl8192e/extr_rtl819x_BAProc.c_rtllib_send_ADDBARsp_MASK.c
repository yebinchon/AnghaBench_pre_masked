
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct sk_buff {int dummy; } ;
struct rtllib_device {int dev; } ;
struct ba_record {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*) ;
 struct sk_buff* FUNC_1 (struct rtllib_device*,int *,struct ba_record*,int ,int ) ;
 int FUNC_2 (struct sk_buff*,struct rtllib_device*) ;

__attribute__((used)) static void FUNC_3(struct rtllib_device *VAR_1, u8 *VAR_2,
     struct ba_record *VAR_3, u16 VAR_4)
{
 struct sk_buff *VAR_5;

 VAR_5 = FUNC_1(VAR_1, VAR_2, VAR_3, VAR_4, VAR_0);
 if (VAR_5)
  FUNC_2(VAR_5, VAR_1);
 else
  FUNC_0(VAR_1->dev, "Failed to generate ADDBARsp packet.\n");
}
