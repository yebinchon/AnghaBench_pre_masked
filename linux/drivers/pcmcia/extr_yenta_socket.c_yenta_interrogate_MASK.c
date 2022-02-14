
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct yenta_socket {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_0 (struct yenta_socket*,int ) ;
 int FUNC_1 (struct yenta_socket*,int ,int ) ;

__attribute__((used)) static void FUNC_2(struct yenta_socket *VAR_13)
{
 u32 VAR_14;

 VAR_14 = FUNC_0(VAR_13, VAR_10);
 if (!(VAR_14 & (VAR_2 | VAR_1 | VAR_11 | VAR_12)) ||
     (VAR_14 & (VAR_5 | VAR_6 | VAR_8 | VAR_3)) ||
     ((VAR_14 & (VAR_0 | VAR_4)) == (VAR_0 | VAR_4)))
  FUNC_1(VAR_13, VAR_9, VAR_7);
}
