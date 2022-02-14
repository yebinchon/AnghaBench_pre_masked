
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct mvpp2_cls_c2_entry {int * tcam; int * attr; int act; scalar_t__ valid; int index; } ;
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
 int FUNC_0 (struct mvpp2*,int ) ;
 int FUNC_1 (struct mvpp2*,int ,int ) ;

__attribute__((used)) static void FUNC_2(struct mvpp2 *VAR_13,
          struct mvpp2_cls_c2_entry *VAR_14)
{
 u32 VAR_15;
 FUNC_1(VAR_13, VAR_10, VAR_14->index);

 VAR_15 = FUNC_0(VAR_13, VAR_11);
 if (VAR_14->valid)
  VAR_15 &= ~VAR_12;
 else
  VAR_15 |= VAR_12;
 FUNC_1(VAR_13, VAR_11, VAR_15);

 FUNC_1(VAR_13, VAR_0, VAR_14->act);

 FUNC_1(VAR_13, VAR_1, VAR_14->attr[0]);
 FUNC_1(VAR_13, VAR_2, VAR_14->attr[1]);
 FUNC_1(VAR_13, VAR_3, VAR_14->attr[2]);
 FUNC_1(VAR_13, VAR_4, VAR_14->attr[3]);

 FUNC_1(VAR_13, VAR_5, VAR_14->tcam[0]);
 FUNC_1(VAR_13, VAR_6, VAR_14->tcam[1]);
 FUNC_1(VAR_13, VAR_7, VAR_14->tcam[2]);
 FUNC_1(VAR_13, VAR_8, VAR_14->tcam[3]);

 FUNC_1(VAR_13, VAR_9, VAR_14->tcam[4]);
}
