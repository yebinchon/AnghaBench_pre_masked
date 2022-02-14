
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct jsm_channel {int ch_flags; TYPE_1__* ch_cls_uart; } ;
struct TYPE_2__ {int lcr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int,int *) ;

__attribute__((used)) static void FUNC_2(struct jsm_channel *VAR_2)
{

 if (!(VAR_2->ch_flags & VAR_0)) {
  u8 VAR_3 = FUNC_0(&VAR_2->ch_cls_uart->lcr);

  FUNC_1((VAR_3 | VAR_1), &VAR_2->ch_cls_uart->lcr);
  VAR_2->ch_flags |= (VAR_0);
 }
}
