
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct csi2tx_priv {unsigned int num_lanes; scalar_t__ base; scalar_t__* lanes; } ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (struct csi2tx_priv*,int) ;
 int FUNC_2 (struct csi2tx_priv*) ;
 int FUNC_3 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_4(struct csi2tx_priv *VAR_3)
{
 u32 VAR_4;
 unsigned int VAR_5;

 FUNC_2(VAR_3);


 VAR_4 = VAR_0 | VAR_1;
 for (VAR_5 = 0; VAR_5 < VAR_3->num_lanes; VAR_5++)
  VAR_4 |= FUNC_0(VAR_3->lanes[VAR_5] - 1);
 FUNC_3(VAR_4, VAR_3->base + VAR_2);

 FUNC_1(VAR_3, VAR_4);
}
