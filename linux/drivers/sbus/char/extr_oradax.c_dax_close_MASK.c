
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int dummy; } ;
struct file {int * private_data; } ;
struct dax_ctx {scalar_t__ status; int fail_count; int ccb_count; struct dax_ctx* ca_buf; struct dax_ctx* ccb_buf; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct dax_ctx*,int) ;
 int FUNC_1 (char*,int) ;
 int FUNC_2 (char*,int ,int ) ;
 int FUNC_3 (struct dax_ctx*,int,int) ;
 int FUNC_4 (struct dax_ctx*) ;

__attribute__((used)) static int FUNC_5(struct inode *VAR_2, struct file *VAR_3)
{
 struct dax_ctx *VAR_4 = (struct dax_ctx *)VAR_3->private_data;
 int VAR_5;

 VAR_3->private_data = ((void*)0);

 for (VAR_5 = 0; VAR_5 < VAR_1; VAR_5++) {
  if (VAR_4->ca_buf[VAR_5].status == VAR_0) {
   FUNC_1("CCB[%d] not completed", VAR_5);
   FUNC_0(VAR_4, VAR_5);
  }
  FUNC_3(VAR_4, VAR_5, 1);
 }

 FUNC_4(VAR_4->ccb_buf);
 FUNC_4(VAR_4->ca_buf);
 FUNC_2("CCBs: %d good, %d bad", VAR_4->ccb_count, VAR_4->fail_count);
 FUNC_4(VAR_4);

 return 0;
}
