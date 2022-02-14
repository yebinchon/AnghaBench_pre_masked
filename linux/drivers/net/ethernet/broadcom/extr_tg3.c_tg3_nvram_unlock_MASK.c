
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tg3 {scalar_t__ nvram_lock_cnt; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct tg3*,int ) ;
 int FUNC_1 (int ,int ) ;

__attribute__((used)) static void FUNC_2(struct tg3 *VAR_3)
{
 if (FUNC_0(VAR_3, VAR_0)) {
  if (VAR_3->nvram_lock_cnt > 0)
   VAR_3->nvram_lock_cnt--;
  if (VAR_3->nvram_lock_cnt == 0)
   FUNC_1(VAR_1, VAR_2);
 }
}
