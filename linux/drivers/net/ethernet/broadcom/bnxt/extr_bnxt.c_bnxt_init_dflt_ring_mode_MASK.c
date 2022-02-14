
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct bnxt {TYPE_1__* dev; int flags; scalar_t__ tx_nr_rings; scalar_t__ tx_nr_rings_per_tc; } ;
struct TYPE_2__ {int features; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct bnxt*) ;
 int FUNC_1 (struct bnxt*) ;
 scalar_t__ FUNC_2 (struct bnxt*) ;
 scalar_t__ FUNC_3 (struct bnxt*) ;
 int FUNC_4 (struct bnxt*,int) ;
 int FUNC_5 (struct bnxt*,int) ;
 int FUNC_6 (struct bnxt*) ;
 int FUNC_7 (TYPE_1__*,char*) ;

__attribute__((used)) static int FUNC_8(struct bnxt *VAR_2)
{
 int VAR_3;

 if (VAR_2->tx_nr_rings)
  return 0;

 FUNC_6(VAR_2);
 FUNC_0(VAR_2);
 VAR_3 = FUNC_4(VAR_2, 1);
 if (VAR_3) {
  FUNC_7(VAR_2->dev, "Not enough rings available.\n");
  goto init_dflt_ring_err;
 }
 VAR_3 = FUNC_1(VAR_2);
 if (VAR_3)
  goto init_dflt_ring_err;

 VAR_2->tx_nr_rings_per_tc = VAR_2->tx_nr_rings;
 if (FUNC_3(VAR_2) && FUNC_2(VAR_2)) {
  VAR_2->flags |= VAR_0;
  VAR_2->dev->features |= VAR_1;
 }
init_dflt_ring_err:
 FUNC_5(VAR_2, VAR_3);
 return VAR_3;
}
