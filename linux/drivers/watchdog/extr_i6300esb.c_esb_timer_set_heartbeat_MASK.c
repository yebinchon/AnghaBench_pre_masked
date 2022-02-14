
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int u32 ;
struct watchdog_device {unsigned int timeout; } ;
struct esb_dev {int dummy; } ;


 int FUNC_0 (struct esb_dev*) ;
 int FUNC_1 (struct esb_dev*) ;
 int FUNC_2 (struct esb_dev*) ;
 int VAR_0 ;
 int FUNC_3 (struct esb_dev*) ;
 struct esb_dev* FUNC_4 (struct watchdog_device*) ;
 int FUNC_5 (unsigned int,int ) ;
 int FUNC_6 (int ,int ) ;

__attribute__((used)) static int FUNC_7(struct watchdog_device *VAR_1,
  unsigned int VAR_2)
{
 struct esb_dev *VAR_3 = FUNC_4(VAR_1);
 u32 VAR_4;





 VAR_4 = VAR_2 << 9;


 FUNC_3(VAR_3);
 FUNC_5(VAR_4, FUNC_1(VAR_3));


 FUNC_3(VAR_3);
 FUNC_5(VAR_4, FUNC_2(VAR_3));


 FUNC_3(VAR_3);
 FUNC_6(VAR_0, FUNC_0(VAR_3));




 VAR_1->timeout = VAR_2;
 return 0;
}
