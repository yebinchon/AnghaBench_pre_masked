
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u16 ;
struct nvme_queue {scalar_t__ q_depth; } ;


 int FUNC_0 (struct nvme_queue*,scalar_t__) ;

__attribute__((used)) static void FUNC_1(struct nvme_queue *VAR_0, u16 VAR_1, u16 VAR_2)
{
 while (VAR_1 != VAR_2) {
  FUNC_0(VAR_0, VAR_1);
  if (++VAR_1 == VAR_0->q_depth)
   VAR_1 = 0;
 }
}
