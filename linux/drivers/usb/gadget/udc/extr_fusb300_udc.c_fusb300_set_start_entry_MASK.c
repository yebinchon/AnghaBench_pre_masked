
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct fusb300 {int fifo_entry_num; scalar_t__ addrofs; scalar_t__ reg; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (int,scalar_t__) ;
 int FUNC_4 (char*) ;

__attribute__((used)) static void FUNC_5(struct fusb300 *VAR_3,
        u8 VAR_4)
{
 u32 VAR_5 = FUNC_2(VAR_3->reg + FUNC_1(VAR_4));
 u32 VAR_6 = VAR_3->fifo_entry_num * VAR_1;

 VAR_5 &= ~VAR_0 ;
 VAR_5 |= FUNC_0(VAR_6);
 FUNC_3(VAR_5, VAR_3->reg + FUNC_1(VAR_4));
 if (VAR_3->fifo_entry_num == VAR_2) {
  VAR_3->fifo_entry_num = 0;
  VAR_3->addrofs = 0;
  FUNC_4("fifo entry is over the maximum number!\n");
 } else
  VAR_3->fifo_entry_num++;
}
