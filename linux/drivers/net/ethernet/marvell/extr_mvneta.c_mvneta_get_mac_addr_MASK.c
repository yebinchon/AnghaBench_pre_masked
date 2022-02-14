
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct mvneta_port {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct mvneta_port*,int ) ;

__attribute__((used)) static void FUNC_1(struct mvneta_port *VAR_2, unsigned char *VAR_3)
{
 u32 VAR_4, VAR_5;

 VAR_4 = FUNC_0(VAR_2, VAR_1);
 VAR_5 = FUNC_0(VAR_2, VAR_0);
 VAR_3[0] = (VAR_5 >> 24) & 0xFF;
 VAR_3[1] = (VAR_5 >> 16) & 0xFF;
 VAR_3[2] = (VAR_5 >> 8) & 0xFF;
 VAR_3[3] = VAR_5 & 0xFF;
 VAR_3[4] = (VAR_4 >> 8) & 0xFF;
 VAR_3[5] = VAR_4 & 0xFF;
}
