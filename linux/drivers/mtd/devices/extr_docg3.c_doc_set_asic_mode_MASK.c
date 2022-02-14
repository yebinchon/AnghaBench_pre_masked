
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct docg3 {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char*,int ) ;
 int FUNC_1 (struct docg3*,int) ;
 int FUNC_2 (struct docg3*,int ) ;
 int FUNC_3 (struct docg3*,int ,int ) ;

__attribute__((used)) static void FUNC_4(struct docg3 *VAR_4, u8 VAR_5)
{
 int VAR_6;

 for (VAR_6 = 0; VAR_6 < 12; VAR_6++)
  FUNC_2(VAR_4, VAR_3);

 VAR_5 |= VAR_2;
 FUNC_0("doc_set_asic_mode(%02x)\n", VAR_5);
 FUNC_3(VAR_4, VAR_5, VAR_0);
 FUNC_3(VAR_4, ~VAR_5, VAR_1);
 FUNC_1(VAR_4, 1);
}
