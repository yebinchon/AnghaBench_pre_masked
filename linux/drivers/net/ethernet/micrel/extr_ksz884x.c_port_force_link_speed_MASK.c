
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct ksz_port {int first_port; int port_cnt; int speed; int duplex; struct ksz_hw* hw; } ;
struct ksz_hw {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct ksz_hw*,int,int *) ;
 int FUNC_1 (struct ksz_hw*,int,int ) ;

__attribute__((used)) static void FUNC_2(struct ksz_port *VAR_5)
{
 struct ksz_hw *VAR_6 = VAR_5->hw;
 u16 VAR_7;
 int VAR_8;
 int VAR_9;
 int VAR_10;

 for (VAR_8 = 0, VAR_10 = VAR_5->first_port; VAR_8 < VAR_5->port_cnt; VAR_8++, VAR_10++) {
  VAR_9 = VAR_0 + VAR_10 * VAR_2;
  FUNC_0(VAR_6, VAR_9, &VAR_7);

  VAR_7 &= ~VAR_1;

  if (10 == VAR_5->speed)
   VAR_7 &= ~VAR_4;
  else if (100 == VAR_5->speed)
   VAR_7 |= VAR_4;
  if (1 == VAR_5->duplex)
   VAR_7 &= ~VAR_3;
  else if (2 == VAR_5->duplex)
   VAR_7 |= VAR_3;
  FUNC_1(VAR_6, VAR_9, VAR_7);
 }
}
