
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct rpmsg_device {int dev; } ;
struct fastrpc_invoke_rsp {int ctx; int retval; } ;
struct fastrpc_invoke_ctx {int put_work; int work; int retval; } ;
struct fastrpc_channel_ctx {int lock; int ctx_idr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,char*) ;
 struct fastrpc_channel_ctx* FUNC_2 (int *) ;
 struct fastrpc_invoke_ctx* FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_7(struct rpmsg_device *VAR_3, void *VAR_4,
      int VAR_5, void *VAR_6, u32 VAR_7)
{
 struct fastrpc_channel_ctx *VAR_8 = FUNC_2(&VAR_3->dev);
 struct fastrpc_invoke_rsp *VAR_9 = VAR_4;
 struct fastrpc_invoke_ctx *VAR_10;
 unsigned long VAR_11;
 unsigned long VAR_12;

 if (VAR_5 < sizeof(*VAR_9))
  return -VAR_0;

 VAR_12 = ((VAR_9->ctx & VAR_2) >> 4);

 FUNC_5(&VAR_8->lock, VAR_11);
 VAR_10 = FUNC_3(&VAR_8->ctx_idr, VAR_12);
 FUNC_6(&VAR_8->lock, VAR_11);

 if (!VAR_10) {
  FUNC_1(&VAR_3->dev, "No context ID matches response\n");
  return -VAR_1;
 }

 VAR_10->retval = VAR_9->retval;
 FUNC_0(&VAR_10->work);






 FUNC_4(&VAR_10->put_work);

 return 0;
}
