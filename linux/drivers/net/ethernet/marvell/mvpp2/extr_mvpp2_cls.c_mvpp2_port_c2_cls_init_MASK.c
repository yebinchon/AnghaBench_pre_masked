
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct mvpp2_port {int first_rxq; int priv; int id; } ;
struct mvpp2_cls_c2_entry {int act; int* attr; int valid; int * tcam; int index; } ;
typedef int c2 ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int) ;
 int VAR_3 ;
 int FUNC_6 (int) ;
 int VAR_4 ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_11 (struct mvpp2_cls_c2_entry*,int ,int) ;
 int FUNC_12 (int ,struct mvpp2_cls_c2_entry*) ;

__attribute__((used)) static void FUNC_13(struct mvpp2_port *VAR_7)
{
 struct mvpp2_cls_c2_entry VAR_8;
 u8 VAR_9, VAR_10, VAR_11;

 FUNC_11(&VAR_8, 0, sizeof(VAR_8));

 VAR_8 = FUNC_9(VAR_7->id);

 VAR_11 = FUNC_0(VAR_7->id);
 VAR_8[4] = FUNC_8(VAR_11);
 VAR_8[4] |= FUNC_10(FUNC_8(VAR_11));


 VAR_8[4] |= FUNC_10(FUNC_7(VAR_6));
 VAR_8[4] |= FUNC_7(VAR_5);


 VAR_8 = FUNC_4(VAR_2);


 VAR_8 |= FUNC_1(VAR_0);




 VAR_8 |= FUNC_2(VAR_1) |
     FUNC_3(VAR_1);

 VAR_9 = (VAR_7->first_rxq >> 3) & VAR_3;
 VAR_10 = VAR_7->first_rxq & VAR_4;

 VAR_8[0] = FUNC_5(VAR_9) |
        FUNC_6(VAR_10);

 VAR_8 = 1;

 FUNC_12(VAR_7->priv, &VAR_8);
}
