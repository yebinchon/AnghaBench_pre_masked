
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct csi2tx_priv {unsigned int num_lanes; scalar_t__ base; scalar_t__* lanes; } ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_3(struct csi2tx_priv *VAR_4, u32 VAR_5)
{
 unsigned int VAR_6;

 FUNC_1(10);


 VAR_5 |= VAR_0;
 for (VAR_6 = 0; VAR_6 < VAR_4->num_lanes; VAR_6++)
  VAR_5 |= FUNC_0(VAR_4->lanes[VAR_6] - 1);
 FUNC_2(VAR_5, VAR_4->base + VAR_3);

 FUNC_1(10);


 VAR_5 &= ~VAR_2;
 FUNC_2(VAR_5 | VAR_1,
        VAR_4->base + VAR_3);
}
