
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ef4_tx_queue {int queue; } ;


 int VAR_0 ;

__attribute__((used)) static inline struct ef4_tx_queue *FUNC_0(struct ef4_tx_queue *VAR_1)
{
 if (VAR_1->queue & VAR_0)
  return VAR_1 - VAR_0;
 else
  return VAR_1 + VAR_0;
}
