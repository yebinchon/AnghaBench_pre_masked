
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uas_dev_info {int qdepth; int lock; scalar_t__* cmnd; } ;


 int FUNC_0 (int *,unsigned long) ;
 int FUNC_1 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_2(struct uas_dev_info *VAR_0)
{
 unsigned long VAR_1;
 int VAR_2, VAR_3 = 1;

 FUNC_0(&VAR_0->lock, VAR_1);

 for (VAR_2 = 0; VAR_2 < VAR_0->qdepth; VAR_2++) {
  if (VAR_0->cmnd[VAR_2]) {
   VAR_3 = 0;
   break;
  }
 }

 FUNC_1(&VAR_0->lock, VAR_1);

 return VAR_3;
}
