
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timer_list {int dummy; } ;
struct slgt_info {int task; int lock; int pending_bh; int device_name; } ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int *) ;
 struct slgt_info* FUNC_2 (int ,struct timer_list*,int ) ;
 struct slgt_info* VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_5(struct timer_list *VAR_3)
{
 struct slgt_info *VAR_4 = FUNC_2(VAR_4, VAR_3, VAR_2);
 unsigned long VAR_5;

 FUNC_0(("%s rx_timeout\n", VAR_4->device_name));
 FUNC_3(&VAR_4->lock, VAR_5);
 VAR_4->pending_bh |= VAR_0;
 FUNC_4(&VAR_4->lock, VAR_5);
 FUNC_1(&VAR_4->task);
}
