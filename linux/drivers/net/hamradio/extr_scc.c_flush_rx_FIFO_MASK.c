
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int rxerrs; } ;
struct scc_channel {int * rx_buff; TYPE_1__ stat; int data; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static inline void FUNC_2(struct scc_channel *VAR_0)
{
 int VAR_1;

 for (VAR_1=0; VAR_1<3; VAR_1++)
  FUNC_0(VAR_0->data);

 if(VAR_0->rx_buff != ((void*)0))
 {
  VAR_0->stat.rxerrs++;
  FUNC_1(VAR_0->rx_buff);
  VAR_0->rx_buff = ((void*)0);
 }
}
