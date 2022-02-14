
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct virtqueue {TYPE_1__* vdev; } ;
struct virtproc_info {int rvq; } ;
struct rpmsg_hdr {int dummy; } ;
struct device {int dummy; } ;
struct TYPE_2__ {struct device dev; struct virtproc_info* priv; } ;


 int FUNC_0 (struct device*,char*,unsigned int) ;
 int FUNC_1 (struct device*,char*) ;
 int FUNC_2 (struct virtproc_info*,struct device*,struct rpmsg_hdr*,unsigned int) ;
 struct rpmsg_hdr* FUNC_3 (struct virtqueue*,unsigned int*) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static void FUNC_5(struct virtqueue *VAR_0)
{
 struct virtproc_info *VAR_1 = VAR_0->vdev->priv;
 struct device *VAR_2 = &VAR_0->vdev->dev;
 struct rpmsg_hdr *VAR_3;
 unsigned int VAR_4, VAR_5 = 0;
 int VAR_6;

 VAR_3 = FUNC_3(VAR_0, &VAR_4);
 if (!VAR_3) {
  FUNC_1(VAR_2, "uhm, incoming signal, but no used buffer ?\n");
  return;
 }

 while (VAR_3) {
  VAR_6 = FUNC_2(VAR_1, VAR_2, VAR_3, VAR_4);
  if (VAR_6)
   break;

  VAR_5++;

  VAR_3 = FUNC_3(VAR_0, &VAR_4);
 }

 FUNC_0(VAR_2, "Received %u messages\n", VAR_5);


 if (VAR_5)
  FUNC_4(VAR_1->rvq);
}
