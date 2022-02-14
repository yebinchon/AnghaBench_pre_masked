
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct timer_list {int dummy; } ;
struct channel_info {int tsklet; scalar_t__ irec; } ;
struct TYPE_2__ {scalar_t__ expires; } ;
struct c8sectpfei {int tsin_count; TYPE_1__ timer; struct channel_info** channel_data; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*) ;
 struct c8sectpfei* VAR_2 ;
 struct c8sectpfei* FUNC_1 (int ,struct timer_list*,int ) ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (scalar_t__) ;
 int FUNC_4 (int *) ;
 int VAR_4 ;

__attribute__((used)) static void FUNC_5(struct timer_list *VAR_5)
{
 struct c8sectpfei *VAR_6 = FUNC_1(VAR_6, VAR_5, VAR_4);
 struct channel_info *VAR_7;
 int VAR_8;


 for (VAR_8 = 0; VAR_8 < VAR_6->tsin_count; VAR_8++) {
  VAR_7 = VAR_6->channel_data[VAR_8];


  if (VAR_7->irec && FUNC_3(VAR_7->irec + VAR_0))
   FUNC_4(&VAR_7->tsklet);
 }

 VAR_6->timer.expires = VAR_3 + FUNC_2(VAR_1);
 FUNC_0(&VAR_6->timer);
}
