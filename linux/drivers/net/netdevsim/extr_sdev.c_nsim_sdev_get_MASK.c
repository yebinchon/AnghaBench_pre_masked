
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct netdevsim_shared_dev {int refcnt; int switch_id; int ddir; } ;
struct netdevsim {struct netdevsim_shared_dev* sdev; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct netdevsim_shared_dev* FUNC_0 (int) ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int) ;
 int FUNC_4 (char*,int ) ;
 int FUNC_5 (struct netdevsim_shared_dev*) ;
 struct netdevsim_shared_dev* FUNC_6 (int,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_7 (char*,char*,int) ;

struct netdevsim_shared_dev *FUNC_8(struct netdevsim *VAR_5)
{
 struct netdevsim_shared_dev *VAR_6;
 char VAR_7[10];
 int VAR_8;

 if (VAR_5) {
  if (FUNC_3(!VAR_5->sdev))
   return FUNC_0(-VAR_0);
  VAR_6 = VAR_5->sdev;
  VAR_6->refcnt++;
  return VAR_6;
 }

 VAR_6 = FUNC_6(sizeof(*VAR_6), VAR_2);
 if (!VAR_6)
  return FUNC_0(-VAR_1);
 VAR_6->refcnt = 1;
 VAR_6->switch_id = VAR_4++;

 FUNC_7(VAR_7, "%u", VAR_6->switch_id);
 VAR_6->ddir = FUNC_4(VAR_7, VAR_3);
 if (FUNC_1(VAR_6->ddir)) {
  VAR_8 = FUNC_2(VAR_6->ddir) ?: -VAR_0;
  goto err_sdev_free;
 }

 return VAR_6;

err_sdev_free:
 VAR_4--;
 FUNC_5(VAR_6);
 return FUNC_0(VAR_8);
}
