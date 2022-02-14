
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct rpmsg_device {int dev; } ;
struct apr_rx_buf {int len; int node; int buf; } ;
struct apr {int rx_work; int rxwq; int rx_lock; int rx_list; int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,char*,void*,int) ;
 struct apr* FUNC_1 (int *) ;
 struct apr_rx_buf* FUNC_2 (int,int ) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (int ,void*,int) ;
 int FUNC_5 (int ,int *) ;
 int FUNC_6 (int *,unsigned long) ;
 int FUNC_7 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_8(struct rpmsg_device *VAR_4, void *VAR_5,
      int VAR_6, void *VAR_7, u32 VAR_8)
{
 struct apr *VAR_9 = FUNC_1(&VAR_4->dev);
 struct apr_rx_buf *VAR_10;
 unsigned long VAR_11;

 if (VAR_6 <= VAR_0) {
  FUNC_0(VAR_9->dev, "APR: Improper apr pkt received:%p %d\n",
   VAR_5, VAR_6);
  return -VAR_1;
 }

 VAR_10 = FUNC_2(sizeof(*VAR_10) + VAR_6, VAR_3);
 if (!VAR_10)
  return -VAR_2;

 VAR_10->len = VAR_6;
 FUNC_4(VAR_10->buf, VAR_5, VAR_6);

 FUNC_6(&VAR_9->rx_lock, VAR_11);
 FUNC_3(&VAR_10->node, &VAR_9->rx_list);
 FUNC_7(&VAR_9->rx_lock, VAR_11);

 FUNC_5(VAR_9->rxwq, &VAR_9->rx_work);

 return 0;
}
