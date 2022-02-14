
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct rt2x00_dev {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct rt2x00_dev*) ;
 int FUNC_1 (struct rt2x00_dev*,int) ;
 int FUNC_2 (struct rt2x00_dev*,int,int ) ;
 int FUNC_3 (struct rt2x00_dev*,int ) ;
 int FUNC_4 (struct rt2x00_dev*,int) ;
 int FUNC_5 (struct rt2x00_dev*,int,int ) ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (int *,int ,int) ;

__attribute__((used)) static void FUNC_8(struct rt2x00_dev *VAR_8)
{
 u8 VAR_9;
 u16 VAR_10;


 VAR_9 = FUNC_1(VAR_8, 138);
 VAR_10 = FUNC_3(VAR_8, VAR_2);
 if (FUNC_6(VAR_10, VAR_3) == 1)
  FUNC_7(&VAR_9, VAR_0, 0);
 if (FUNC_6(VAR_10, VAR_4) == 1)
  FUNC_7(&VAR_9, VAR_1, 1);
 FUNC_2(VAR_8, 138, VAR_9);

 VAR_9 = FUNC_4(VAR_8, 38);
 FUNC_7(&VAR_9, VAR_6, 0);
 FUNC_5(VAR_8, 38, VAR_9);

 VAR_9 = FUNC_4(VAR_8, 39);
 FUNC_7(&VAR_9, VAR_7, 0);
 FUNC_5(VAR_8, 39, VAR_9);

 FUNC_0(VAR_8);

 VAR_9 = FUNC_4(VAR_8, 30);
 FUNC_7(&VAR_9, VAR_5, 2);
 FUNC_5(VAR_8, 30, VAR_9);
}
