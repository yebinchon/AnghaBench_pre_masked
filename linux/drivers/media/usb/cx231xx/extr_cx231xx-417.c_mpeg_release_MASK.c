
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct file {struct cx231xx_fh* private_data; } ;
struct TYPE_4__ {scalar_t__ reading; scalar_t__ streaming; } ;
struct cx231xx_fh {int fh; TYPE_1__ vidq; int v4l_reading; struct cx231xx* dev; } ;
struct cx231xx {int lock; int v4l_reader_count; scalar_t__ USE_ISO; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *,int,int ) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (struct cx231xx*) ;
 int FUNC_3 (struct cx231xx*,int ,int,int ,int ,int ,int ) ;
 int FUNC_4 (struct cx231xx*,int ) ;
 int FUNC_5 (struct cx231xx*) ;
 int FUNC_6 (struct cx231xx*) ;
 int FUNC_7 (struct cx231xx*) ;
 int FUNC_8 (int,char*,struct cx231xx*) ;
 int FUNC_9 (struct cx231xx_fh*) ;
 int FUNC_10 (int) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (TYPE_1__*) ;
 int FUNC_16 (TYPE_1__*) ;
 int FUNC_17 (TYPE_1__*) ;

__attribute__((used)) static int FUNC_18(struct file *VAR_5)
{
 struct cx231xx_fh *VAR_6 = VAR_5->private_data;
 struct cx231xx *VAR_7 = VAR_6->dev;

 FUNC_8(3, "mpeg_release()! dev=0x%p\n", VAR_7);

 FUNC_11(&VAR_7->lock);

 FUNC_5(VAR_7);


 if (VAR_7->USE_ISO)
  FUNC_7(VAR_7);
 else
  FUNC_6(VAR_7);
 FUNC_4(VAR_7, VAR_0);

 FUNC_3(VAR_6->dev, VAR_4, 3, 0,
   VAR_1, VAR_2,
   VAR_3);



 if (FUNC_0(&VAR_6->v4l_reading, 1, 0) == 1) {
  if (FUNC_1(&VAR_7->v4l_reader_count) == 0) {


   FUNC_10(500);
   FUNC_2(VAR_7);

  }
 }

 if (VAR_6->vidq.streaming)
  FUNC_17(&VAR_6->vidq);
 if (VAR_6->vidq.reading)
  FUNC_16(&VAR_6->vidq);

 FUNC_15(&VAR_6->vidq);
 FUNC_13(&VAR_6->fh);
 FUNC_14(&VAR_6->fh);
 FUNC_9(VAR_6);
 FUNC_12(&VAR_7->lock);
 return 0;
}
