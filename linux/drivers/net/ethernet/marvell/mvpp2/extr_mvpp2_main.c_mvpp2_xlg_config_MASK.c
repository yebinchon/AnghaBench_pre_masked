
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct phylink_link_state {int pause; } ;
struct mvpp2_port {scalar_t__ base; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_2(struct mvpp2_port *VAR_11, unsigned int VAR_12,
        const struct phylink_link_state *VAR_13)
{
 u32 VAR_14, VAR_15;
 u32 VAR_16, VAR_17;

 VAR_14 = VAR_15 = FUNC_0(VAR_11->base + VAR_3);
 VAR_16 = VAR_17 = FUNC_0(VAR_11->base + VAR_10);

 VAR_15 |= VAR_2;

 if (VAR_13->pause & VAR_1)
  VAR_15 |= VAR_5;
 else
  VAR_15 &= ~VAR_5;

 if (VAR_13->pause & VAR_0)
  VAR_15 |= VAR_4;
 else
  VAR_15 &= ~VAR_4;

 VAR_17 &= ~(VAR_9 |
     VAR_6);
 VAR_17 |= VAR_7 | VAR_8;

 if (VAR_14 != VAR_15)
  FUNC_1(VAR_15, VAR_11->base + VAR_3);
 if (VAR_16 != VAR_17)
  FUNC_1(VAR_17, VAR_11->base + VAR_10);

 if (!(VAR_14 & VAR_2)) {
  while (!(FUNC_0(VAR_11->base + VAR_3) &
    VAR_2))
   continue;
 }
}
