
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct net_device {int dummy; } ;
struct bnxt_en_dev {int flags; TYPE_1__* ulp_tbl; struct net_device* net; } ;
struct bnxt {int dummy; } ;
struct TYPE_2__ {scalar_t__ msix_requested; } ;


 int FUNC_0 () ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct bnxt*,int,int) ;
 int FUNC_2 (struct bnxt*,int,int) ;
 struct bnxt* FUNC_3 (struct net_device*) ;
 scalar_t__ FUNC_4 (struct net_device*) ;

__attribute__((used)) static int FUNC_5(struct bnxt_en_dev *VAR_3, int VAR_4)
{
 struct net_device *VAR_5 = VAR_3->net;
 struct bnxt *VAR_6 = FUNC_3(VAR_5);

 FUNC_0();
 if (VAR_4 != VAR_1)
  return -VAR_2;

 if (!(VAR_3->flags & VAR_0))
  return 0;

 VAR_3->ulp_tbl[VAR_4].msix_requested = 0;
 VAR_3->flags &= ~VAR_0;
 if (FUNC_4(VAR_5)) {
  FUNC_1(VAR_6, 1, 0);
  FUNC_2(VAR_6, 1, 0);
 }
 return 0;
}
