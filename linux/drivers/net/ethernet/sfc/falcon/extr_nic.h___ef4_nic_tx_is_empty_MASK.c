
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ef4_tx_queue {int empty_read_count; } ;


 unsigned int VAR_0 ;
 unsigned int FUNC_0 (int ) ;

__attribute__((used)) static inline bool FUNC_1(struct ef4_tx_queue *VAR_1,
      unsigned int VAR_2)
{
 unsigned int VAR_3 = FUNC_0(VAR_1->empty_read_count);

 if (VAR_3 == 0)
  return 0;

 return ((VAR_3 ^ VAR_2) & ~VAR_0) == 0;
}
