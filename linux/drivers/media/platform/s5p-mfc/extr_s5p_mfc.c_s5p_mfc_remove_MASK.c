
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct s5p_mfc_dev {int v4l2_dev; int vfd_dec; int vfd_enc; int watchdog_work; int watchdog_timer; int mfc_mutex; struct s5p_mfc_ctx** ctx; } ;
struct s5p_mfc_ctx {int * dev; } ;
struct platform_device {int name; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 struct s5p_mfc_dev* FUNC_4 (struct platform_device*) ;
 int FUNC_5 (struct s5p_mfc_dev*) ;
 int FUNC_6 (struct s5p_mfc_dev*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *,char*,int ) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int ) ;

__attribute__((used)) static int FUNC_11(struct platform_device *VAR_1)
{
 struct s5p_mfc_dev *VAR_2 = FUNC_4(VAR_1);
 struct s5p_mfc_ctx *VAR_3;
 int VAR_4;

 FUNC_8(&VAR_2->v4l2_dev, "Removing %s\n", VAR_1->name);






 FUNC_2(&VAR_2->mfc_mutex);
 for (VAR_4 = 0; VAR_4 < VAR_0; VAR_4++) {
  VAR_3 = VAR_2->ctx[VAR_4];
  if (!VAR_3)
   continue;

  VAR_3->dev = ((void*)0);
 }
 FUNC_3(&VAR_2->mfc_mutex);

 FUNC_0(&VAR_2->watchdog_timer);
 FUNC_1(&VAR_2->watchdog_work);

 FUNC_10(VAR_2->vfd_enc);
 FUNC_10(VAR_2->vfd_dec);
 FUNC_9(VAR_2->vfd_enc);
 FUNC_9(VAR_2->vfd_dec);
 FUNC_7(&VAR_2->v4l2_dev);
 FUNC_6(VAR_2);

 FUNC_5(VAR_2);
 return 0;
}
