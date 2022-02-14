
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rvu {int dev; } ;
struct admin_queue {int lock; int res; int inst; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,struct admin_queue*) ;
 struct admin_queue* FUNC_1 (int ,int,int ) ;
 int FUNC_2 (int ,int *,int,int) ;
 int FUNC_3 (struct rvu*,struct admin_queue*) ;
 int FUNC_4 (int *) ;

int FUNC_5(struct rvu *VAR_2, struct admin_queue **VAR_3,
   int VAR_4, int VAR_5, int VAR_6)
{
 struct admin_queue *VAR_7;
 int VAR_8;

 *VAR_3 = FUNC_1(VAR_2->dev, sizeof(*VAR_7), VAR_1);
 if (!*VAR_3)
  return -VAR_0;
 VAR_7 = *VAR_3;


 VAR_8 = FUNC_2(VAR_2->dev, &VAR_7->inst, VAR_4, VAR_5);
 if (VAR_8) {
  FUNC_0(VAR_2->dev, VAR_7);
  return VAR_8;
 }


 VAR_8 = FUNC_2(VAR_2->dev, &VAR_7->res, VAR_4, VAR_6);
 if (VAR_8) {
  FUNC_3(VAR_2, VAR_7);
  return VAR_8;
 }

 FUNC_4(&VAR_7->lock);
 return 0;
}
