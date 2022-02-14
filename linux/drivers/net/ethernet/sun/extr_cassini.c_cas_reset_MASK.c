
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct cas {int cas_flags; int * stat_lock; scalar_t__ regs; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 size_t VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct cas*) ;
 int FUNC_1 (struct cas*) ;
 int FUNC_2 (struct cas*,int) ;
 int FUNC_3 (struct cas*,scalar_t__) ;
 int FUNC_4 (struct cas*) ;
 int FUNC_5 (struct cas*) ;
 scalar_t__ VAR_8 ;
 int FUNC_6 (scalar_t__) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int ,scalar_t__) ;

__attribute__((used)) static void FUNC_10(struct cas *VAR_9, int VAR_10)
{
 u32 VAR_11;

 FUNC_5(VAR_9);
 FUNC_2(VAR_9, VAR_10);
 FUNC_4(VAR_9);
 FUNC_1(VAR_9);


 VAR_11 = FUNC_6(VAR_9->regs + VAR_5);
 VAR_11 &= ~VAR_7;
 FUNC_9(VAR_11, VAR_9->regs + VAR_5);

 VAR_11 = FUNC_6(VAR_9->regs + VAR_4);
 VAR_11 &= ~VAR_6;
 FUNC_9(VAR_11, VAR_9->regs + VAR_4);


 if ((VAR_9->cas_flags & VAR_0) ||
     (VAR_1 == VAR_8)) {
  FUNC_3(VAR_9, VAR_2);
 } else {
  FUNC_3(VAR_9, VAR_1);
 }


 FUNC_7(&VAR_9->stat_lock[VAR_3]);
 FUNC_0(VAR_9);
 FUNC_8(&VAR_9->stat_lock[VAR_3]);
}
