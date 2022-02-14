
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct ispstat {int buf_size; struct isp_device* isp; TYPE_1__* active_buf; } ;
struct isp_device {int dev; } ;
struct TYPE_2__ {int * virt_addr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (struct ispstat*) ;
 int FUNC_2 (struct isp_device*,int ,int ,int ) ;
 void* FUNC_3 (struct isp_device*,int ,int ) ;
 int FUNC_4 (struct isp_device*,int ,int ,int ) ;
 int FUNC_5 (struct isp_device*,int ,int ,int ) ;

__attribute__((used)) static int FUNC_6(struct ispstat *VAR_7)
{
 struct isp_device *VAR_8 = VAR_7->isp;
 u32 *VAR_9 = VAR_7->active_buf->virt_addr;
 unsigned int VAR_10;

 if (!VAR_9) {
  FUNC_0(VAR_8->dev, "hist: invalid PIO buffer address\n");
  FUNC_1(VAR_7);
  return VAR_6;
 }

 FUNC_5(VAR_8, 0, VAR_4, VAR_0);






 FUNC_4(VAR_8, VAR_4, VAR_1, VAR_2);






 for (VAR_10 = VAR_7->buf_size / 16; VAR_10 > 0; VAR_10--) {
  *VAR_9++ = FUNC_3(VAR_8, VAR_4, VAR_3);
  *VAR_9++ = FUNC_3(VAR_8, VAR_4, VAR_3);
  *VAR_9++ = FUNC_3(VAR_8, VAR_4, VAR_3);
  *VAR_9++ = FUNC_3(VAR_8, VAR_4, VAR_3);
 }
 FUNC_2(VAR_7->isp, VAR_4, VAR_1,
      VAR_2);

 return VAR_5;
}
