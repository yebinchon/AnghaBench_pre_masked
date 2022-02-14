
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ov5640_dev {int prev_sysclk; int prev_hts; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct ov5640_dev*) ;
 int FUNC_1 (struct ov5640_dev*) ;
 int FUNC_2 (struct ov5640_dev*) ;
 int FUNC_3 (struct ov5640_dev*,int ,int) ;
 int FUNC_4 (struct ov5640_dev*,int ,int) ;

__attribute__((used)) static int FUNC_5(struct ov5640_dev *VAR_5)
{
 u32 VAR_6, VAR_7, VAR_8, VAR_9, VAR_10;
 int VAR_11;


 VAR_11 = FUNC_1(VAR_5);
 if (VAR_11 < 0)
  return VAR_11;
 if (VAR_11 == 0)
  return -VAR_0;
 VAR_5->prev_sysclk = VAR_11;

 VAR_11 = FUNC_0(VAR_5);
 if (VAR_11 < 0)
  return VAR_11;
 if (VAR_11 == 0)
  return -VAR_0;
 VAR_5->prev_hts = VAR_11;


 VAR_11 = FUNC_2(VAR_5);
 if (VAR_11 < 0)
  return VAR_11;
 VAR_10 = VAR_11;



 VAR_6 = VAR_5->prev_sysclk * 100 / VAR_5->prev_hts * 100 / 120;
 VAR_11 = FUNC_4(VAR_5, VAR_2, VAR_6);
 if (VAR_11)
  return VAR_11;
 if (!VAR_6)
  return -VAR_0;
 VAR_7 = (int)((VAR_10 - 4) / VAR_6);
 VAR_11 = FUNC_3(VAR_5, VAR_3, VAR_7);
 if (VAR_11)
  return VAR_11;


 VAR_8 = VAR_5->prev_sysclk * 100 / VAR_5->prev_hts;
 VAR_11 = FUNC_4(VAR_5, VAR_1, VAR_8);
 if (VAR_11)
  return VAR_11;
 if (!VAR_8)
  return -VAR_0;
 VAR_9 = (int)((VAR_10 - 4) / VAR_8);
 return FUNC_3(VAR_5, VAR_4, VAR_9);
}
