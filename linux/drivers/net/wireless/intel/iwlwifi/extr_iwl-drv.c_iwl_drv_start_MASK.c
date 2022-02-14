
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iwl_trans {void* dbgfs_dir; int dev; } ;
struct iwl_drv {struct iwl_trans* trans; void* dbgfs_drv; int list; int request_firmware_complete; int dev; } ;


 int VAR_0 ;
 struct iwl_drv* FUNC_0 (int) ;
 int VAR_1 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct iwl_trans*,char*) ;
 void* FUNC_3 (char*,void*) ;
 int FUNC_4 (void*) ;
 char* FUNC_5 (int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (struct iwl_trans*) ;
 int FUNC_8 (int ,struct iwl_trans*) ;
 void* VAR_2 ;
 int FUNC_9 (struct iwl_drv*,int) ;
 int FUNC_10 (struct iwl_drv*) ;
 struct iwl_drv* FUNC_11 (int,int ) ;

struct iwl_drv *FUNC_12(struct iwl_trans *VAR_3)
{
 struct iwl_drv *VAR_4;
 int VAR_5;

 VAR_4 = FUNC_11(sizeof(*VAR_4), VAR_1);
 if (!VAR_4) {
  VAR_5 = -VAR_0;
  goto err;
 }

 VAR_4->trans = VAR_3;
 VAR_4->dev = VAR_3->dev;

 FUNC_6(&VAR_4->request_firmware_complete);
 FUNC_1(&VAR_4->list);

 FUNC_8(VAR_4->trans->dev, VAR_4->trans);
 VAR_5 = FUNC_9(VAR_4, 1);
 if (VAR_5) {
  FUNC_2(VAR_3, "Couldn't request the fw\n");
  goto err_fw;
 }

 return VAR_4;

err_fw:




 FUNC_10(VAR_4);
err:
 return FUNC_0(VAR_5);
}
