
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct jsm_channel {int ch_flags; TYPE_1__* ch_cls_uart; } ;
struct TYPE_2__ {int lsr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;

__attribute__((used)) static u32 FUNC_1(struct jsm_channel *VAR_3)
{
 u8 VAR_4 = 0;
 u8 VAR_5 = FUNC_0(&VAR_3->ch_cls_uart->lsr);


 if (!(VAR_5 & VAR_2))
  VAR_4 = 1;
 else {
  VAR_3->ch_flags |= (VAR_0 | VAR_1);
  VAR_4 = 0;
 }

 return VAR_4;
}
