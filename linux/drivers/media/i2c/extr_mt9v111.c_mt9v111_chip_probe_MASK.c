
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct mt9v111_dev {int sd; int dev; int client; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,char*,int,int) ;
 int FUNC_3 (int ,char*,int,int) ;
 int FUNC_4 (int ,int ,int ,int*) ;

__attribute__((used)) static int FUNC_5(struct mt9v111_dev *VAR_5)
{
 int VAR_6;
 u16 VAR_7;

 VAR_6 = FUNC_1(&VAR_5->sd);
 if (VAR_6)
  return VAR_6;

 VAR_6 = FUNC_4(VAR_5->client, VAR_4,
      VAR_3, &VAR_7);
 if (VAR_6)
  goto power_off;

 if ((VAR_7 >> 8) != VAR_1 &&
     (VAR_7 & 0xff) != VAR_2) {
  FUNC_3(VAR_5->dev,
   "Unable to identify MT9V111 chip: 0x%2x%2x\n",
   VAR_7 >> 8, VAR_7 & 0xff);
  VAR_6 = -VAR_0;
  goto power_off;
 }

 FUNC_2(VAR_5->dev, "Chip identified: 0x%2x%2x\n",
  VAR_7 >> 8, VAR_7 & 0xff);

power_off:
 FUNC_0(&VAR_5->sd);

 return VAR_6;
}
