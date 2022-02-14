
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct sq_gather_subdesc {int size; int addr; int ld_type; int subdesc_type; } ;
struct TYPE_2__ {int q_len; } ;
struct snd_queue {TYPE_1__ dmem; } ;


 scalar_t__ FUNC_0 (struct snd_queue*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct sq_gather_subdesc*,int ,int ) ;

__attribute__((used)) static inline void FUNC_2(struct snd_queue *VAR_3, int VAR_4,
            int VAR_5, u64 VAR_6)
{
 struct sq_gather_subdesc *VAR_7;

 VAR_4 &= (VAR_3->dmem.q_len - 1);
 VAR_7 = (struct sq_gather_subdesc *)FUNC_0(VAR_3, VAR_4);

 FUNC_1(VAR_7, 0, VAR_1);
 VAR_7->subdesc_type = VAR_2;
 VAR_7->ld_type = VAR_0;
 VAR_7->size = VAR_5;
 VAR_7->addr = VAR_6;
}
