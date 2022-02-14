
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ov5640_dev {int fmt; int * last_mode; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct ov5640_dev*,int *) ;
 int FUNC_2 (struct ov5640_dev*,int ,int,int) ;
 int VAR_3 ;
 int FUNC_3 (struct ov5640_dev*,int *) ;
 int FUNC_4 (struct ov5640_dev*) ;

__attribute__((used)) static int FUNC_5(struct ov5640_dev *VAR_4)
{
 int VAR_5;


 VAR_5 = FUNC_1(VAR_4, &VAR_3);
 if (VAR_5 < 0)
  return VAR_5;
 VAR_4->last_mode = &VAR_3;

 VAR_5 = FUNC_2(VAR_4, VAR_0, 0x3f,
        (FUNC_0(VAR_1) << 2) |
        FUNC_0(VAR_2));
 if (VAR_5)
  return VAR_5;


 VAR_5 = FUNC_4(VAR_4);
 if (VAR_5 < 0)
  return VAR_5;

 return FUNC_3(VAR_4, &VAR_4->fmt);
}
