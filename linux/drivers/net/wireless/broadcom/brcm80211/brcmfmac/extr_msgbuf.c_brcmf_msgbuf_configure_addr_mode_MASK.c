
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct brcmf_pub {TYPE_1__* proto; } ;
struct brcmf_msgbuf {int flow; } ;
typedef enum proto_addr_mode { ____Placeholder_proto_addr_mode } proto_addr_mode ;
struct TYPE_2__ {scalar_t__ pd; } ;


 int FUNC_0 (int ,int,int) ;

__attribute__((used)) static void
FUNC_1(struct brcmf_pub *VAR_0, int VAR_1,
     enum proto_addr_mode VAR_2)
{
 struct brcmf_msgbuf *VAR_3 = (struct brcmf_msgbuf *)VAR_0->proto->pd;

 FUNC_0(VAR_3->flow, VAR_1, VAR_2);
}
