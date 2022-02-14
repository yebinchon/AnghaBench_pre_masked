
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct rt2x00_dev {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int ,int) ;
 int FUNC_1 (struct rt2x00_dev*,int ) ;
 int FUNC_2 (struct rt2x00_dev*,int ,int ) ;
 scalar_t__ FUNC_3 (struct rt2x00_dev*) ;
 scalar_t__ FUNC_4 (struct rt2x00_dev*) ;
 scalar_t__ FUNC_5 (struct rt2x00_dev*) ;
 scalar_t__ FUNC_6 (int) ;

__attribute__((used)) static int FUNC_7(struct rt2x00_dev *VAR_3)
{
 u32 VAR_4;




 if (FUNC_6(FUNC_4(VAR_3) ||
       FUNC_5(VAR_3) ||
       FUNC_3(VAR_3)))
  return -VAR_0;




 VAR_4 = FUNC_1(VAR_3, VAR_1);
 FUNC_0(&VAR_4, VAR_2, 1);
 FUNC_2(VAR_3, VAR_1, VAR_4);

 return 0;
}
