
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct fusb302_chip {size_t src_current_status; } ;
typedef enum typec_cc_status { ____Placeholder_typec_cc_status } typec_cc_status ;
typedef enum typec_cc_polarity { ____Placeholder_typec_cc_polarity } typec_cc_polarity ;


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
 int FUNC_0 (struct fusb302_chip*,int ,int*) ;
 int FUNC_1 (struct fusb302_chip*,int ,int) ;
 int FUNC_2 (struct fusb302_chip*,char*,int) ;
 int* VAR_12 ;
 int* VAR_13 ;
 int FUNC_3 (int,int) ;

__attribute__((used)) static int FUNC_4(struct fusb302_chip *VAR_14,
         enum typec_cc_polarity VAR_15,
         enum typec_cc_status *VAR_16)
{
 u8 VAR_17 = VAR_12[VAR_14->src_current_status];
 u8 VAR_18 = VAR_13[VAR_14->src_current_status];
 u8 VAR_19, VAR_20;
 int VAR_21;


 VAR_19 = (VAR_15 == VAR_11) ?
  VAR_4 | VAR_6 :
  VAR_5 | VAR_7;
 VAR_21 = FUNC_1(VAR_14, VAR_3, VAR_19);
 if (VAR_21 < 0)
  return VAR_21;

 FUNC_0(VAR_14, VAR_3, &VAR_20);
 FUNC_2(VAR_14, "get_src_cc_status switches: 0x%0x", VAR_20);


 VAR_21 = FUNC_1(VAR_14, VAR_0, VAR_18);
 if (VAR_21 < 0)
  return VAR_21;

 FUNC_3(50, 100);
 VAR_21 = FUNC_0(VAR_14, VAR_1, &VAR_20);
 if (VAR_21 < 0)
  return VAR_21;

 FUNC_2(VAR_14, "get_src_cc_status rd_mda status0: 0x%0x", VAR_20);
 if (VAR_20 & VAR_2) {
  *VAR_16 = VAR_8;
  return 0;
 }


 VAR_21 = FUNC_1(VAR_14, VAR_0, VAR_17);
 if (VAR_21 < 0)
  return VAR_21;

 FUNC_3(50, 100);
 VAR_21 = FUNC_0(VAR_14, VAR_1, &VAR_20);
 if (VAR_21 < 0)
  return VAR_21;

 FUNC_2(VAR_14, "get_src_cc_status ra_mda status0: 0x%0x", VAR_20);
 if (VAR_20 & VAR_2)
  *VAR_16 = VAR_10;
 else
  *VAR_16 = VAR_9;

 return 0;
}
