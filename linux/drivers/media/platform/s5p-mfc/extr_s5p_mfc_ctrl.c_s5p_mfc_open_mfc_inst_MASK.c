
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct s5p_mfc_dev {scalar_t__ type; int mfc_ops; int inst_no; } ;
struct s5p_mfc_ctx {scalar_t__ type; int mfc_ops; int inst_no; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int,char*,int ) ;
 int FUNC_1 (char*) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (int ,int ,struct s5p_mfc_dev*) ;
 scalar_t__ FUNC_3 (struct s5p_mfc_dev*,int ,int ) ;
 int FUNC_4 (struct s5p_mfc_dev*) ;
 int VAR_7 ;

int FUNC_5(struct s5p_mfc_dev *VAR_8, struct s5p_mfc_ctx *VAR_9)
{
 int VAR_10 = 0;

 VAR_10 = FUNC_2(VAR_8->mfc_ops, VAR_4, VAR_9);
 if (VAR_10) {
  FUNC_1("Failed allocating instance buffer\n");
  goto err;
 }

 if (VAR_9->type == VAR_1) {
  VAR_10 = FUNC_2(VAR_8->mfc_ops,
     VAR_3, VAR_9);
  if (VAR_10) {
   FUNC_1("Failed allocating temporary buffers\n");
   goto err_free_inst_buf;
  }
 }

 FUNC_4(VAR_9);
 FUNC_2(VAR_8->mfc_ops, VAR_7, VAR_8);
 if (FUNC_3(VAR_9,
  VAR_2, 0)) {

  FUNC_1("Error getting instance from hardware\n");
  VAR_10 = -VAR_0;
  goto err_free_desc_buf;
 }

 FUNC_0(2, "Got instance number: %d\n", VAR_9->inst_no);
 return VAR_10;

err_free_desc_buf:
 if (VAR_9->type == VAR_1)
  FUNC_2(VAR_8->mfc_ops, VAR_5, VAR_9);
err_free_inst_buf:
 FUNC_2(VAR_8->mfc_ops, VAR_6, VAR_9);
err:
 return VAR_10;
}
