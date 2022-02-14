
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_device {int dummy; } ;
struct dsbr100_device {struct dsbr100_device* transfer_buffer; int v4l2_dev; int hdl; } ;


 int FUNC_0 (struct dsbr100_device*) ;
 int FUNC_1 (int *) ;
 struct dsbr100_device* FUNC_2 (struct v4l2_device*) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4(struct v4l2_device *VAR_0)
{
 struct dsbr100_device *VAR_1 = FUNC_2(VAR_0);

 FUNC_1(&VAR_1->hdl);
 FUNC_3(&VAR_1->v4l2_dev);
 FUNC_0(VAR_1->transfer_buffer);
 FUNC_0(VAR_1);
}
