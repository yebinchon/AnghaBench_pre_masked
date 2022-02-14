
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mbo {int dummy; } ;
struct kfifo {int dummy; } ;
struct comp_channel {int channel_id; int iface; int fifo; } ;
struct TYPE_2__ {int cc; } ;


 TYPE_1__ VAR_0 ;
 scalar_t__ FUNC_0 (struct kfifo*,struct mbo**,int) ;
 int FUNC_1 (struct mbo*) ;
 int FUNC_2 (int ,int ,int *) ;

__attribute__((used)) static void FUNC_3(struct comp_channel *VAR_1)
{
 struct mbo *VAR_2;

 while (FUNC_0((struct kfifo *)&VAR_1->fifo, &VAR_2, 1))
  FUNC_1(VAR_2);
 FUNC_2(VAR_1->iface, VAR_1->channel_id, &VAR_0.cc);
}
