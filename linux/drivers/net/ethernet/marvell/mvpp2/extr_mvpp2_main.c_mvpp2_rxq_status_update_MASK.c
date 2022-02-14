
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct mvpp2_port {int priv; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,int ,int) ;

__attribute__((used)) static inline void
FUNC_2(struct mvpp2_port *VAR_1, int VAR_2,
   int VAR_3, int VAR_4)
{



 u32 VAR_5 = VAR_3 | (VAR_4 << VAR_0);

 FUNC_1(VAR_1->priv, FUNC_0(VAR_2), VAR_5);
}
