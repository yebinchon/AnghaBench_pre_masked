
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tulip_private {unsigned int* advertising; unsigned int csr6; int * phys; scalar_t__ full_duplex; int full_duplex_lock; } ;
struct net_device {int dev; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 unsigned int VAR_5 ;
 int FUNC_0 (int *,char*,...) ;
 scalar_t__ FUNC_1 (int ,unsigned int) ;
 struct tulip_private* FUNC_2 (struct net_device*) ;
 int VAR_6 ;
 void* FUNC_3 (struct net_device*,int ,int ) ;
 int FUNC_4 (struct tulip_private*) ;

int FUNC_5(struct net_device *VAR_7)
{
 struct tulip_private *VAR_8 = FUNC_2(VAR_7);
 unsigned int VAR_9, VAR_10, VAR_11, VAR_12;

 VAR_9 = FUNC_3(VAR_7, VAR_8->phys[0], VAR_3);
 VAR_10 = FUNC_3(VAR_7, VAR_8->phys[0], VAR_4);
 if (VAR_6 > 1)
  FUNC_0(&VAR_7->dev, "MII status %04x, Link partner report %04x\n",
    VAR_9, VAR_10);
 if (VAR_9 == 0xffff)
  return -2;
 if ((VAR_9 & VAR_0) == 0) {
  int VAR_13 = FUNC_3(VAR_7, VAR_8->phys[0], VAR_3);
  if ((VAR_13 & VAR_0) == 0) {
   if (VAR_6 > 1)
    FUNC_0(&VAR_7->dev,
      "No link beat on the MII interface, status %04x\n",
      VAR_13);
   return -1;
  }
 }
 VAR_11 = VAR_10 & VAR_8->advertising[0];
 VAR_8->full_duplex = FUNC_1(VAR_8->full_duplex_lock, VAR_11);

 VAR_12 = VAR_8->csr6;

 if (VAR_11 & VAR_2) VAR_12 &= ~VAR_5;
 else VAR_12 |= VAR_5;
 if (VAR_8->full_duplex) VAR_12 |= VAR_1;
 else VAR_12 &= ~VAR_1;

 if (VAR_12 != VAR_8->csr6) {
  VAR_8->csr6 = VAR_12;
  FUNC_4(VAR_8);

  if (VAR_6 > 0)
   FUNC_0(&VAR_7->dev,
     "Setting %s-duplex based on MII#%d link partner capability of %04x\n",
     VAR_8->full_duplex ? "full" : "half",
     VAR_8->phys[0], VAR_10);
  return 1;
 }

 return 0;
}
