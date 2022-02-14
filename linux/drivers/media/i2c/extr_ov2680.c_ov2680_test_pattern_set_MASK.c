
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ov2680_dev {int dummy; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (struct ov2680_dev*,int ,int,int) ;

__attribute__((used)) static int FUNC_2(struct ov2680_dev *VAR_1, int VAR_2)
{
 int VAR_3;

 if (!VAR_2)
  return FUNC_1(VAR_1, VAR_0, FUNC_0(7), 0);

 VAR_3 = FUNC_1(VAR_1, VAR_0, 0x03, VAR_2 - 1);
 if (VAR_3 < 0)
  return VAR_3;

 VAR_3 = FUNC_1(VAR_1, VAR_0, FUNC_0(7), FUNC_0(7));
 if (VAR_3 < 0)
  return VAR_3;

 return 0;
}
