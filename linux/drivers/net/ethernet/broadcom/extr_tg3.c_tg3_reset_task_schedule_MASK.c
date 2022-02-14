
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tg3 {int reset_task; int tg3_flags; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ,int ) ;

__attribute__((used)) static inline void FUNC_2(struct tg3 *VAR_1)
{
 if (!FUNC_1(VAR_0, VAR_1->tg3_flags))
  FUNC_0(&VAR_1->reset_task);
}
