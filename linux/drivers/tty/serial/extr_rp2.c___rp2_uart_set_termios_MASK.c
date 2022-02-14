
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rp2_uart_port {scalar_t__ ucode; scalar_t__ base; } ;


 unsigned long VAR_0 ;
 unsigned long VAR_1 ;
 unsigned long VAR_2 ;
 unsigned long VAR_3 ;
 unsigned long VAR_4 ;
 unsigned long VAR_5 ;
 unsigned long VAR_6 ;
 unsigned long VAR_7 ;
 unsigned long VAR_8 ;
 unsigned long VAR_9 ;
 unsigned long VAR_10 ;
 unsigned long VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 scalar_t__ VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 int VAR_32 ;
 int VAR_33 ;
 int FUNC_0 (struct rp2_uart_port*,int ,int,int) ;
 int FUNC_1 (int ,scalar_t__) ;
 int FUNC_2 (unsigned int,scalar_t__) ;

__attribute__((used)) static void FUNC_3(struct rp2_uart_port *VAR_34,
       unsigned long VAR_35,
       unsigned long VAR_36,
       unsigned int VAR_37)
{

 FUNC_2(VAR_37 - 1, VAR_34->base + VAR_12);


 FUNC_0(VAR_34, VAR_27,
  VAR_33 | VAR_32,
  ((VAR_35 & VAR_7) ? VAR_33 : 0) |
  (((VAR_35 & VAR_6) == VAR_5) ? VAR_31 : 0) |
  (((VAR_35 & VAR_6) == VAR_4) ? VAR_30 : 0) |
  (((VAR_35 & VAR_6) == VAR_3) ? VAR_29 : 0) |
  (((VAR_35 & VAR_6) == VAR_2) ? VAR_28 : 0));


 FUNC_0(VAR_34, VAR_16,
  VAR_21 | VAR_23 |
  VAR_17 | VAR_20 |
  VAR_19 | VAR_22 |
  VAR_18,
  ((VAR_35 & VAR_10) ? VAR_21 : 0) |
  ((VAR_35 & VAR_11) ? 0 : VAR_23) |
  ((VAR_35 & VAR_0) ? VAR_17 : 0) |
  ((VAR_35 & VAR_1) ? (VAR_22 |
        VAR_18) : 0));


 FUNC_1((VAR_36 & VAR_9) ? VAR_26 : VAR_25,
        VAR_34->ucode + VAR_24);
 FUNC_1((VAR_36 & VAR_8) ? VAR_15 : VAR_14,
        VAR_34->ucode + VAR_13);
}
