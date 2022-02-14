
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u8 ;
typedef scalar_t__ u16 ;
struct sk_buff {int dev; scalar_t__ data; } ;
struct fip_header {scalar_t__ fip_subcode; int fip_op; } ;
struct fcoe_ctlr {int dummy; } ;
struct ethhdr {int h_dest; int h_source; } ;
struct TYPE_2__ {int netdev; } ;


 int FUNC_0 (char*,int ,int ) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 TYPE_1__* FUNC_1 (struct fcoe_ctlr*) ;
 scalar_t__ VAR_3 ;
 int FUNC_2 (struct sk_buff*) ;
 scalar_t__ FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (struct sk_buff*) ;

__attribute__((used)) static void FUNC_5(struct fcoe_ctlr *VAR_4, struct sk_buff *VAR_5)
{
 struct fip_header *VAR_6;
 struct ethhdr *VAR_7;
 u16 VAR_8;
 u8 VAR_9;

 VAR_6 = (struct fip_header *) ((void *)VAR_5->data + 2 * VAR_0 + 2);
 VAR_7 = (struct ethhdr *)FUNC_4(VAR_5);
 VAR_8 = FUNC_3(VAR_6->fip_op);
 VAR_9 = VAR_6->fip_subcode;

 if (VAR_8 == VAR_1 && VAR_9 == VAR_2 && VAR_3)
  FUNC_0("Sending FKA from %pM to %pM.\n",
      VAR_7->h_source, VAR_7->h_dest);

 VAR_5->dev = FUNC_1(VAR_4)->netdev;
 FUNC_2(VAR_5);
}
