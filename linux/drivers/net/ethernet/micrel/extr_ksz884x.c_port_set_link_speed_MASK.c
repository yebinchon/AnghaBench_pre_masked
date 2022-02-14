
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct ksz_port {int first_port; int port_cnt; int speed; int duplex; struct ksz_hw* hw; } ;
struct ksz_hw {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (struct ksz_port*,int) ;
 int FUNC_1 (struct ksz_hw*,int,int ,int*) ;
 int FUNC_2 (struct ksz_hw*,int,int ,int*) ;
 int FUNC_3 (struct ksz_hw*,int,int ,int) ;

__attribute__((used)) static void FUNC_4(struct ksz_port *VAR_9)
{
 struct ksz_hw *VAR_10 = VAR_9->hw;
 u16 VAR_11;
 u16 VAR_12;
 u8 VAR_13;
 int VAR_14;
 int VAR_15;

 for (VAR_14 = 0, VAR_15 = VAR_9->first_port; VAR_14 < VAR_9->port_cnt; VAR_14++, VAR_15++) {
  FUNC_1(VAR_10, VAR_15, VAR_0, &VAR_11);
  FUNC_2(VAR_10, VAR_15, VAR_1, &VAR_13);

  VAR_12 = 0;
  if (VAR_13 & VAR_8)
   VAR_12 = VAR_11;

  VAR_11 |= VAR_6;
  VAR_11 = FUNC_0(VAR_9, VAR_11);

  VAR_11 |= VAR_3 | VAR_2 |
   VAR_5 | VAR_4;


  if (VAR_9->speed || VAR_9->duplex) {
   if (10 == VAR_9->speed)
    VAR_11 &= ~(VAR_3 |
     VAR_2);
   else if (100 == VAR_9->speed)
    VAR_11 &= ~(VAR_5 |
     VAR_4);
   if (1 == VAR_9->duplex)
    VAR_11 &= ~(VAR_3 |
     VAR_5);
   else if (2 == VAR_9->duplex)
    VAR_11 &= ~(VAR_2 |
     VAR_4);
  }
  if (VAR_11 != VAR_12) {
   VAR_11 |= VAR_7;
   FUNC_3(VAR_10, VAR_15, VAR_0, VAR_11);
  }
 }
}
