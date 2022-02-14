
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct esp {int* fifo; int sreg2; int fifo_cnt; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (struct esp*,int ) ;

__attribute__((used)) static void FUNC_3(struct esp *VAR_5)
{
 int VAR_6 = FUNC_0(VAR_2) & VAR_3;
 int VAR_7 = 0;

 while (VAR_6--) {
  VAR_5->fifo[VAR_7++] = FUNC_0(VAR_1);
  VAR_5->fifo[VAR_7++] = FUNC_0(VAR_1);
 }
 if (VAR_5->sreg2 & VAR_4) {
  FUNC_1(0, VAR_1);
  VAR_5->fifo[VAR_7++] = FUNC_0(VAR_1);
  FUNC_2(VAR_5, VAR_0);
 }
 VAR_5->fifo_cnt = VAR_7;
}
