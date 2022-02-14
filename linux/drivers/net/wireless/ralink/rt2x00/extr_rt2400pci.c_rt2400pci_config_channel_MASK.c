
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rt2x00_dev {int dummy; } ;
struct rf_channel {int rf1; int rf3; int rf2; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct rt2x00_dev*,int,int) ;
 scalar_t__ FUNC_2 (struct rt2x00_dev*,int ) ;
 int FUNC_3 (int*,int ,int) ;
 int FUNC_4 (struct rt2x00_dev*,int ) ;

__attribute__((used)) static void FUNC_5(struct rt2x00_dev *VAR_4,
         struct rf_channel *VAR_5)
{



 FUNC_3(&VAR_5->rf1, VAR_1, 1);
 FUNC_3(&VAR_5->rf3, VAR_3, 1);

 FUNC_1(VAR_4, 1, VAR_5->rf1);
 FUNC_1(VAR_4, 2, VAR_5->rf2);
 FUNC_1(VAR_4, 3, VAR_5->rf3);




 if (FUNC_2(VAR_4, VAR_2))
  return;






 FUNC_1(VAR_4, 1, VAR_5->rf1);
 FUNC_1(VAR_4, 2, 0x000c2a32);
 FUNC_1(VAR_4, 3, VAR_5->rf3);

 FUNC_0(1);

 FUNC_1(VAR_4, 1, VAR_5->rf1);
 FUNC_1(VAR_4, 2, VAR_5->rf2);
 FUNC_1(VAR_4, 3, VAR_5->rf3);

 FUNC_0(1);




 FUNC_3(&VAR_5->rf1, VAR_1, 0);
 FUNC_3(&VAR_5->rf3, VAR_3, 0);

 FUNC_1(VAR_4, 1, VAR_5->rf1);
 FUNC_1(VAR_4, 3, VAR_5->rf3);




 VAR_5->rf1 = FUNC_4(VAR_4, VAR_0);
}
