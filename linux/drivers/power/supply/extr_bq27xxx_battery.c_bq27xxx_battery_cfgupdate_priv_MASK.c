
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct bq27xxx_device_info {scalar_t__ chip; int dev; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (struct bq27xxx_device_info*,int ,int) ;
 int FUNC_2 (struct bq27xxx_device_info*,int ,int ,int) ;
 int FUNC_3 (int ,char*,int) ;
 int FUNC_4 (int ,char*,int,int const) ;

__attribute__((used)) static int FUNC_5(struct bq27xxx_device_info *VAR_7, bool VAR_8)
{
 const int VAR_9 = 100;
 u16 VAR_10 = VAR_8 ? VAR_4 : VAR_5;
 int VAR_11, VAR_12 = VAR_9;

 VAR_11 = FUNC_2(VAR_7, VAR_2, VAR_10, 0);
 if (VAR_11 < 0)
  return VAR_11;

 do {
  FUNC_0(25);
  VAR_11 = FUNC_1(VAR_7, VAR_3, 0);
  if (VAR_11 < 0)
   return VAR_11;
 } while (!!(VAR_11 & VAR_1) != VAR_8 && --VAR_12);

 if (!VAR_12 && VAR_7->chip != VAR_0) {
  FUNC_3(VAR_7->dev, "timed out waiting for cfgupdate flag %d\n", VAR_8);
  return -VAR_6;
 }

 if (VAR_9 - VAR_12 > 3)
  FUNC_4(VAR_7->dev, "cfgupdate %d, retries %d\n", VAR_8, VAR_9 - VAR_12);

 return 0;
}
