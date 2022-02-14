
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rx_cxt {int rx_free_list; int free_list_lock; int submit_list_lock; int to_host_lock; int rx_submit_list; int to_host_list; } ;
struct mux_rx {int free_list; } ;
struct mux_dev {int work_rx; int write_lock; struct rx_cxt rx; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *) ;
 int VAR_1 ;
 struct mux_rx* FUNC_2 () ;
 int VAR_2 ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static int FUNC_5(struct mux_dev *VAR_3)
{
 struct mux_rx *VAR_4;
 struct rx_cxt *VAR_5 = &VAR_3->rx;
 int VAR_6 = 0;
 int VAR_7;

 FUNC_4(&VAR_3->write_lock);
 FUNC_1(&VAR_5->to_host_list);
 FUNC_1(&VAR_5->rx_submit_list);
 FUNC_1(&VAR_5->rx_free_list);
 FUNC_4(&VAR_5->to_host_lock);
 FUNC_4(&VAR_5->submit_list_lock);
 FUNC_4(&VAR_5->free_list_lock);

 for (VAR_7 = 0; VAR_7 < VAR_1 * 2; VAR_7++) {
  VAR_4 = FUNC_2();
  if (!VAR_4) {
   VAR_6 = -VAR_0;
   break;
  }

  FUNC_3(&VAR_4->free_list, &VAR_5->rx_free_list);
 }

 FUNC_0(&VAR_3->work_rx, VAR_2);

 return VAR_6;
}
