
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct mvneta_port {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct mvneta_port*,int ) ;
 int FUNC_1 (struct mvneta_port*,int ,int) ;

__attribute__((used)) static void FUNC_2(struct mvneta_port *VAR_6,
       int VAR_7)
{
 u32 VAR_8, VAR_9;

 VAR_8 = FUNC_0(VAR_6, VAR_3);

 VAR_9 = FUNC_0(VAR_6, VAR_4);


 if (VAR_7) {

  VAR_8 |= VAR_5;
  VAR_9 |= VAR_0;
  FUNC_1(VAR_6, VAR_2, 0xffff);
  FUNC_1(VAR_6, VAR_1, 0xffffffff);
 } else {

  VAR_8 &= ~VAR_5;
  VAR_9 &= ~VAR_0;
 }

 FUNC_1(VAR_6, VAR_3, VAR_8);
 FUNC_1(VAR_6, VAR_4, VAR_9);
}
