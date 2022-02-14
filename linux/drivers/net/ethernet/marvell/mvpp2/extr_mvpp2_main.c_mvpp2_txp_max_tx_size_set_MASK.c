
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct mvpp2_port {int pkt_size; int ntxqs; int priv; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int) ;
 int VAR_5 ;
 int FUNC_1 (struct mvpp2_port*) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,int ,int) ;

__attribute__((used)) static void FUNC_4(struct mvpp2_port *VAR_6)
{
 u32 VAR_7, VAR_8, VAR_9;
 int VAR_10, VAR_11;

 VAR_9 = VAR_6->pkt_size * 8;
 if (VAR_9 > VAR_0)
  VAR_9 = VAR_0;


 VAR_9 = 3 * VAR_9;


 VAR_11 = FUNC_1(VAR_6);
 FUNC_3(VAR_6->priv, VAR_2, VAR_11);


 VAR_7 = FUNC_2(VAR_6->priv, VAR_1);
 VAR_7 &= ~VAR_0;
 VAR_7 |= VAR_9;
 FUNC_3(VAR_6->priv, VAR_1, VAR_7);


 VAR_7 = FUNC_2(VAR_6->priv, VAR_3);
 VAR_8 = VAR_7 & VAR_4;
 if (VAR_8 < VAR_9) {
  VAR_8 = VAR_9;
  VAR_7 &= ~VAR_4;
  VAR_7 |= VAR_8;
  FUNC_3(VAR_6->priv, VAR_3, VAR_7);
 }

 for (VAR_10 = 0; VAR_10 < VAR_6->ntxqs; VAR_10++) {
  VAR_7 = FUNC_2(VAR_6->priv,
     FUNC_0(VAR_10));
  VAR_8 = VAR_7 & VAR_5;

  if (VAR_8 < VAR_9) {
   VAR_8 = VAR_9;
   VAR_7 &= ~VAR_5;
   VAR_7 |= VAR_8;
   FUNC_3(VAR_6->priv,
        FUNC_0(VAR_10),
        VAR_7);
  }
 }
}
