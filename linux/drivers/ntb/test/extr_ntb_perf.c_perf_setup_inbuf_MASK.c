
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct perf_peer {scalar_t__ inbuf_size; int inbuf_xlat; int gidx; int pidx; int inbuf; struct perf_ctx* perf; } ;
struct perf_ctx {TYPE_1__* ntb; int gidx; } ;
typedef scalar_t__ resource_size_t ;
struct TYPE_3__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,scalar_t__) ;
 int VAR_3 ;
 int FUNC_1 (int *,char*,...) ;
 int FUNC_2 (int *,scalar_t__,int *,int ) ;
 int FUNC_3 (TYPE_1__*,int ,int ,scalar_t__*,scalar_t__*,scalar_t__*) ;
 int FUNC_4 (TYPE_1__*,int ,int ,int ,scalar_t__) ;
 int FUNC_5 (struct perf_peer*,int ) ;
 int FUNC_6 (struct perf_peer*) ;
 scalar_t__ FUNC_7 (scalar_t__,scalar_t__) ;

__attribute__((used)) static int FUNC_8(struct perf_peer *VAR_4)
{
 resource_size_t VAR_5, VAR_6, VAR_7;
 struct perf_ctx *VAR_8 = VAR_4->perf;
 int VAR_9;


 VAR_9 = FUNC_3(VAR_8->ntb, VAR_4->pidx, VAR_8->gidx,
          &VAR_5, &VAR_6, &VAR_7);
 if (VAR_9) {
  FUNC_1(&VAR_8->ntb->dev, "Couldn't get inbuf restrictions\n");
  return VAR_9;
 }

 if (VAR_4->inbuf_size > VAR_7) {
  FUNC_1(&VAR_8->ntb->dev, "Too big inbuf size %pa > %pa\n",
   &VAR_4->inbuf_size, &VAR_7);
  return -VAR_0;
 }

 VAR_4->inbuf_size = FUNC_7(VAR_4->inbuf_size, VAR_6);

 FUNC_6(VAR_4);

 VAR_4->inbuf = FUNC_2(&VAR_8->ntb->dev, VAR_4->inbuf_size,
      &VAR_4->inbuf_xlat, VAR_2);
 if (!VAR_4->inbuf) {
  FUNC_1(&VAR_8->ntb->dev, "Failed to alloc inbuf of %pa\n",
   &VAR_4->inbuf_size);
  return -VAR_1;
 }
 if (!FUNC_0(VAR_4->inbuf_xlat, VAR_5)) {
  FUNC_1(&VAR_8->ntb->dev, "Unaligned inbuf allocated\n");
  goto err_free_inbuf;
 }

 VAR_9 = FUNC_4(VAR_8->ntb, VAR_4->pidx, VAR_4->gidx,
          VAR_4->inbuf_xlat, VAR_4->inbuf_size);
 if (VAR_9) {
  FUNC_1(&VAR_8->ntb->dev, "Failed to set inbuf translation\n");
  goto err_free_inbuf;
 }






 (void)FUNC_5(VAR_4, VAR_3);

 return 0;

err_free_inbuf:
 FUNC_6(VAR_4);

 return VAR_9;
}
