
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef unsigned int u32 ;
struct jme_adapter {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 unsigned int VAR_7 ;
 unsigned int VAR_8 ;
 unsigned int VAR_9 ;
 int VAR_10 ;
 unsigned int FUNC_0 (struct jme_adapter*,int ) ;
 int FUNC_1 (struct jme_adapter*,int ,unsigned int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (struct jme_adapter*,int ,int ,char*) ;

__attribute__((used)) static u8
FUNC_4(struct jme_adapter *VAR_11, unsigned int VAR_12)
{
 u32 VAR_13;
 int VAR_14;

 VAR_13 = FUNC_0(VAR_11, VAR_0);
 VAR_14 = VAR_2;
 while ((VAR_13 & VAR_3) && --VAR_14) {
  FUNC_2(1);
  VAR_13 = FUNC_0(VAR_11, VAR_0);
 }
 if (!VAR_14) {
  FUNC_3(VAR_11, VAR_10, VAR_11->dev, "SMB Bus Busy\n");
  return 0xFF;
 }

 FUNC_1(VAR_11, VAR_1,
  ((VAR_12 << VAR_5) & VAR_4) |
  VAR_9 |
  VAR_6);

 VAR_13 = FUNC_0(VAR_11, VAR_1);
 VAR_14 = VAR_2;
 while ((VAR_13 & VAR_6) && --VAR_14) {
  FUNC_2(1);
  VAR_13 = FUNC_0(VAR_11, VAR_1);
 }
 if (!VAR_14) {
  FUNC_3(VAR_11, VAR_10, VAR_11->dev, "SMB Bus Busy\n");
  return 0xFF;
 }

 return (VAR_13 & VAR_7) >> VAR_8;
}
