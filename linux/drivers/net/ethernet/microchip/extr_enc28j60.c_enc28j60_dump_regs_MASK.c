
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct enc28j60_net {int lock; TYPE_1__* spi; } ;
struct device {int dummy; } ;
struct TYPE_2__ {struct device dev; } ;


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
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int FUNC_0 (int ,struct device*,char*,char const*,int ,int ,int ,int ,int ,int ,int ,int ,int ,int ,int ,int ,int ,int ,int ,int ,int ,int ,int ,int ,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct enc28j60_net*,int ) ;
 int FUNC_4 (struct enc28j60_net*,int ) ;

__attribute__((used)) static void FUNC_5(struct enc28j60_net *VAR_22, const char *VAR_23)
{
 struct device *VAR_24 = &VAR_22->spi->dev;

 FUNC_1(&VAR_22->lock);
 FUNC_0(VAR_14, VAR_24,
     " %s\n"
     "HwRevID: 0x%02x\n"
     "Cntrl: ECON1 ECON2 ESTAT  EIR  EIE\n"
     "       0x%02x  0x%02x  0x%02x  0x%02x  0x%02x\n"
     "MAC  : MACON1 MACON3 MACON4\n"
     "       0x%02x   0x%02x   0x%02x\n"
     "Rx   : ERXST  ERXND  ERXWRPT ERXRDPT ERXFCON EPKTCNT MAMXFL\n"
     "       0x%04x 0x%04x 0x%04x  0x%04x  "
     "0x%02x    0x%02x    0x%04x\n"
     "Tx   : ETXST  ETXND  MACLCON1 MACLCON2 MAPHSUP\n"
     "       0x%04x 0x%04x 0x%02x     0x%02x     0x%02x\n",
     VAR_23, FUNC_3(VAR_22, VAR_5),
     FUNC_3(VAR_22, VAR_0), FUNC_3(VAR_22, VAR_1),
     FUNC_3(VAR_22, VAR_11), FUNC_3(VAR_22, VAR_3),
     FUNC_3(VAR_22, VAR_2), FUNC_3(VAR_22, VAR_17),
     FUNC_3(VAR_22, VAR_18), FUNC_3(VAR_22, VAR_19),
     FUNC_4(VAR_22, VAR_9), FUNC_4(VAR_22, VAR_7),
     FUNC_4(VAR_22, VAR_10),
     FUNC_4(VAR_22, VAR_8),
     FUNC_3(VAR_22, VAR_6),
     FUNC_3(VAR_22, VAR_4),
     FUNC_4(VAR_22, VAR_20), FUNC_4(VAR_22, VAR_13),
     FUNC_4(VAR_22, VAR_12),
     FUNC_3(VAR_22, VAR_15),
     FUNC_3(VAR_22, VAR_16),
     FUNC_3(VAR_22, VAR_21));
 FUNC_2(&VAR_22->lock);
}
