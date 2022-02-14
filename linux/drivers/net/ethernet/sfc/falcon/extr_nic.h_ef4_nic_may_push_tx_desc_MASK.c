
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ef4_tx_queue {unsigned int write_count; scalar_t__ empty_read_count; } ;


 int FUNC_0 (struct ef4_tx_queue*,unsigned int) ;

__attribute__((used)) static inline bool FUNC_1(struct ef4_tx_queue *VAR_0,
         unsigned int VAR_1)
{
 bool VAR_2 = FUNC_0(VAR_0, VAR_1);

 VAR_0->empty_read_count = 0;
 return VAR_2 && VAR_0->write_count - VAR_1 == 1;
}
