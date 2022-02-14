
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ucc_hdlc_private {unsigned short encoding; unsigned short parity; } ;
struct net_device {int dummy; } ;
struct TYPE_2__ {struct ucc_hdlc_private* priv; } ;


 int VAR_0 ;
 unsigned short VAR_1 ;
 unsigned short VAR_2 ;
 unsigned short VAR_3 ;
 unsigned short VAR_4 ;
 unsigned short VAR_5 ;
 unsigned short VAR_6 ;
 TYPE_1__* FUNC_0 (struct net_device*) ;

__attribute__((used)) static int FUNC_1(struct net_device *VAR_7, unsigned short VAR_8,
      unsigned short VAR_9)
{
 struct ucc_hdlc_private *VAR_10 = FUNC_0(VAR_7)->priv;

 if (VAR_8 != VAR_1 &&
     VAR_8 != VAR_2)
  return -VAR_0;

 if (VAR_9 != VAR_6 &&
     VAR_9 != VAR_5 &&
     VAR_9 != VAR_3 &&
     VAR_9 != VAR_4)
  return -VAR_0;

 VAR_10->encoding = VAR_8;
 VAR_10->parity = VAR_9;

 return 0;
}
