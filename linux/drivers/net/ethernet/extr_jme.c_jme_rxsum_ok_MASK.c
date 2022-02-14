
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct sk_buff {int dummy; } ;
struct jme_adapter {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_0 (struct sk_buff*) ;
 int FUNC_1 (struct jme_adapter*,int ,int ,char*) ;
 int VAR_7 ;
 scalar_t__ FUNC_2 (int) ;

__attribute__((used)) static int
FUNC_3(struct jme_adapter *VAR_8, u16 VAR_9, struct sk_buff *VAR_10)
{
 if (!(VAR_9 & (VAR_4 | VAR_6 | VAR_1)))
  return 0;

 if (FUNC_2((VAR_9 & (VAR_2 | VAR_4 | VAR_3))
   == VAR_4)) {
  if (VAR_9 & VAR_1)
   FUNC_1(VAR_8, VAR_7, VAR_8->dev, "TCP Checksum error\n");
  return 0;
 }

 if (FUNC_2((VAR_9 & (VAR_2 | VAR_6 | VAR_5))
   == VAR_6) && FUNC_0(VAR_10)) {
  if (VAR_9 & VAR_1)
   FUNC_1(VAR_8, VAR_7, VAR_8->dev, "UDP Checksum error\n");
  return 0;
 }

 if (FUNC_2((VAR_9 & (VAR_1 | VAR_0))
   == VAR_1)) {
  FUNC_1(VAR_8, VAR_7, VAR_8->dev, "IPv4 Checksum error\n");
  return 0;
 }

 return 1;
}
