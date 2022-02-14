
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct rt2x00_dev {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct rt2x00_dev*) ;
 scalar_t__ FUNC_1 (struct rt2x00_dev*,int ) ;
 int FUNC_2 (scalar_t__*,int ,int) ;
 int FUNC_3 (struct rt2x00_dev*,int ,scalar_t__) ;

__attribute__((used)) static void FUNC_4(struct rt2x00_dev *VAR_4)
{
 u32 VAR_5;

 FUNC_0(VAR_4);
 FUNC_3(VAR_4, VAR_0, 0);

 VAR_5 = 0;
 if (FUNC_1(VAR_4, VAR_1))
  FUNC_2(&VAR_5, VAR_3, 1);

 FUNC_3(VAR_4, VAR_2, VAR_5);
}
