
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int ;
typedef int u16 ;
struct net_device {unsigned char* dev_addr; int base_addr; } ;
struct dev_priv {int rxhdr; int* rxbuffer; int txhdr; int* txbuffer; scalar_t__ txtail; scalar_t__ txhead; scalar_t__ rxtail; scalar_t__ rxhead; int chip_lock; } ;


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
 int VAR_35 ;
 int FUNC_0 (struct net_device*,int*) ;
 int FUNC_1 (struct net_device*,int,int) ;
 struct dev_priv* FUNC_2 (struct net_device*) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int ,int,int) ;
 int FUNC_6 (int ,int,int) ;

__attribute__((used)) static void
FUNC_7(struct net_device *VAR_36)
{
 struct dev_priv *VAR_37 = FUNC_2(VAR_36);
 unsigned long VAR_38;
 unsigned char *VAR_39;
 u_int VAR_40, VAR_41;
 u16 VAR_42[4], VAR_43 = FUNC_0(VAR_36, VAR_42);
 int VAR_44;




 FUNC_3(&VAR_37->chip_lock, VAR_38);
 FUNC_6 (VAR_36->base_addr, VAR_3, VAR_4|VAR_5|VAR_8|VAR_7|VAR_12|VAR_9|VAR_10);
 FUNC_4(&VAR_37->chip_lock, VAR_38);

 FUNC_5 (VAR_36->base_addr, 5, 0x00a0);
 FUNC_5 (VAR_36->base_addr, 6, 0x0081);
 FUNC_5 (VAR_36->base_addr, 7, 0x0090);
 FUNC_5 (VAR_36->base_addr, 2, 0x0000);

 for (VAR_44 = VAR_24; VAR_44 <= VAR_23; VAR_44++)
  FUNC_6 (VAR_36->base_addr, VAR_44, VAR_42[VAR_44 - VAR_24]);

 for (VAR_44 = VAR_27, VAR_39 = VAR_36->dev_addr; VAR_44 <= VAR_26; VAR_44++, VAR_39 += 2)
  FUNC_6 (VAR_36->base_addr, VAR_44, VAR_39[0] | (VAR_39[1] << 8));

 FUNC_6 (VAR_36->base_addr, VAR_25, VAR_43);
 FUNC_6 (VAR_36->base_addr, VAR_28, 0);
 FUNC_6 (VAR_36->base_addr, VAR_31, -VAR_30);
 FUNC_6 (VAR_36->base_addr, VAR_32, -VAR_35);

 VAR_41 = VAR_30 * 8 + VAR_35 * 8 + 16;
 VAR_40 = 0;

 VAR_37->rxhead = 0;
 VAR_37->rxtail = 0;
 VAR_37->rxhdr = VAR_40;

 for (VAR_44 = 0; VAR_44 < VAR_30; VAR_44++) {
  VAR_37->rxbuffer[VAR_44] = VAR_41;
  FUNC_1 (VAR_36, VAR_40, VAR_41);
  FUNC_1 (VAR_36, VAR_40 + 2, VAR_29);
  FUNC_1 (VAR_36, VAR_40 + 4, (-1600));
  FUNC_1 (VAR_36, VAR_40 + 6, 0);
  VAR_41 += 1600;
  VAR_40 += 8;
 }
 VAR_37->txhead = 0;
 VAR_37->txtail = 0;
 VAR_37->txhdr = VAR_40;
 for (VAR_44 = 0; VAR_44 < VAR_35; VAR_44++) {
  VAR_37->txbuffer[VAR_44] = VAR_41;
  FUNC_1 (VAR_36, VAR_40, VAR_41);
  FUNC_1 (VAR_36, VAR_40 + 2, VAR_34|VAR_33);
  FUNC_1 (VAR_36, VAR_40 + 4, 0xf000);
  FUNC_1 (VAR_36, VAR_40 + 6, 0);
  VAR_41 += 1600;
  VAR_40 += 8;
 }

 FUNC_6 (VAR_36->base_addr, VAR_1, VAR_37->rxhdr);
 FUNC_6 (VAR_36->base_addr, VAR_0, 0);
 FUNC_6 (VAR_36->base_addr, VAR_2, VAR_37->txhdr);
 FUNC_6 (VAR_36->base_addr, VAR_0, 0);
 FUNC_6 (VAR_36->base_addr, VAR_3, VAR_10);
 FUNC_6 (VAR_36->base_addr, VAR_13, VAR_16|VAR_14|VAR_15);
 FUNC_6 (VAR_36->base_addr, VAR_17, VAR_18|VAR_20|VAR_21|VAR_22|VAR_19);
 FUNC_6 (VAR_36->base_addr, VAR_3, VAR_6|VAR_11);
}
