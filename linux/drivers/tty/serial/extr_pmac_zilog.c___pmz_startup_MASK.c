
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uart_pmac_port {int* curregs; int prev_status; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 size_t VAR_8 ;
 size_t VAR_9 ;
 size_t VAR_10 ;
 size_t VAR_11 ;
 size_t VAR_12 ;
 size_t VAR_13 ;
 size_t VAR_14 ;
 size_t VAR_15 ;
 size_t VAR_16 ;
 size_t VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 scalar_t__ FUNC_0 (struct uart_pmac_port*) ;
 int FUNC_1 (struct uart_pmac_port*) ;
 int FUNC_2 (int**,int ,int) ;
 int FUNC_3 (struct uart_pmac_port*) ;
 int FUNC_4 (struct uart_pmac_port*,int*) ;
 int FUNC_5 (struct uart_pmac_port*,int) ;
 int FUNC_6 (struct uart_pmac_port*,size_t) ;
 int FUNC_7 (int) ;
 int FUNC_8 (struct uart_pmac_port*,size_t,int) ;
 int FUNC_9 (struct uart_pmac_port*) ;

__attribute__((used)) static int FUNC_10(struct uart_pmac_port *VAR_26)
{
 int VAR_27 = 0;

 FUNC_2(&VAR_26->curregs, 0, sizeof(VAR_26->curregs));


 VAR_27 = FUNC_5(VAR_26, 1);


 FUNC_3(VAR_26);


 VAR_26->curregs[VAR_17] = 0;
 FUNC_8(VAR_26, 9, FUNC_0(VAR_26) ? VAR_2 : VAR_3);
 FUNC_9(VAR_26);
 FUNC_7(10);
 FUNC_8(VAR_26, 9, 0);
 FUNC_9(VAR_26);


 FUNC_8(VAR_26, VAR_9, 0);
 FUNC_8(VAR_26, VAR_8, VAR_5);
 FUNC_8(VAR_26, VAR_8, VAR_5);
 FUNC_8(VAR_26, VAR_8, VAR_18);
 FUNC_8(VAR_26, VAR_8, VAR_18);


 VAR_26->curregs[VAR_15] = VAR_25 | VAR_22;
 VAR_26->curregs[VAR_14] = VAR_20;
 VAR_26->curregs[VAR_16] = VAR_23 | VAR_19;
 if (!FUNC_1(VAR_26))
  VAR_26->curregs[VAR_16] |= VAR_4;
 VAR_26->curregs[VAR_10] = 0;
 VAR_26->curregs[VAR_11] = 0;
 VAR_26->curregs[VAR_12] = VAR_0;


 VAR_26->curregs[VAR_13] = VAR_1;


 VAR_26->curregs[VAR_17] |= VAR_7 | VAR_6;

 FUNC_4(VAR_26, VAR_26->curregs);


 FUNC_8(VAR_26, VAR_14, VAR_26->curregs[VAR_14] |= VAR_21);
 FUNC_8(VAR_26, VAR_16, VAR_26->curregs[VAR_16] |= VAR_24);


 VAR_26->prev_status = FUNC_6(VAR_26, VAR_8);

 return VAR_27;
}
