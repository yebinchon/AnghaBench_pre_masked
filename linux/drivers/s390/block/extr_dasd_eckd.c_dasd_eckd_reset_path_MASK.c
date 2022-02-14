
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dasd_eckd_private {scalar_t__ fcx_max_data; } ;
struct dasd_device {int cdev; struct dasd_eckd_private* private; } ;
typedef scalar_t__ __u8 ;


 int FUNC_0 (struct dasd_device*) ;
 int FUNC_1 (struct dasd_device*,int ) ;
 int FUNC_2 (struct dasd_device*) ;
 int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (struct dasd_device*) ;
 int FUNC_5 (int ,unsigned long) ;
 int FUNC_6 (int ,unsigned long) ;

__attribute__((used)) static void FUNC_7(struct dasd_device *VAR_0, __u8 VAR_1)
{
 struct dasd_eckd_private *VAR_2 = VAR_0->private;
 unsigned long VAR_3;

 if (!VAR_2->fcx_max_data)
  VAR_2->fcx_max_data = FUNC_4(VAR_0);
 FUNC_5(FUNC_3(VAR_0->cdev), VAR_3);
 FUNC_1(VAR_0, VAR_1 ? : FUNC_0(VAR_0));
 FUNC_2(VAR_0);
 FUNC_6(FUNC_3(VAR_0->cdev), VAR_3);
}
