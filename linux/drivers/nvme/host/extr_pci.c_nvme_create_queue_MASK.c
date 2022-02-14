
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct nvme_queue {int cq_vector; int flags; struct nvme_dev* dev; } ;
struct nvme_dev {int num_vecs; int online_queues; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct nvme_dev*,int,struct nvme_queue*,int) ;
 int FUNC_1 (struct nvme_dev*,int,struct nvme_queue*) ;
 int FUNC_2 (struct nvme_dev*,int) ;
 int FUNC_3 (struct nvme_dev*,int) ;
 int FUNC_4 (int ,int *) ;
 int FUNC_5 (struct nvme_queue*,int) ;
 int FUNC_6 (struct nvme_queue*) ;
 int FUNC_7 (int ,int *) ;

__attribute__((used)) static int FUNC_8(struct nvme_queue *VAR_3, int VAR_4, bool VAR_5)
{
 struct nvme_dev *VAR_6 = VAR_3->dev;
 int VAR_7;
 u16 VAR_8 = 0;

 FUNC_4(VAR_0, &VAR_3->flags);





 if (!VAR_5)
  VAR_8 = VAR_6->num_vecs == 1 ? 0 : VAR_4;
 else
  FUNC_7(VAR_2, &VAR_3->flags);

 VAR_7 = FUNC_0(VAR_6, VAR_4, VAR_3, VAR_8);
 if (VAR_7)
  return VAR_7;

 VAR_7 = FUNC_1(VAR_6, VAR_4, VAR_3);
 if (VAR_7 < 0)
  return VAR_7;
 else if (VAR_7)
  goto release_cq;

 VAR_3->cq_vector = VAR_8;
 FUNC_5(VAR_3, VAR_4);

 if (!VAR_5) {
  VAR_7 = FUNC_6(VAR_3);
  if (VAR_7 < 0)
   goto release_sq;
 }

 FUNC_7(VAR_1, &VAR_3->flags);
 return VAR_7;

release_sq:
 VAR_6->online_queues--;
 FUNC_3(VAR_6, VAR_4);
release_cq:
 FUNC_2(VAR_6, VAR_4);
 return VAR_7;
}
