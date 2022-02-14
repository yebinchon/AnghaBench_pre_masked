
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_2__ {void (* complete ) (void*) ;} ;
struct at86rf230_state_change {int* buf; TYPE_1__ msg; } ;
struct at86rf230_local {int spi; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct at86rf230_local*,struct at86rf230_state_change*,int) ;
 int FUNC_1 (int ,TYPE_1__*) ;

__attribute__((used)) static void
FUNC_2(struct at86rf230_local *VAR_2, u8 VAR_3,
    struct at86rf230_state_change *VAR_4,
    void (*VAR_5)(void *VAR_6))
{
 int VAR_7;

 u8 *VAR_8 = VAR_4->buf;

 VAR_8[0] = (VAR_3 & VAR_1) | VAR_0;
 VAR_4->msg.complete = VAR_5;
 VAR_7 = FUNC_1(VAR_2->spi, &VAR_4->msg);
 if (VAR_7)
  FUNC_0(VAR_2, VAR_4, VAR_7);
}
