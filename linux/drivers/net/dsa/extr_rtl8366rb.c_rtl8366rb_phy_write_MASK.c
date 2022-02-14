
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;
struct realtek_smi {int map; int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,char*,int,int,int,int ) ;
 int FUNC_1 (int ,int,int ) ;

__attribute__((used)) static int FUNC_2(struct realtek_smi *VAR_5, int VAR_6, int VAR_7,
          u16 VAR_8)
{
 u32 VAR_9;
 int VAR_10;

 if (VAR_6 > VAR_3)
  return -VAR_0;

 VAR_10 = FUNC_1(VAR_5->map, VAR_1,
      VAR_2);
 if (VAR_10)
  return VAR_10;

 VAR_9 = 0x8000 | (1 << (VAR_6 + VAR_4)) | VAR_7;

 FUNC_0(VAR_5->dev, "write PHY%d register 0x%04x @ %04x, val -> %04x\n",
  VAR_6, VAR_7, VAR_9, VAR_8);

 VAR_10 = FUNC_1(VAR_5->map, VAR_9, VAR_8);
 if (VAR_10)
  return VAR_10;

 return 0;
}
