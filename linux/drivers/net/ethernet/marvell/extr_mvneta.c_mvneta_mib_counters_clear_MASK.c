
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct mvneta_port {int dummy; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (struct mvneta_port*,scalar_t__) ;

__attribute__((used)) static void FUNC_1(struct mvneta_port *VAR_4)
{
 int VAR_5;
 u32 VAR_6;


 for (VAR_5 = 0; VAR_5 < VAR_1; VAR_5 += 4)
  VAR_6 = FUNC_0(VAR_4, (VAR_0 + VAR_5));
 VAR_6 = FUNC_0(VAR_4, VAR_3);
 VAR_6 = FUNC_0(VAR_4, VAR_2);
}
