
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int complete; } ;
struct at86rf230_state_change {int free; int* buf; TYPE_1__ msg; } ;
struct at86rf230_local {int spi; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct at86rf230_local*,struct at86rf230_state_change*,int) ;
 int VAR_6 ;
 int FUNC_1 (struct at86rf230_local*,struct at86rf230_state_change*) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 struct at86rf230_state_change* FUNC_4 (int,int ) ;
 int FUNC_5 (int ,TYPE_1__*) ;

__attribute__((used)) static irqreturn_t FUNC_6(int VAR_7, void *VAR_8)
{
 struct at86rf230_local *VAR_9 = VAR_8;
 struct at86rf230_state_change *VAR_10;
 int VAR_11;

 FUNC_2(VAR_7);

 VAR_10 = FUNC_4(sizeof(*VAR_10), VAR_2);
 if (!VAR_10) {
  FUNC_3(VAR_7);
  return VAR_4;
 }

 FUNC_1(VAR_9, VAR_10);

 VAR_10->free = 1;

 VAR_10->buf[0] = (VAR_5 & VAR_1) | VAR_0;
 VAR_10->msg.complete = VAR_6;
 VAR_11 = FUNC_5(VAR_9->spi, &VAR_10->msg);
 if (VAR_11) {
  FUNC_0(VAR_9, VAR_10, VAR_11);
  FUNC_3(VAR_7);
  return VAR_4;
 }

 return VAR_3;
}
