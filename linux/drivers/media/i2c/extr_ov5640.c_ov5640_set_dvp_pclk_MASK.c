
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct ov5640_dev {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct ov5640_dev*,unsigned long,int*,int*,int*,int*,int*,int*) ;
 int FUNC_2 (struct ov5640_dev*,int ,int,int) ;

__attribute__((used)) static int FUNC_3(struct ov5640_dev *VAR_5, unsigned long VAR_6)
{
 u8 VAR_7, VAR_8, VAR_9, VAR_10, VAR_11, VAR_12;
 int VAR_13;

 FUNC_1(VAR_5, VAR_6, &VAR_7, &VAR_8, &VAR_9, &VAR_10,
    &VAR_11, &VAR_12);

 if (VAR_11 == 2)
  VAR_11 = 8;

 VAR_13 = FUNC_2(VAR_5, VAR_0,
        0x0f, VAR_11);
 if (VAR_13)
  return VAR_13;





 VAR_13 = FUNC_2(VAR_5, VAR_1,
        0xff, VAR_9 << 4);
 if (VAR_13)
  return VAR_13;

 VAR_13 = FUNC_2(VAR_5, VAR_2,
        0xff, VAR_8);
 if (VAR_13)
  return VAR_13;

 VAR_13 = FUNC_2(VAR_5, VAR_3,
        0x1f, VAR_7 | ((VAR_10 - 1) << 4));
 if (VAR_13)
  return VAR_13;

 return FUNC_2(VAR_5, VAR_4, 0x30,
         (FUNC_0(VAR_12) << 4));
}
