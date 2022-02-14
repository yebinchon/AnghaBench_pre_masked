
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct mvpp2_cls_c2_entry {int index; int valid; void** attr; void* act; void** tcam; } ;
struct mvpp2 {int dummy; } ;


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
 void* FUNC_0 (struct mvpp2*,int ) ;
 int FUNC_1 (struct mvpp2*,int ,int) ;

void FUNC_2(struct mvpp2 *VAR_13, int VAR_14,
         struct mvpp2_cls_c2_entry *VAR_15)
{
 u32 VAR_16;
 FUNC_1(VAR_13, VAR_10, VAR_14);

 VAR_15->index = VAR_14;

 VAR_15->tcam[0] = FUNC_0(VAR_13, VAR_5);
 VAR_15->tcam[1] = FUNC_0(VAR_13, VAR_6);
 VAR_15->tcam[2] = FUNC_0(VAR_13, VAR_7);
 VAR_15->tcam[3] = FUNC_0(VAR_13, VAR_8);
 VAR_15->tcam[4] = FUNC_0(VAR_13, VAR_9);

 VAR_15->act = FUNC_0(VAR_13, VAR_0);

 VAR_15->attr[0] = FUNC_0(VAR_13, VAR_1);
 VAR_15->attr[1] = FUNC_0(VAR_13, VAR_2);
 VAR_15->attr[2] = FUNC_0(VAR_13, VAR_3);
 VAR_15->attr[3] = FUNC_0(VAR_13, VAR_4);

 VAR_16 = FUNC_0(VAR_13, VAR_11);
 VAR_15->valid = !(VAR_16 & VAR_12);
}
