
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ef4_tx_queue {int dummy; } ;
struct ef4_channel {struct ef4_tx_queue* tx_queue; } ;


 int FUNC_0 (int) ;
 unsigned int VAR_0 ;
 int FUNC_1 (struct ef4_channel*) ;

__attribute__((used)) static inline struct ef4_tx_queue *
FUNC_2(struct ef4_channel *VAR_1, unsigned VAR_2)
{
 FUNC_0(!FUNC_1(VAR_1) ||
       VAR_2 >= VAR_0);
 return &VAR_1->tx_queue[VAR_2];
}
