
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timer_list {int dummy; } ;
struct msb_data {int need_flush_cache; int io_work; int io_queue; } ;


 int VAR_0 ;
 struct msb_data* FUNC_0 (int ,struct timer_list*,int ) ;
 struct msb_data* VAR_1 ;
 int FUNC_1 (int ,int *) ;

__attribute__((used)) static void FUNC_2(struct timer_list *VAR_2)
{
 struct msb_data *VAR_3 = FUNC_0(VAR_3, VAR_2, VAR_0);
 VAR_3->need_flush_cache = 1;
 FUNC_1(VAR_3->io_queue, &VAR_3->io_work);
}
