
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u16 ;
struct nvme_queue {scalar_t__ cq_head; scalar_t__ last_cq_head; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct nvme_queue*,scalar_t__,scalar_t__) ;
 int FUNC_1 (struct nvme_queue*,scalar_t__*,scalar_t__*,int) ;
 int FUNC_2 () ;
 int FUNC_3 () ;

__attribute__((used)) static irqreturn_t FUNC_4(int VAR_2, void *VAR_3)
{
 struct nvme_queue *VAR_4 = VAR_3;
 irqreturn_t VAR_5 = VAR_1;
 u16 VAR_6, VAR_7;





 FUNC_2();
 if (VAR_4->cq_head != VAR_4->last_cq_head)
  VAR_5 = VAR_0;
 FUNC_1(VAR_4, &VAR_6, &VAR_7, -1);
 VAR_4->last_cq_head = VAR_4->cq_head;
 FUNC_3();

 if (VAR_6 != VAR_7) {
  FUNC_0(VAR_4, VAR_6, VAR_7);
  return VAR_0;
 }

 return VAR_5;
}
