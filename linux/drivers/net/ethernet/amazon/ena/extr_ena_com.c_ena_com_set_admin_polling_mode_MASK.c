
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int polling; } ;
struct ena_com_dev {TYPE_1__ admin_queue; scalar_t__ reg_bar; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ,scalar_t__) ;

void FUNC_1(struct ena_com_dev *VAR_2, bool VAR_3)
{
 u32 VAR_4 = 0;

 if (VAR_3)
  VAR_4 = VAR_0;

 FUNC_0(VAR_4, VAR_2->reg_bar + VAR_1);
 VAR_2->admin_queue.polling = VAR_3;
}
