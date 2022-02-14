
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ef4_farch_filter_spec {int flags; int dmaq_id; int* data; int type; } ;
typedef int ef4_oword_t ;


 int FUNC_0 () ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;



 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (int ,int ,int,int ,int,int ,int,int ,int,int ,int) ;
 int FUNC_2 (int ,int ,int,int ,int,int ,int,int ,int,int ,int,int ,int,int ,int) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int FUNC_3 (struct ef4_farch_filter_spec*) ;

__attribute__((used)) static u32 FUNC_4(ef4_oword_t *VAR_24,
      struct ef4_farch_filter_spec *VAR_25)
{
 u32 VAR_26;

 switch (FUNC_3(VAR_25)) {
 case 130: {
  bool VAR_27 = (VAR_25->type == VAR_4 ||
          VAR_25->type == VAR_5);
  FUNC_2(
   *VAR_24,
   VAR_8,
   !!(VAR_25->flags & VAR_6),
   VAR_10,
   !!(VAR_25->flags & VAR_7),
   VAR_11, VAR_27,
   VAR_9, VAR_25->dmaq_id,
   VAR_2, VAR_25->data[2],
   VAR_1, VAR_25->data[1],
   VAR_0, VAR_25->data[0]);
  VAR_26 = VAR_27;
  break;
 }

 case 129: {
  bool VAR_28 = VAR_25->type == VAR_3;
  FUNC_2(
   *VAR_24,
   VAR_14,
   !!(VAR_25->flags & VAR_6),
   VAR_16,
   !!(VAR_25->flags & VAR_7),
   VAR_15, VAR_25->dmaq_id,
   VAR_18, VAR_28,
   VAR_12, VAR_25->data[2],
   VAR_13, VAR_25->data[1],
   VAR_17, VAR_25->data[0]);
  VAR_26 = VAR_28;
  break;
 }

 case 128: {
  bool VAR_29 = VAR_25->type == VAR_3;
  FUNC_1(*VAR_24,
         VAR_21, VAR_25->dmaq_id,
         VAR_23, VAR_29,
         VAR_19, VAR_25->data[2],
         VAR_20, VAR_25->data[1],
         VAR_22, VAR_25->data[0]);
  VAR_26 = VAR_29 | VAR_25->dmaq_id << 1;
  break;
 }

 default:
  FUNC_0();
 }

 return VAR_25->data[0] ^ VAR_25->data[1] ^ VAR_25->data[2] ^ VAR_26;
}
