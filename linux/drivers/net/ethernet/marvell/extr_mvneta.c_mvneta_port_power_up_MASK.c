
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mvneta_port {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct mvneta_port*,int ,int ) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (int) ;

__attribute__((used)) static int FUNC_3(struct mvneta_port *VAR_7, int VAR_8)
{

 FUNC_0(VAR_7, VAR_4, 0);

 if (VAR_8 == VAR_5)
  FUNC_0(VAR_7, VAR_2, VAR_1);
 else if (VAR_8 == VAR_6 ||
   FUNC_1(VAR_8))
  FUNC_0(VAR_7, VAR_2, VAR_3);
 else if (!FUNC_2(VAR_8))
  return -VAR_0;

 return 0;
}
