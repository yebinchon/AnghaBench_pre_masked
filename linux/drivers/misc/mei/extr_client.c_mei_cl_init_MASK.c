
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mei_device {int dummy; } ;
struct mei_cl {struct mei_device* dev; int state; int writing_state; int link; int rd_pending; int rd_completed; int ev_wait; int tx_wait; int rx_wait; int wait; } ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct mei_cl*,int ,int) ;

__attribute__((used)) static void FUNC_3(struct mei_cl *VAR_2, struct mei_device *VAR_3)
{
 FUNC_2(VAR_2, 0, sizeof(struct mei_cl));
 FUNC_1(&VAR_2->wait);
 FUNC_1(&VAR_2->rx_wait);
 FUNC_1(&VAR_2->tx_wait);
 FUNC_1(&VAR_2->ev_wait);
 FUNC_0(&VAR_2->rd_completed);
 FUNC_0(&VAR_2->rd_pending);
 FUNC_0(&VAR_2->link);
 VAR_2->writing_state = VAR_1;
 VAR_2->state = VAR_0;
 VAR_2->dev = VAR_3;
}
