
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vb2_queue {int dummy; } ;
struct TYPE_2__ {int sizeimage; } ;
struct rvin_dev {scalar_t__ state; int scratch_phys; int scratch; TYPE_1__ format; int dev; int qlock; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,int ,int ,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct rvin_dev*,int ) ;
 int FUNC_3 (struct rvin_dev*) ;
 int FUNC_4 (struct rvin_dev*) ;
 int FUNC_5 (struct rvin_dev*) ;
 int FUNC_6 (struct rvin_dev*,int ) ;
 int FUNC_7 (int *,unsigned long) ;
 int FUNC_8 (int *,unsigned long) ;
 struct rvin_dev* FUNC_9 (struct vb2_queue*) ;
 int FUNC_10 (struct rvin_dev*,char*) ;

__attribute__((used)) static void FUNC_11(struct vb2_queue *VAR_5)
{
 struct rvin_dev *VAR_6 = FUNC_9(VAR_5);
 unsigned long VAR_7;
 int VAR_8 = 0;

 FUNC_7(&VAR_6->qlock, VAR_7);

 VAR_6->state = VAR_3;


 while (VAR_8++ < VAR_0) {

  FUNC_4(VAR_6);


  if (!FUNC_3(VAR_6)) {
   VAR_6->state = VAR_2;
   break;
  }

  FUNC_8(&VAR_6->qlock, VAR_7);
  FUNC_1(VAR_1);
  FUNC_7(&VAR_6->qlock, VAR_7);
 }

 if (VAR_6->state != VAR_2) {





  FUNC_10(VAR_6, "Failed stop HW, something is seriously broken\n");
  VAR_6->state = VAR_2;
 }


 FUNC_2(VAR_6, VAR_4);

 FUNC_8(&VAR_6->qlock, VAR_7);

 FUNC_6(VAR_6, 0);


 FUNC_5(VAR_6);


 FUNC_0(VAR_6->dev, VAR_6->format.sizeimage, VAR_6->scratch,
     VAR_6->scratch_phys);
}
