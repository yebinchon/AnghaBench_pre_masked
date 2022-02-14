
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct realtek_smi {int dev; int map; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,char*,int,int,int,int) ;
 int FUNC_1 (int ,char*,int,int,int,int) ;
 int FUNC_2 (int ,int ,int*) ;
 int FUNC_3 (int ,int,int ) ;

__attribute__((used)) static int FUNC_4(struct realtek_smi *VAR_6, int VAR_7, int VAR_8)
{
 u32 VAR_9;
 u32 VAR_10;
 int VAR_11;

 if (VAR_7 > VAR_4)
  return -VAR_0;

 VAR_11 = FUNC_3(VAR_6->map, VAR_1,
      VAR_3);
 if (VAR_11)
  return VAR_11;

 VAR_10 = 0x8000 | (1 << (VAR_7 + VAR_5)) | VAR_8;

 VAR_11 = FUNC_3(VAR_6->map, VAR_10, 0);
 if (VAR_11) {
  FUNC_1(VAR_6->dev,
   "failed to write PHY%d reg %04x @ %04x, ret %d\n",
   VAR_7, VAR_8, VAR_10, VAR_11);
  return VAR_11;
 }

 VAR_11 = FUNC_2(VAR_6->map, VAR_2, &VAR_9);
 if (VAR_11)
  return VAR_11;

 FUNC_0(VAR_6->dev, "read PHY%d register 0x%04x @ %08x, val <- %04x\n",
  VAR_7, VAR_8, VAR_10, VAR_9);

 return VAR_9;
}
