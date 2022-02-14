
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct qlogicpti {int bursts; scalar_t__ qregs; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ FUNC_0 () ;
 int FUNC_1 (int,scalar_t__) ;

__attribute__((used)) static inline void FUNC_2(struct qlogicpti *VAR_10)
{
 u16 VAR_11;
 u8 VAR_12 = VAR_10->bursts;
 if (VAR_12 & VAR_1) {
  VAR_11 = (VAR_9 | VAR_6);
 } else if (VAR_12 & VAR_0) {
  VAR_11 = (VAR_9 | VAR_5);
 } else if (VAR_12 & VAR_3) {
  VAR_11 = (VAR_9 | VAR_8);
 } else {
  VAR_11 = 0;
 }
 FUNC_1(VAR_11, VAR_10->qregs + VAR_4);
}
