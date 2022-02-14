
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct net_device {int dummy; } ;
struct cc770_priv {unsigned char* obj_flags; int control_normal_mode; } ;
struct TYPE_2__ {int ctrl0; int ctrl1; int config; } ;


 unsigned int FUNC_0 (unsigned char*) ;
 unsigned char VAR_0 ;
 unsigned char VAR_1 ;
 unsigned char VAR_2 ;
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
 int FUNC_1 (struct cc770_priv*,int ,int) ;
 TYPE_1__* VAR_18 ;
 int FUNC_2 (struct net_device const*,char*,unsigned int,...) ;
 struct cc770_priv* FUNC_3 (struct net_device const*) ;
 unsigned int FUNC_4 (unsigned int) ;

__attribute__((used)) static void FUNC_5(const struct net_device *VAR_19)
{
 struct cc770_priv *VAR_20 = FUNC_3(VAR_19);
 u8 VAR_21;
 unsigned char VAR_22;
 unsigned int VAR_23, VAR_24;

 for (VAR_23 = 0; VAR_23 < FUNC_0(VAR_20->obj_flags); VAR_23++) {
  VAR_22 = VAR_20->obj_flags[VAR_23];
  VAR_24 = FUNC_4(VAR_23);

  if (VAR_22 & VAR_2) {




   if (VAR_20->control_normal_mode & VAR_5) {
    if (VAR_23 > 0)
     continue;
    FUNC_2(VAR_19, "Message object %d for "
        "RX data, RTR, SFF and EFF\n", VAR_24);
   } else {
    FUNC_2(VAR_19,
        "Message object %d for RX %s %s\n",
        VAR_24, VAR_22 & VAR_1 ?
        "RTR" : "data",
        VAR_22 & VAR_0 ?
        "EFF" : "SFF");
   }

   if (VAR_22 & VAR_0)
    VAR_21 = VAR_8;
   else
    VAR_21 = 0;
   if (VAR_22 & VAR_1)
    VAR_21 |= VAR_7;

   FUNC_1(VAR_20, VAR_18[VAR_24].config, VAR_21);
   FUNC_1(VAR_20, VAR_18[VAR_24].ctrl0,
     VAR_11 | VAR_16 |
     VAR_15 | VAR_6);

   if (VAR_22 & VAR_1)
    FUNC_1(VAR_20, VAR_18[VAR_24].ctrl1,
      VAR_12 | VAR_4 |
      VAR_17 | VAR_13);
   else
    FUNC_1(VAR_20, VAR_18[VAR_24].ctrl1,
      VAR_12 | VAR_9 |
      VAR_17 | VAR_13);
  } else {
   FUNC_2(VAR_19, "Message object %d for "
       "TX data, RTR, SFF and EFF\n", VAR_24);

   FUNC_1(VAR_20, VAR_18[VAR_24].ctrl1,
     VAR_13 | VAR_17 |
     VAR_3 | VAR_12);
   FUNC_1(VAR_20, VAR_18[VAR_24].ctrl0,
     VAR_10 | VAR_16 |
     VAR_14 | VAR_6);
  }
 }
}
