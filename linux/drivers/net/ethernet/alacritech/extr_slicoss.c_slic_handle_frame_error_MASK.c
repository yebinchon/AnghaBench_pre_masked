
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct slic_stats {int dummy; } ;
struct slic_rx_info_oasis {int frame_status_b; int frame_status; } ;
struct slic_rx_info_mojave {int frame_status; } ;
struct slic_device {scalar_t__ model; struct slic_stats stats; } ;
struct sk_buff {scalar_t__ data; } ;


 int FUNC_0 (struct slic_stats*,int ) ;
 scalar_t__ VAR_0 ;
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
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 int VAR_32 ;
 int VAR_33 ;
 int VAR_34 ;
 int FUNC_1 (int ) ;
 int VAR_35 ;
 int VAR_36 ;
 int VAR_37 ;
 int VAR_38 ;
 int VAR_39 ;
 int VAR_40 ;
 int VAR_41 ;
 int VAR_42 ;
 int VAR_43 ;
 int VAR_44 ;
 int VAR_45 ;
 int VAR_46 ;
 int VAR_47 ;
 int VAR_48 ;
 int VAR_49 ;

__attribute__((used)) static void FUNC_2(struct slic_device *VAR_50,
        struct sk_buff *VAR_51)
{
 struct slic_stats *VAR_52 = &VAR_50->stats;

 if (VAR_50->model == VAR_0) {
  struct slic_rx_info_oasis *VAR_53;
  u32 VAR_54;
  u32 VAR_55;

  VAR_53 = (struct slic_rx_info_oasis *)VAR_51->data;
  VAR_55 = FUNC_1(VAR_53->frame_status);
  VAR_54 = FUNC_1(VAR_53->frame_status_b);

  if (VAR_54 & VAR_31)
   FUNC_0(VAR_52, VAR_45);
  if (VAR_55 & VAR_34)
   FUNC_0(VAR_52, VAR_47);
  if (VAR_54 & VAR_32)
   FUNC_0(VAR_52, VAR_46);

  if (VAR_54 & VAR_27)
   FUNC_0(VAR_52, VAR_40);
  if (VAR_54 & VAR_29)
   FUNC_0(VAR_52, VAR_42);
  if (VAR_54 & VAR_28)
   FUNC_0(VAR_52, VAR_41);

  if (VAR_54 & VAR_30)
   FUNC_0(VAR_52, VAR_38);
  if (VAR_54 & VAR_22)
   FUNC_0(VAR_52, VAR_35);
  if (VAR_54 & VAR_24)
   FUNC_0(VAR_52, VAR_43);
  if (VAR_54 & VAR_26)
   FUNC_0(VAR_52, VAR_37);
  if (VAR_54 & VAR_25)
   FUNC_0(VAR_52, VAR_36);
  if (VAR_55 & VAR_33)
   FUNC_0(VAR_52, VAR_44);
  if (VAR_54 & VAR_21)
   FUNC_0(VAR_52, VAR_48);
  if (VAR_54 & VAR_23)
   FUNC_0(VAR_52, VAR_49);
 } else {
  struct slic_rx_info_mojave *VAR_56;
  u32 VAR_57;

  VAR_56 = (struct slic_rx_info_mojave *)VAR_51->data;
  VAR_57 = FUNC_1(VAR_56->frame_status);

  if (VAR_57 & VAR_19) {
   u32 VAR_58 = VAR_57 >> VAR_17;

   if (VAR_58 == VAR_16)
    FUNC_0(VAR_52, VAR_45);
   if (VAR_58 == VAR_20)
    FUNC_0(VAR_52, VAR_47);
   if (VAR_58 == VAR_18)
    FUNC_0(VAR_52, VAR_46);
  }

  if (VAR_57 & VAR_13) {
   u32 VAR_59 = VAR_57 >> VAR_12 &
       VAR_11;

   if (VAR_59 == VAR_10)
    FUNC_0(VAR_52, VAR_40);
   if (VAR_59 == VAR_15)
    FUNC_0(VAR_52, VAR_42);
   if (VAR_59 == VAR_14)
    FUNC_0(VAR_52, VAR_41);
  }

  if (VAR_57 & VAR_7) {
   u32 VAR_60 = VAR_57 & VAR_6;

   if (VAR_60 == VAR_5)
    FUNC_0(VAR_52, VAR_38);
   if (VAR_60 == VAR_1)
    FUNC_0(VAR_52, VAR_35);
   if (VAR_60 == VAR_2)
    FUNC_0(VAR_52, VAR_43);
   if (VAR_60 == VAR_4)
    FUNC_0(VAR_52, VAR_37);
   if (VAR_60 == VAR_3)
    FUNC_0(VAR_52, VAR_36);
   if (VAR_60 == VAR_8)
    FUNC_0(VAR_52, VAR_44);
   if (VAR_60 == VAR_9)
    FUNC_0(VAR_52, VAR_48);
  }
 }
 FUNC_0(VAR_52, VAR_39);
}
