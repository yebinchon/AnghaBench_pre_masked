
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vb2_queue {int dummy; } ;
struct TYPE_2__ {int sizeimage; } ;
struct rvin_dev {int scratch_phys; int scratch; TYPE_1__ format; int dev; int qlock; scalar_t__ sequence; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ,int *,int ) ;
 int FUNC_1 (int ,int ,int ,int ) ;
 int FUNC_2 (struct rvin_dev*,int ) ;
 int FUNC_3 (struct rvin_dev*) ;
 int FUNC_4 (struct rvin_dev*,int) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int *,unsigned long) ;
 struct rvin_dev* FUNC_7 (struct vb2_queue*) ;
 int FUNC_8 (struct rvin_dev*,char*) ;

__attribute__((used)) static int FUNC_9(struct vb2_queue *VAR_3, unsigned int VAR_4)
{
 struct rvin_dev *VAR_5 = FUNC_7(VAR_3);
 unsigned long VAR_6;
 int VAR_7;


 VAR_5->scratch = FUNC_0(VAR_5->dev, VAR_5->format.sizeimage,
       &VAR_5->scratch_phys, VAR_1);
 if (!VAR_5->scratch) {
  FUNC_5(&VAR_5->qlock, VAR_6);
  FUNC_2(VAR_5, VAR_2);
  FUNC_6(&VAR_5->qlock, VAR_6);
  FUNC_8(VAR_5, "Failed to allocate scratch buffer\n");
  return -VAR_0;
 }

 VAR_7 = FUNC_4(VAR_5, 1);
 if (VAR_7) {
  FUNC_5(&VAR_5->qlock, VAR_6);
  FUNC_2(VAR_5, VAR_2);
  FUNC_6(&VAR_5->qlock, VAR_6);
  goto out;
 }

 FUNC_5(&VAR_5->qlock, VAR_6);

 VAR_5->sequence = 0;

 VAR_7 = FUNC_3(VAR_5);
 if (VAR_7) {
  FUNC_2(VAR_5, VAR_2);
  FUNC_4(VAR_5, 0);
 }

 FUNC_6(&VAR_5->qlock, VAR_6);
out:
 if (VAR_7)
  FUNC_1(VAR_5->dev, VAR_5->format.sizeimage, VAR_5->scratch,
      VAR_5->scratch_phys);

 return VAR_7;
}
