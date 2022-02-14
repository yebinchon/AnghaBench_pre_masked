
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct mac_info {int port_en; int duplex; void* tx_pause_en; void* rx_pause_en; int speed; int tx_pause_time; scalar_t__ auto_neg; void* pad_and_crc_en; } ;
struct mac_driver {int dummy; } ;


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
 void* FUNC_0 (int ,int ) ;
 scalar_t__ FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (struct mac_driver*,int ) ;

__attribute__((used)) static void FUNC_3(void *VAR_12, struct mac_info *VAR_13)
{
 struct mac_driver *VAR_14 = (struct mac_driver *)VAR_12;
 u32 VAR_15, VAR_16, VAR_17, VAR_18;

 VAR_18 = FUNC_2(VAR_14, VAR_2);
 VAR_13->pad_and_crc_en = FUNC_0(VAR_18, VAR_1);
 VAR_13->auto_neg = 0;

 VAR_15 = FUNC_2(VAR_14, VAR_4);
 VAR_13->tx_pause_time = VAR_15;

 VAR_17 = FUNC_2(VAR_14, VAR_7);
 VAR_13->port_en = FUNC_1(VAR_17, VAR_10,
        VAR_11) &&
    FUNC_1(VAR_17, VAR_8,
            VAR_9);
 VAR_13->duplex = 1;
 VAR_13->speed = VAR_0;

 VAR_16 = FUNC_2(VAR_14, VAR_3);
 VAR_13->rx_pause_en = FUNC_0(VAR_16, VAR_5);
 VAR_13->tx_pause_en = FUNC_0(VAR_16, VAR_6);
}
