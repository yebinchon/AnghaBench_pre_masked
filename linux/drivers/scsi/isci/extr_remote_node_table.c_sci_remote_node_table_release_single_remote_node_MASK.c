
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct sci_remote_node_table {int dummy; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct sci_remote_node_table*,int,int) ;
 int FUNC_2 (struct sci_remote_node_table*,int) ;
 int FUNC_3 (struct sci_remote_node_table*,int,int) ;
 int FUNC_4 (struct sci_remote_node_table*,int) ;

__attribute__((used)) static void FUNC_5(
 struct sci_remote_node_table *VAR_2,
 u16 VAR_3)
{
 u32 VAR_4;
 u8 VAR_5;

 VAR_4 = VAR_3 / VAR_1;

 VAR_5 = FUNC_2(VAR_2, VAR_4);




 FUNC_0(VAR_5 == VAR_0);

 if (VAR_5 == 0x00) {



  FUNC_3(VAR_2, 0, VAR_4);
 } else if ((VAR_5 & (VAR_5 - 1)) == 0) {



  FUNC_1(VAR_2, 0, VAR_4);
  FUNC_3(VAR_2, 1, VAR_4);
 } else {



  FUNC_1(VAR_2, 1, VAR_4);
  FUNC_3(VAR_2, 2, VAR_4);
 }

 FUNC_4(VAR_2, VAR_3);
}
