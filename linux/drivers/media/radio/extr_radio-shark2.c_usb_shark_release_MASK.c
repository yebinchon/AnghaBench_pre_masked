
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_device {int dummy; } ;
struct shark_device {struct shark_device* transfer_buffer; int v4l2_dev; } ;


 int FUNC_0 (struct shark_device*) ;
 struct shark_device* FUNC_1 (struct v4l2_device*) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(struct v4l2_device *VAR_0)
{
 struct shark_device *VAR_1 = FUNC_1(VAR_0);

 FUNC_2(&VAR_1->v4l2_dev);
 FUNC_0(VAR_1->transfer_buffer);
 FUNC_0(VAR_1);
}
