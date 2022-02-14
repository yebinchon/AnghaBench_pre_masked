
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int flags; } ;
struct xcan_priv {int (* read_reg ) (struct xcan_priv*,int ) ;TYPE_1__ devtype; int (* write_reg ) (struct xcan_priv*,int ,int ) ;} ;


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
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct xcan_priv*,int ,int ) ;
 int FUNC_3 (struct xcan_priv*,int ) ;
 int FUNC_4 (struct xcan_priv*,int ) ;

__attribute__((used)) static int FUNC_5(struct xcan_priv *VAR_13)
{
 int VAR_14;

 if (VAR_13->devtype.flags & VAR_4) {
  u32 VAR_15, VAR_16;




  VAR_13->write_reg(VAR_13, VAR_8, VAR_11);

  VAR_15 = VAR_13->read_reg(VAR_13, VAR_6);


  if (VAR_13->devtype.flags & VAR_3)
   VAR_16 = VAR_1;
  else
   VAR_16 = VAR_5;

  if (!(VAR_15 & VAR_16))
   return -VAR_0;

  if (VAR_13->devtype.flags & VAR_3)
   VAR_14 =
     FUNC_0(VAR_15 & VAR_2);
  else
   VAR_14 =
     FUNC_1(VAR_15 & VAR_7);

 } else {

  if (!(VAR_13->read_reg(VAR_13, VAR_9) &
        VAR_10))
   return -VAR_0;


  VAR_14 = VAR_12;
 }

 return VAR_14;
}
