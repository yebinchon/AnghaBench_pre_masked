
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int code; } ;
struct ov2680_dev {TYPE_1__ fmt; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int * VAR_2 ;
 int FUNC_1 (struct ov2680_dev*,int ,int*) ;

__attribute__((used)) static int FUNC_2(struct ov2680_dev *VAR_3)
{
 u32 VAR_4;
 u32 VAR_5;
 u32 VAR_6;
 int VAR_7;

 VAR_7 = FUNC_1(VAR_3, VAR_0, &VAR_4);
 if (VAR_7 < 0)
  return VAR_7;

 VAR_7 = FUNC_1(VAR_3, VAR_1, &VAR_5);
 if (VAR_7 < 0)
  return VAR_7;

 VAR_6 = (VAR_5 & FUNC_0(2) << 1) | (VAR_4 & FUNC_0(2));

 VAR_3->fmt.code = VAR_2[VAR_6];

 return 0;
}
