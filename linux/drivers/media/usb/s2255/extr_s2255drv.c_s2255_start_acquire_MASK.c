
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {TYPE_2__* frame; } ;
struct TYPE_5__ {int v4l2_dev; } ;
struct s2255_vc {size_t idx; int last_frame; TYPE_3__ buffer; scalar_t__ cur_frame; scalar_t__ bad_payload; TYPE_1__ vdev; } ;
struct s2255_dev {int cmdlock; TYPE_4__* udev; scalar_t__* cmdbuf; } ;
typedef scalar_t__ __le32 ;
struct TYPE_8__ {int dev; } ;
struct TYPE_6__ {scalar_t__ cur_size; scalar_t__ ulState; } ;


 scalar_t__ VAR_0 ;
 unsigned long* VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (unsigned long) ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (struct s2255_dev*,int,char*,size_t,int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (TYPE_4__*,unsigned char*,int) ;
 struct s2255_dev* FUNC_6 (int ) ;

__attribute__((used)) static int FUNC_7(struct s2255_vc *VAR_4)
{
 int VAR_5;
 unsigned long VAR_6;
 int VAR_7;
 struct s2255_dev *VAR_8 = FUNC_6(VAR_4->vdev.v4l2_dev);
 __le32 *VAR_9 = VAR_8->cmdbuf;

 FUNC_3(&VAR_8->cmdlock);
 VAR_6 = VAR_1[VAR_4->idx];
 VAR_4->last_frame = -1;
 VAR_4->bad_payload = 0;
 VAR_4->cur_frame = 0;
 for (VAR_7 = 0; VAR_7 < VAR_3; VAR_7++) {
  VAR_4->buffer.frame[VAR_7].ulState = 0;
  VAR_4->buffer.frame[VAR_7].cur_size = 0;
 }


 VAR_9[0] = VAR_2;
 VAR_9[1] = (__le32) FUNC_0(VAR_6);
 VAR_9[2] = VAR_0;
 VAR_5 = FUNC_5(VAR_8->udev, (unsigned char *)VAR_9, 512);
 if (VAR_5 != 0)
  FUNC_1(&VAR_8->udev->dev, "CMD_START error\n");

 FUNC_2(VAR_8, 2, "start acquire exit[%d] %d\n", VAR_4->idx, VAR_5);
 FUNC_4(&VAR_8->cmdlock);
 return VAR_5;
}
