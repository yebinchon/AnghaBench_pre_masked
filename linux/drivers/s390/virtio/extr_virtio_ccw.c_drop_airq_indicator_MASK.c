
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void virtqueue ;
struct airq_info {int lock; int aiv; } ;


 unsigned long FUNC_0 (int ) ;
 int FUNC_1 (int ,unsigned long) ;
 scalar_t__ FUNC_2 (int ,unsigned long) ;
 int FUNC_3 (int ,unsigned long,int ) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_6(struct virtqueue *VAR_0, struct airq_info *VAR_1)
{
 unsigned long VAR_2, VAR_3;

 FUNC_4(&VAR_1->lock, VAR_3);
 for (VAR_2 = 0; VAR_2 < FUNC_0(VAR_1->aiv); VAR_2++) {
  if (VAR_0 == (void *)FUNC_2(VAR_1->aiv, VAR_2)) {
   FUNC_1(VAR_1->aiv, VAR_2);
   FUNC_3(VAR_1->aiv, VAR_2, 0);
   break;
  }
 }
 FUNC_5(&VAR_1->lock, VAR_3);
}
