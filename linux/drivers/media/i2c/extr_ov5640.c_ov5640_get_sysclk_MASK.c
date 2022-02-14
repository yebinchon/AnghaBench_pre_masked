
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct ov5640_dev {int xclk_freq; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct ov5640_dev*,int ,int*) ;

__attribute__((used)) static int FUNC_1(struct ov5640_dev *VAR_6)
{

 u32 VAR_7 = VAR_6->xclk_freq / 10000;
 u32 VAR_8, VAR_9, VAR_10, VAR_11, VAR_12;
 u32 VAR_13[] = {1, 2, 4, 8};
 u32 VAR_14 = 1, VAR_15, VAR_16;
 u8 VAR_17, VAR_18;
 int VAR_19;

 VAR_19 = FUNC_0(VAR_6, VAR_1, &VAR_17);
 if (VAR_19)
  return VAR_19;
 VAR_18 = VAR_17 & 0x0f;
 if (VAR_18 == 8 || VAR_18 == 10)
  VAR_14 = VAR_18 / 2;

 VAR_19 = FUNC_0(VAR_6, VAR_2, &VAR_17);
 if (VAR_19)
  return VAR_19;
 VAR_11 = VAR_17 >> 4;
 if (VAR_11 == 0)
  VAR_11 = 16;

 VAR_19 = FUNC_0(VAR_6, VAR_3, &VAR_17);
 if (VAR_19)
  return VAR_19;
 VAR_8 = VAR_17;

 VAR_19 = FUNC_0(VAR_6, VAR_4, &VAR_17);
 if (VAR_19)
  return VAR_19;
 VAR_9 = VAR_17 & 0x0f;
 VAR_12 = ((VAR_17 >> 4) & 0x01) + 1;

 VAR_19 = FUNC_0(VAR_6, VAR_5, &VAR_17);
 if (VAR_19)
  return VAR_19;
 VAR_18 = VAR_17 & 0x03;
 VAR_15 = VAR_13[VAR_18];

 if (!VAR_9 || !VAR_11 || !VAR_12 || !VAR_14)
  return -VAR_0;

 VAR_10 = VAR_7 * VAR_8 / VAR_9;

 VAR_16 = VAR_10 / VAR_11 / VAR_12 * 2 / VAR_14 / VAR_15;

 return VAR_16;
}
