
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scif_dev {int lock; int peer_add_work; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct scif_dev*) ;

void FUNC_4(struct scif_dev *VAR_0)
{
 int VAR_1;

 FUNC_0(&VAR_0->lock);
 VAR_1 = FUNC_3(VAR_0);
 if (VAR_1)
  goto exit;
 FUNC_2(&VAR_0->peer_add_work);
exit:
 FUNC_1(&VAR_0->lock);
}
