
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct phy_device {TYPE_1__* attached_dev; } ;
struct ethtool_wolinfo {int wolopts; } ;
struct TYPE_2__ {int* dev_addr; } ;


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
 int FUNC_0 (struct phy_device*,int ,int,int) ;
 int FUNC_1 (struct phy_device*,int ) ;
 int FUNC_2 (struct phy_device*,int ,int) ;
 int FUNC_3 (struct phy_device*,int ) ;
 int FUNC_4 (struct phy_device*) ;
 int FUNC_5 (struct phy_device*,int,int) ;
 int FUNC_6 (struct phy_device*) ;

__attribute__((used)) static int FUNC_7(struct phy_device *VAR_17,
       struct ethtool_wolinfo *VAR_18)
{
 int VAR_19 = 0, VAR_20;

 VAR_20 = FUNC_6(VAR_17);
 if (VAR_20 < 0)
  goto error;

 if (VAR_18->wolopts & VAR_16) {

  VAR_19 = FUNC_3(VAR_17, VAR_13);
  if (VAR_19 < 0)
   goto error;







  if (!FUNC_4(VAR_17))
   FUNC_1(VAR_17, VAR_12);


  VAR_19 = FUNC_0(VAR_17, VAR_0, 0,
       VAR_1);
  if (VAR_19 < 0)
   goto error;

  VAR_19 = FUNC_3(VAR_17, VAR_14);
  if (VAR_19 < 0)
   goto error;


  VAR_19 = FUNC_0(VAR_17, VAR_2,
       VAR_3,
       VAR_5 |
       VAR_4);
  if (VAR_19 < 0)
   goto error;

  VAR_19 = FUNC_3(VAR_17, VAR_15);
  if (VAR_19 < 0)
   goto error;


  VAR_19 = FUNC_2(VAR_17, VAR_8,
    ((VAR_17->attached_dev->dev_addr[5] << 8) |
     VAR_17->attached_dev->dev_addr[4]));
  if (VAR_19 < 0)
   goto error;
  VAR_19 = FUNC_2(VAR_17, VAR_7,
    ((VAR_17->attached_dev->dev_addr[3] << 8) |
     VAR_17->attached_dev->dev_addr[2]));
  if (VAR_19 < 0)
   goto error;
  VAR_19 = FUNC_2(VAR_17, VAR_6,
    ((VAR_17->attached_dev->dev_addr[1] << 8) |
     VAR_17->attached_dev->dev_addr[0]));
  if (VAR_19 < 0)
   goto error;


  VAR_19 = FUNC_0(VAR_17, VAR_9, 0,
       VAR_10 |
       VAR_11);
  if (VAR_19 < 0)
   goto error;
 } else {
  VAR_19 = FUNC_3(VAR_17, VAR_15);
  if (VAR_19 < 0)
   goto error;


  VAR_19 = FUNC_0(VAR_17, VAR_9,
       VAR_11,
       VAR_10);
  if (VAR_19 < 0)
   goto error;
 }

error:
 return FUNC_5(VAR_17, VAR_20, VAR_19);
}
