
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int base_addr; int flags; } ;
struct arcnet_local {int setup; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,struct net_device*,char*) ;
 int FUNC_1 (int,int,int ) ;
 int FUNC_2 (struct arcnet_local*,int,int ) ;
 struct arcnet_local* FUNC_3 (struct net_device*) ;

__attribute__((used)) static void FUNC_4(struct net_device *VAR_6)
{
 struct arcnet_local *VAR_7 = FUNC_3(VAR_6);
 int VAR_8 = VAR_6->base_addr;

 if ((VAR_6->flags & VAR_2) && (VAR_6->flags & VAR_3)) {

  if (!(VAR_7->setup & VAR_4))
   FUNC_0(VAR_1, VAR_6, "Setting promiscuous flag...\n");
  FUNC_2(VAR_7, VAR_8, VAR_5);
  VAR_7->setup |= VAR_4;
  FUNC_1(VAR_7->setup, VAR_8, VAR_0);
 } else {

  if ((VAR_7->setup & VAR_4))
   FUNC_0(VAR_1, VAR_6, "Resetting promiscuous flag...\n");
  FUNC_2(VAR_7, VAR_8, VAR_5);
  VAR_7->setup &= ~VAR_4;
  FUNC_1(VAR_7->setup, VAR_8, VAR_0);
 }
}
