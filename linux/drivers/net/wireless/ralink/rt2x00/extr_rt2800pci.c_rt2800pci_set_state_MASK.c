
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rt2x00_dev {int dummy; } ;
typedef enum dev_state { ____Placeholder_dev_state } dev_state ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct rt2x00_dev*,int ,int ,int,int) ;
 int FUNC_1 (struct rt2x00_dev*,int ) ;
 int FUNC_2 (struct rt2x00_dev*,int ,int) ;

__attribute__((used)) static int FUNC_3(struct rt2x00_dev *VAR_8,
          enum dev_state VAR_9)
{
 if (VAR_9 == VAR_4) {
  FUNC_0(VAR_8, VAR_3, VAR_7,
       0, 0x02);
  FUNC_1(VAR_8, VAR_7);
 } else if (VAR_9 == VAR_5) {
  FUNC_2(VAR_8, VAR_1,
       0xffffffff);
  FUNC_2(VAR_8, VAR_0,
       0xffffffff);
  FUNC_0(VAR_8, VAR_2, VAR_6,
       0xff, 0x01);
 }

 return 0;
}
