
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rx_agg {int page; int info_list; int list; struct r8152* context; int urb; int buffer; } ;
struct r8152 {int rx_count; int rx_lock; int rx_info; int rx_buf_sz; struct net_device* netdev; } ;
struct TYPE_2__ {scalar_t__ parent; } ;
struct net_device {TYPE_1__ dev; } ;
typedef int gfp_t ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int FUNC_1 (int ,unsigned int) ;
 int FUNC_2 (int,unsigned int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (scalar_t__) ;
 unsigned int FUNC_5 (int ) ;
 int FUNC_6 (struct rx_agg*) ;
 struct rx_agg* FUNC_7 (int,int,int) ;
 int FUNC_8 (int *,int *) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int *,unsigned long) ;
 int FUNC_11 (int *,unsigned long) ;
 int FUNC_12 (int ,int) ;

__attribute__((used)) static struct rx_agg *FUNC_13(struct r8152 *VAR_1, gfp_t VAR_2)
{
 struct net_device *VAR_3 = VAR_1->netdev;
 int VAR_4 = VAR_3->dev.parent ? FUNC_4(VAR_3->dev.parent) : -1;
 unsigned int VAR_5 = FUNC_5(VAR_1->rx_buf_sz);
 struct rx_agg *VAR_6;
 unsigned long VAR_7;

 VAR_6 = FUNC_7(sizeof(*VAR_6), VAR_2, VAR_4);
 if (!VAR_6)
  return ((void*)0);

 VAR_6->page = FUNC_2(VAR_2 | VAR_0, VAR_5);
 if (!VAR_6->page)
  goto free_rx;

 VAR_6->buffer = FUNC_9(VAR_6->page);

 VAR_6->urb = FUNC_12(0, VAR_2);
 if (!VAR_6->urb)
  goto free_buf;

 VAR_6->context = VAR_1;

 FUNC_0(&VAR_6->list);
 FUNC_0(&VAR_6->info_list);
 FUNC_10(&VAR_1->rx_lock, VAR_7);
 FUNC_8(&VAR_6->info_list, &VAR_1->rx_info);
 FUNC_11(&VAR_1->rx_lock, VAR_7);

 FUNC_3(&VAR_1->rx_count);

 return VAR_6;

free_buf:
 FUNC_1(VAR_6->page, VAR_5);
free_rx:
 FUNC_6(VAR_6);
 return ((void*)0);
}
