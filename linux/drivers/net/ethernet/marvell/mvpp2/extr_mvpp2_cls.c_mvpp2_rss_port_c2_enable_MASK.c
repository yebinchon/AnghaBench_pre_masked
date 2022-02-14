
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct mvpp2_port {int priv; int id; } ;
struct mvpp2_cls_c2_entry {int* attr; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int ,struct mvpp2_cls_c2_entry*) ;
 int FUNC_4 (int ,struct mvpp2_cls_c2_entry*) ;

__attribute__((used)) static void FUNC_5(struct mvpp2_port *VAR_3, u32 VAR_4)
{
 struct mvpp2_cls_c2_entry VAR_5;
 u8 VAR_6, VAR_7;

 FUNC_3(VAR_3->priv, FUNC_2(VAR_3->id), &VAR_5);




 VAR_6 = (VAR_4 >> 3) & VAR_0;
 VAR_7 = VAR_4 & VAR_1;

 VAR_5[0] = FUNC_0(VAR_6) |
       FUNC_1(VAR_7);

 VAR_5[2] |= VAR_2;

 FUNC_4(VAR_3->priv, &VAR_5);
}
