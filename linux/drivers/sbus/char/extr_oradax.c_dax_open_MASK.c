
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int dummy; } ;
struct file {struct dax_ctx* private_data; } ;
struct dax_ctx {struct dax_ctx* ccb_buf; int owner; void* ca_buf_ra; struct dax_ctx* ca_buf; int status; void* ccb_buf_ra; } ;
struct dax_ccb {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (char*,void*,void*,...) ;
 struct dax_ctx* FUNC_1 (int ,int,int ) ;
 int FUNC_2 (struct dax_ctx*) ;
 void* FUNC_3 (int,int ) ;
 void* FUNC_4 (struct dax_ctx*) ;

__attribute__((used)) static int FUNC_5(struct inode *VAR_7, struct file *VAR_8)
{
 struct dax_ctx *VAR_9 = ((void*)0);
 int VAR_10;

 VAR_9 = FUNC_3(sizeof(*VAR_9), VAR_5);
 if (VAR_9 == ((void*)0))
  goto done;

 VAR_9->ccb_buf = FUNC_1(VAR_2, sizeof(struct dax_ccb),
          VAR_5);
 if (VAR_9->ccb_buf == ((void*)0))
  goto done;

 VAR_9->ccb_buf_ra = FUNC_4(VAR_9->ccb_buf);
 FUNC_0("ctx->ccb_buf=0x%p, ccb_buf_ra=0x%llx",
  (void *)VAR_9->ccb_buf, VAR_9->ccb_buf_ra);


 VAR_9->ca_buf = FUNC_3(VAR_3, VAR_5);
 if (VAR_9->ca_buf == ((void*)0))
  goto alloc_error;
 for (VAR_10 = 0; VAR_10 < VAR_1; VAR_10++)
  VAR_9->ca_buf[VAR_10].status = VAR_0;

 VAR_9->ca_buf_ra = FUNC_4(VAR_9->ca_buf);
 FUNC_0("ctx=0x%p, ctx->ca_buf=0x%p, ca_buf_ra=0x%llx",
  (void *)VAR_9, (void *)VAR_9->ca_buf, VAR_9->ca_buf_ra);

 VAR_9->owner = VAR_6;
 VAR_8->private_data = VAR_9;
 return 0;

alloc_error:
 FUNC_2(VAR_9->ccb_buf);
done:
 FUNC_2(VAR_9);
 return -VAR_4;
}
