
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mbo {int dummy; } ;
struct comp_channel {int fifo; int channel_id; int iface; } ;
struct TYPE_2__ {int cc; } ;


 TYPE_1__ VAR_0 ;
 int FUNC_0 (int *,struct mbo**,int) ;
 int FUNC_1 (int *,struct mbo**) ;
 struct mbo* FUNC_2 (int ,int ,int *) ;

__attribute__((used)) static inline struct mbo *FUNC_3(struct comp_channel *VAR_1, struct mbo **VAR_2)
{
 if (!FUNC_1(&VAR_1->fifo, VAR_2)) {
  *VAR_2 = FUNC_2(VAR_1->iface, VAR_1->channel_id, &VAR_0.cc);
  if (*VAR_2)
   FUNC_0(&VAR_1->fifo, VAR_2, 1);
 }
 return *VAR_2;
}
