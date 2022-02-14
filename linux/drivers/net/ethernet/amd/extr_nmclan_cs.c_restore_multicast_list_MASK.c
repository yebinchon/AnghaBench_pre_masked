
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct net_device {unsigned int base_addr; int flags; int name; } ;
struct TYPE_4__ {int multicast_num_addrs; } ;
typedef TYPE_1__ mace_private ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (TYPE_1__*,unsigned int,int ,int) ;
 TYPE_1__* FUNC_1 (struct net_device*) ;
 int FUNC_2 (char*,int ,int ) ;

__attribute__((used)) static void FUNC_3(struct net_device *VAR_7)
{
  unsigned int VAR_8 = VAR_7->base_addr;
  mace_private *VAR_9 = FUNC_1(VAR_7);

  FUNC_2("%s: restoring Rx mode to %d addresses.\n", VAR_7->name,
 VAR_9->multicast_num_addrs);

  if (VAR_7->flags & VAR_0) {

    FUNC_0(VAR_9,VAR_8, VAR_5, VAR_6);
    FUNC_0(VAR_9, VAR_8, VAR_1,
      VAR_4 | VAR_3 | VAR_2
    );
  } else {

    FUNC_0(VAR_9, VAR_8, VAR_5, VAR_6);
    FUNC_0(VAR_9, VAR_8, VAR_1, VAR_3 | VAR_2);
  }
}
