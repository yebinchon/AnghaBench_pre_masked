
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int v4l2_std_id ;
struct file {struct cx231xx_fh* private_data; } ;
struct cx231xx_fh {struct cx231xx* dev; } ;
struct TYPE_4__ {int height; } ;
struct TYPE_5__ {int id; } ;
struct cx231xx {int norm; int mpeg_ctrl_handler; TYPE_1__ ts1; TYPE_2__ encodernorm; } ;


 unsigned int FUNC_0 (TYPE_2__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct cx231xx*,int ,int ,int ) ;
 int FUNC_2 (struct cx231xx*) ;
 TYPE_2__* VAR_3 ;
 int FUNC_3 (int *,int) ;
 int FUNC_4 (int,char*,...) ;
 int VAR_4 ;
 int VAR_5 ;

__attribute__((used)) static int FUNC_5(struct file *VAR_6, void *VAR_7, v4l2_std_id VAR_8)
{
 struct cx231xx_fh *VAR_9 = VAR_6->private_data;
 struct cx231xx *VAR_10 = VAR_9->dev;
 unsigned int VAR_11;

 for (VAR_11 = 0; VAR_11 < FUNC_0(VAR_3); VAR_11++)
  if (VAR_8 & VAR_3[VAR_11].id)
   break;
 if (VAR_11 == FUNC_0(VAR_3))
  return -VAR_0;
 VAR_10->encodernorm = VAR_3[VAR_11];

 if (VAR_10->encodernorm.id & 0xb000) {
  FUNC_4(3, "encodernorm set to NTSC\n");
  VAR_10->norm = VAR_1;
  VAR_10->ts1.height = 480;
  FUNC_3(&VAR_10->mpeg_ctrl_handler, 0);
 } else {
  FUNC_4(3, "encodernorm set to PAL\n");
  VAR_10->norm = VAR_2;
  VAR_10->ts1.height = 576;
  FUNC_3(&VAR_10->mpeg_ctrl_handler, 1);
 }
 FUNC_1(VAR_10, VAR_5, VAR_4, VAR_10->norm);

 FUNC_2(VAR_10);

 FUNC_4(3, "exit vidioc_s_std() i=0x%x\n", VAR_11);
 return 0;
}
