
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct b44 {int flags; int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,char*,...) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(struct b44 *VAR_4)
{
 if (!FUNC_1(VAR_4->dev)) {
  FUNC_0(VAR_4->dev, "Link is down\n");
 } else {
  FUNC_0(VAR_4->dev, "Link is up at %d Mbps, %s duplex\n",
       (VAR_4->flags & VAR_0) ? 100 : 10,
       (VAR_4->flags & VAR_1) ? "full" : "half");

  FUNC_0(VAR_4->dev, "Flow control is %s for TX and %s for RX\n",
       (VAR_4->flags & VAR_3) ? "on" : "off",
       (VAR_4->flags & VAR_2) ? "on" : "off");
 }
}
