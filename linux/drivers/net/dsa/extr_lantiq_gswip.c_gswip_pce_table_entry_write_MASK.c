
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct gswip_priv {int dummy; } ;
struct gswip_pce_table_entry {int index; int table; int* key; int* val; int mask; int gmap; scalar_t__ valid; scalar_t__ type; scalar_t__ key_mode; } ;


 int FUNC_0 (int*) ;
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
 int FUNC_1 (int) ;
 int VAR_10 ;
 int FUNC_2 (int) ;
 int FUNC_3 (struct gswip_priv*,int,int,int ) ;
 int FUNC_4 (struct gswip_priv*,int ) ;
 int FUNC_5 (struct gswip_priv*,int ,int) ;
 int FUNC_6 (struct gswip_priv*,int,int ) ;

__attribute__((used)) static int FUNC_7(struct gswip_priv *VAR_11,
           struct gswip_pce_table_entry *VAR_12)
{
 int VAR_13;
 int VAR_14;
 u16 VAR_15;
 u16 VAR_16 = VAR_12->key_mode ? VAR_6 :
     VAR_5;

 VAR_14 = FUNC_5(VAR_11, VAR_1,
         VAR_3);
 if (VAR_14)
  return VAR_14;

 FUNC_6(VAR_11, VAR_12->index, VAR_0);
 FUNC_3(VAR_11, VAR_2 |
    VAR_7,
     VAR_12->table | VAR_16,
     VAR_1);

 for (VAR_13 = 0; VAR_13 < FUNC_0(VAR_12->key); VAR_13++)
  FUNC_6(VAR_11, VAR_12->key[VAR_13], FUNC_1(VAR_13));

 for (VAR_13 = 0; VAR_13 < FUNC_0(VAR_12->val); VAR_13++)
  FUNC_6(VAR_11, VAR_12->val[VAR_13], FUNC_2(VAR_13));

 FUNC_3(VAR_11, VAR_2 |
    VAR_7,
     VAR_12->table | VAR_16,
     VAR_1);

 FUNC_6(VAR_11, VAR_12->mask, VAR_10);

 VAR_15 = FUNC_4(VAR_11, VAR_1);
 VAR_15 &= ~(VAR_8 | VAR_9 |
    VAR_4);
 if (VAR_12->type)
  VAR_15 |= VAR_8;
 if (VAR_12->valid)
  VAR_15 |= VAR_9;
 VAR_15 |= (VAR_12->gmap << 7) & VAR_4;
 VAR_15 |= VAR_3;
 FUNC_6(VAR_11, VAR_15, VAR_1);

 return FUNC_5(VAR_11, VAR_1,
          VAR_3);
}
