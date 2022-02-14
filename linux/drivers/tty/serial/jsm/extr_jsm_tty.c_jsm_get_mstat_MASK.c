
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct jsm_channel {unsigned char ch_mostat; unsigned char ch_mistat; TYPE_1__* ch_bd; } ;
struct TYPE_2__ {int pci_dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 unsigned char VAR_7 ;
 unsigned char VAR_8 ;
 unsigned char VAR_9 ;
 unsigned char VAR_10 ;
 unsigned char VAR_11 ;
 unsigned char VAR_12 ;
 int FUNC_0 (int ,int *,char*) ;

__attribute__((used)) static inline int FUNC_1(struct jsm_channel *VAR_13)
{
 unsigned char VAR_14;
 int VAR_15;

 FUNC_0(VAR_0, &VAR_13->ch_bd->pci_dev, "start\n");

 VAR_14 = (VAR_13->ch_mostat | VAR_13->ch_mistat);

 VAR_15 = 0;

 if (VAR_14 & VAR_7)
  VAR_15 |= VAR_4;
 if (VAR_14 & VAR_8)
  VAR_15 |= VAR_6;
 if (VAR_14 & VAR_9)
  VAR_15 |= VAR_2;
 if (VAR_14 & VAR_11)
  VAR_15 |= VAR_3;
 if (VAR_14 & VAR_12)
  VAR_15 |= VAR_5;
 if (VAR_14 & VAR_10)
  VAR_15 |= VAR_1;

 FUNC_0(VAR_0, &VAR_13->ch_bd->pci_dev, "finish\n");
 return VAR_15;
}
