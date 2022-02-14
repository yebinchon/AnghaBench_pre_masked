
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct phy_device {scalar_t__ duplex; int speed; int drv; } ;


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
 int FUNC_0 (int ) ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_1 (int ,int ,int ) ;
 int VAR_12 ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int ,scalar_t__,int ) ;
 int FUNC_5 (struct phy_device*,int ,int ) ;
 int FUNC_6 (struct phy_device*) ;
 int FUNC_7 (struct phy_device*,int ,int ,int ) ;

int FUNC_8(struct phy_device *VAR_13, bool VAR_14)
{
 if (!VAR_13->drv)
  return -VAR_1;



 if (VAR_13->duplex == VAR_0) {
  FUNC_0(VAR_11);
  FUNC_0(VAR_12);
  FUNC_0(VAR_10);
  int VAR_15, VAR_16, VAR_17;
  int VAR_18;
  u32 VAR_19;


  VAR_18 = FUNC_6(VAR_13);
  if (VAR_18)
   return VAR_18;


  VAR_16 = FUNC_5(VAR_13, VAR_7, VAR_9);
  if (VAR_16 <= 0)
   goto eee_exit_err;

  VAR_19 = FUNC_3(VAR_16);
  if (!VAR_19)
   goto eee_exit_err;




  VAR_15 = FUNC_5(VAR_13, VAR_6, VAR_4);
  if (VAR_15 <= 0)
   goto eee_exit_err;

  VAR_17 = FUNC_5(VAR_13, VAR_6, VAR_3);
  if (VAR_17 <= 0)
   goto eee_exit_err;

  FUNC_2(VAR_10, VAR_17);
  FUNC_2(VAR_12, VAR_15);
  FUNC_1(VAR_11, VAR_10, VAR_12);

  if (!FUNC_4(VAR_13->speed, VAR_13->duplex, VAR_11))
   goto eee_exit_err;

  if (VAR_14)



   FUNC_7(VAR_13, VAR_7, VAR_5,
      VAR_8);

  return 0;
 }
eee_exit_err:
 return -VAR_2;
}
