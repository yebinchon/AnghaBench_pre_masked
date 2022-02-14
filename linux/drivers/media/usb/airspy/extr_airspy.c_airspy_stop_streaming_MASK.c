
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vb2_queue {int dummy; } ;
struct airspy {int v4l2_lock; int flags; int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct airspy*) ;
 int FUNC_1 (struct airspy*,int ,int ,int ,int *,int ) ;
 int FUNC_2 (struct airspy*) ;
 int FUNC_3 (struct airspy*) ;
 int FUNC_4 (struct airspy*) ;
 int FUNC_5 (int ,int *) ;
 int FUNC_6 (int ,char*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 struct airspy* FUNC_9 (struct vb2_queue*) ;

__attribute__((used)) static void FUNC_10(struct vb2_queue *VAR_2)
{
 struct airspy *VAR_3 = FUNC_9(VAR_2);

 FUNC_6(VAR_3->dev, "\n");

 FUNC_7(&VAR_3->v4l2_lock);


 FUNC_1(VAR_3, VAR_0, 0, 0, ((void*)0), 0);

 FUNC_4(VAR_3);
 FUNC_3(VAR_3);
 FUNC_2(VAR_3);

 FUNC_0(VAR_3);

 FUNC_5(VAR_1, &VAR_3->flags);

 FUNC_8(&VAR_3->v4l2_lock);
}
