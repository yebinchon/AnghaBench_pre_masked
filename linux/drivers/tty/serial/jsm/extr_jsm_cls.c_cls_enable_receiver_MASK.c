
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct jsm_channel {TYPE_1__* ch_cls_uart; } ;
struct TYPE_2__ {int ier; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ,int *) ;

__attribute__((used)) static void FUNC_2(struct jsm_channel *VAR_1)
{
 u8 VAR_2 = FUNC_0(&VAR_1->ch_cls_uart->ier);

 VAR_2 |= (VAR_0);
 FUNC_1(VAR_2, &VAR_1->ch_cls_uart->ier);
}
