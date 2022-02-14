
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct scif_hw_dev {int dummy; } ;
struct mic_device {TYPE_1__* ops; } ;
struct TYPE_2__ {int (* send_intr ) (struct mic_device*,int) ;} ;


 struct mic_device* FUNC_0 (struct scif_hw_dev*) ;
 int FUNC_1 (struct mic_device*,int) ;

__attribute__((used)) static void FUNC_2(struct scif_hw_dev *VAR_0, int VAR_1)
{
 struct mic_device *VAR_2 = FUNC_0(VAR_0);

 VAR_2->ops->send_intr(VAR_2, VAR_1);
}
