
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct il_queue {int n_win; } ;



__attribute__((used)) static inline u8
FUNC_0(struct il_queue *VAR_0, u32 VAR_1, int VAR_2)
{





 if (VAR_2)
  return VAR_0->n_win;


 return VAR_1 & (VAR_0->n_win - 1);
}
