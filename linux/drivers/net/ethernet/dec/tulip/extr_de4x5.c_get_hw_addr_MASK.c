
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u_short ;
typedef int u_long ;
typedef void* u_char ;
struct net_device {int* dev_addr; int base_addr; } ;
struct TYPE_2__ {scalar_t__* ieee_addr; } ;
struct de4x5_private {scalar_t__ bus; scalar_t__ chipset; TYPE_1__ srom; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct de4x5_private*) ;
 scalar_t__ VAR_7 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;
 struct de4x5_private* FUNC_4 (struct net_device*) ;
 int VAR_8 ;
 int FUNC_5 (struct net_device*,int) ;
 int FUNC_6 (struct net_device*,int) ;

__attribute__((used)) static int
FUNC_7(struct net_device *VAR_9)
{
    u_long VAR_10 = VAR_9->base_addr;
    int VAR_11, VAR_12, VAR_13, VAR_14, VAR_15 = 0;
    u_short VAR_16,VAR_17;
    struct de4x5_private *VAR_18 = FUNC_4(VAR_9);

    VAR_11 = FUNC_0(VAR_18);

    for (VAR_12=0,VAR_13=0,VAR_16=0;VAR_16<3;VAR_16++) {
 VAR_13 <<= 1;
 if (VAR_13 > 0xffff) VAR_13-=0xffff;

 if (VAR_18->bus == VAR_5) {
     if (VAR_18->chipset == VAR_1) {
  while ((VAR_14 = FUNC_2(VAR_2)) < 0);
  VAR_13 += (u_char) VAR_14;
  VAR_9->dev_addr[VAR_12++] = (u_char) VAR_14;
  while ((VAR_14 = FUNC_2(VAR_2)) < 0);
  VAR_13 += (u_short) (VAR_14 << 8);
  VAR_9->dev_addr[VAR_12++] = (u_char) VAR_14;
     } else if (!VAR_11) {
  VAR_9->dev_addr[VAR_12] = (u_char) VAR_18->srom.ieee_addr[VAR_12]; VAR_12++;
  VAR_9->dev_addr[VAR_12] = (u_char) VAR_18->srom.ieee_addr[VAR_12]; VAR_12++;
     } else if ((VAR_11 == VAR_6) || (VAR_11 == VAR_0)) {
  VAR_9->dev_addr[VAR_12] = *((u_char *)&VAR_18->srom + VAR_12); VAR_12++;
  VAR_9->dev_addr[VAR_12] = *((u_char *)&VAR_18->srom + VAR_12); VAR_12++;
     }
 } else {
     VAR_13 += (u_char) (VAR_14 = FUNC_1(VAR_3));
     VAR_9->dev_addr[VAR_12++] = (u_char) VAR_14;
     VAR_13 += (u_short) ((VAR_14 = FUNC_1(VAR_3)) << 8);
     VAR_9->dev_addr[VAR_12++] = (u_char) VAR_14;
 }

 if (VAR_13 > 0xffff) VAR_13-=0xffff;
    }
    if (VAR_13 == 0xffff) VAR_13=0;

    if (VAR_18->bus == VAR_5) {
 if (VAR_18->chipset == VAR_1) {
     while ((VAR_14 = FUNC_2(VAR_2)) < 0);
     VAR_17 = (u_char) VAR_14;
     while ((VAR_14 = FUNC_2(VAR_2)) < 0);
     VAR_17 |= (u_short) (VAR_14 << 8);
     if ((VAR_13 != VAR_17) && (VAR_7)) VAR_15 = -1;
 }
    } else {
 VAR_17 = (u_char) FUNC_1(VAR_3);
 VAR_17 |= (u_short) (FUNC_1(VAR_3) << 8);
 if ((VAR_13 != VAR_17) && (VAR_7)) VAR_15 = -1;
    }


    FUNC_5(VAR_9, VAR_11);
    VAR_15 = FUNC_6(VAR_9, VAR_15);

    return VAR_15;
}
