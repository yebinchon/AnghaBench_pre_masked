
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rt2x00_dev {int dummy; } ;
typedef enum dev_state { ____Placeholder_dev_state } dev_state ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct rt2x00_dev*) ;
 int FUNC_2 (struct rt2x00_dev*) ;
 int FUNC_3 (struct rt2x00_dev*,int) ;
 int FUNC_4 (struct rt2x00_dev*,char*,int,int) ;
 scalar_t__ FUNC_5 (int) ;

__attribute__((used)) static int FUNC_6(struct rt2x00_dev *VAR_1,
          enum dev_state VAR_2)
{
 int VAR_3 = 0;

 switch (VAR_2) {
 case 130:





  FUNC_3(VAR_1, 135);
  FUNC_0(1);
  VAR_3 = FUNC_2(VAR_1);
  break;
 case 131:




  FUNC_1(VAR_1);
  FUNC_3(VAR_1, 129);
  break;
 case 132:
 case 133:

  break;
 case 134:
 case 129:
 case 128:
 case 135:
  VAR_3 = FUNC_3(VAR_1, VAR_2);
  break;
 default:
  VAR_3 = -VAR_0;
  break;
 }

 if (FUNC_5(VAR_3))
  FUNC_4(VAR_1, "Device failed to enter state %d (%d)\n",
      VAR_2, VAR_3);

 return VAR_3;
}
