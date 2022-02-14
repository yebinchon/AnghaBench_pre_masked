
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ type; scalar_t__ size; } ;
struct TYPE_4__ {TYPE_2__ gso; } ;
struct xen_netif_extra_info {TYPE_1__ u; } ;
struct sk_buff {int dummy; } ;
struct TYPE_6__ {scalar_t__ gso_segs; int gso_type; scalar_t__ gso_size; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ FUNC_0 () ;
 int FUNC_1 (char*,...) ;
 TYPE_3__* FUNC_2 (struct sk_buff*) ;

__attribute__((used)) static int FUNC_3(struct sk_buff *VAR_6,
         struct xen_netif_extra_info *VAR_7)
{
 if (!VAR_7->u.gso.size) {
  if (FUNC_0())
   FUNC_1("GSO size must not be zero\n");
  return -VAR_0;
 }

 if (VAR_7->u.gso.type != VAR_4 &&
     VAR_7->u.gso.type != VAR_5) {
  if (FUNC_0())
   FUNC_1("Bad GSO type %d\n", VAR_7->u.gso.type);
  return -VAR_0;
 }

 FUNC_2(VAR_6)->gso_size = VAR_7->u.gso.size;
 FUNC_2(VAR_6)->gso_type =
  (VAR_7->u.gso.type == VAR_4) ?
  VAR_2 :
  VAR_3;


 FUNC_2(VAR_6)->gso_type |= VAR_1;
 FUNC_2(VAR_6)->gso_segs = 0;

 return 0;
}
