
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct tsi721_device {int pw_work; scalar_t__ regs; int pw_fifo_lock; int pw_discard_count; int pw_fifo; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int,scalar_t__) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int*,int) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static int
FUNC_8(struct tsi721_device *VAR_4)
{
 u32 VAR_5;
 u32 VAR_6[VAR_0/sizeof(u32)];


 VAR_5 = FUNC_1(VAR_4->regs + VAR_1);

 if (VAR_5 & VAR_3) {
  VAR_6[0] = FUNC_1(VAR_4->regs + FUNC_0(0));
  VAR_6[1] = FUNC_1(VAR_4->regs + FUNC_0(1));
  VAR_6[2] = FUNC_1(VAR_4->regs + FUNC_0(2));
  VAR_6[3] = FUNC_1(VAR_4->regs + FUNC_0(3));




  FUNC_6(&VAR_4->pw_fifo_lock);
  if (FUNC_3(&VAR_4->pw_fifo) >= VAR_0)
   FUNC_4(&VAR_4->pw_fifo, VAR_6,
      VAR_0);
  else
   VAR_4->pw_discard_count++;
  FUNC_7(&VAR_4->pw_fifo_lock);
 }


 FUNC_2(VAR_2 | VAR_3,
    VAR_4->regs + VAR_1);

 FUNC_5(&VAR_4->pw_work);

 return 0;
}
