
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mbo {int hdm_channel_id; int ifp; } ;
struct comp_channel {int wq; int fifo; int unlink; int dev; int access_ref; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct comp_channel* FUNC_0 (int ,int ) ;
 int FUNC_1 (int *,struct mbo**,int) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static int FUNC_7(struct mbo *VAR_3)
{
 struct comp_channel *VAR_4;

 if (!VAR_3)
  return -VAR_0;

 VAR_4 = FUNC_0(VAR_3->ifp, VAR_3->hdm_channel_id);
 if (!VAR_4)
  return -VAR_2;

 FUNC_4(&VAR_4->unlink);
 if (!VAR_4->access_ref || !VAR_4->dev) {
  FUNC_5(&VAR_4->unlink);
  return -VAR_1;
 }
 FUNC_1(&VAR_4->fifo, &VAR_3, 1);
 FUNC_5(&VAR_4->unlink);




 FUNC_6(&VAR_4->wq);
 return 0;
}
