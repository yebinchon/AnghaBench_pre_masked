
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int v4l2_std_id ;
struct file {int dummy; } ;
struct dvb_usb_device {struct cxusb_medion_dev* priv; } ;
struct cxusb_medion_dev {unsigned int input; int norm; TYPE_1__* videodev; int cx25840; } ;
struct TYPE_5__ {int std; } ;
struct TYPE_6__ {TYPE_2__ input; int inputcfg; } ;
struct TYPE_4__ {int tvnorms; } ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 TYPE_3__* VAR_2 ;
 int FUNC_0 (struct cxusb_medion_dev*,int) ;
 int VAR_3 ;
 int FUNC_1 (int ,int ,int ,int ,int ,int ) ;
 int VAR_4 ;
 struct dvb_usb_device* FUNC_2 (struct file*) ;

__attribute__((used)) static int FUNC_3(struct file *VAR_5, void *VAR_6,
    unsigned int VAR_7)
{
 struct dvb_usb_device *VAR_8 = FUNC_2(VAR_5);
 struct cxusb_medion_dev *VAR_9 = VAR_8->priv;
 int VAR_10;
 v4l2_std_id VAR_11;

 if (VAR_7 >= VAR_0)
  return -VAR_1;

 VAR_10 = FUNC_1(VAR_9->cx25840, VAR_4, VAR_3,
          VAR_2[VAR_7].inputcfg, 0, 0);
 if (VAR_10 != 0)
  return VAR_10;

 VAR_9->input = VAR_7;
 VAR_9->videodev->tvnorms = VAR_2[VAR_7].input.std;

 VAR_11 = VAR_9->norm & VAR_2[VAR_7].input.std;
 if (VAR_11 == 0)
  VAR_11 = VAR_2[VAR_7].input.std;

 FUNC_0(VAR_9, VAR_11);

 return 0;
}
