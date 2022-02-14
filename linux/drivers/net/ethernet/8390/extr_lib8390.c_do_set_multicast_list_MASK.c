
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {unsigned long base_addr; int flags; } ;
struct ei_device {int* mcfilter; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ FUNC_0 (int) ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 int FUNC_2 (int,scalar_t__) ;
 int FUNC_3 (int*,struct net_device*) ;
 int FUNC_4 (int*,int,int) ;
 int FUNC_5 (struct net_device*,char*,int) ;
 int FUNC_6 (struct net_device*) ;
 struct ei_device* FUNC_7 (struct net_device*) ;
 scalar_t__ FUNC_8 (struct net_device*) ;

__attribute__((used)) static void FUNC_9(struct net_device *VAR_8)
{
 unsigned long VAR_9 = VAR_8->base_addr;
 int VAR_10;
 struct ei_device *VAR_11 = FUNC_7(VAR_8);

 if (!(VAR_8->flags&(VAR_7|VAR_6))) {
  FUNC_4(VAR_11->mcfilter, 0, 8);
  if (!FUNC_6(VAR_8))
   FUNC_3(VAR_11->mcfilter, VAR_8);
 } else
  FUNC_4(VAR_11->mcfilter, 0xFF, 8);
 if (FUNC_8(VAR_8))
  FUNC_2(VAR_4, VAR_9 + VAR_5);
 FUNC_2(VAR_1 + VAR_3, VAR_9 + VAR_0);
 for (VAR_10 = 0; VAR_10 < 8; VAR_10++) {
  FUNC_2(VAR_11->mcfilter[VAR_10], VAR_9 + FUNC_0(VAR_10));

  if (FUNC_1(VAR_9 + FUNC_0(VAR_10)) != VAR_11->mcfilter[VAR_10])
   FUNC_5(VAR_8, "Multicast filter read/write mismap %d\n",
       VAR_10);

 }
 FUNC_2(VAR_1 + VAR_2, VAR_9 + VAR_0);

 if (VAR_8->flags&VAR_7)
  FUNC_2(VAR_4 | 0x18, VAR_9 + VAR_5);
 else if (VAR_8->flags & VAR_6 || !FUNC_6(VAR_8))
  FUNC_2(VAR_4 | 0x08, VAR_9 + VAR_5);
 else
  FUNC_2(VAR_4, VAR_9 + VAR_5);
}
