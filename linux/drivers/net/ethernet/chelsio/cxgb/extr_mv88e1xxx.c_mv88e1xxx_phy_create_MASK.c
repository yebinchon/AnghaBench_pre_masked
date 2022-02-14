
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct net_device {int dummy; } ;
struct mdio_ops {int dummy; } ;
struct cphy {int dummy; } ;
struct adapter {int dummy; } ;
struct TYPE_2__ {int caps; scalar_t__ chip_phy; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 TYPE_1__* FUNC_0 (struct adapter*) ;
 int FUNC_1 (struct cphy*,struct net_device*,int,int *,struct mdio_ops const*) ;
 scalar_t__ FUNC_2 (struct adapter*) ;
 struct cphy* FUNC_3 (int,int ) ;
 int FUNC_4 (struct cphy*,int) ;
 int VAR_6 ;
 struct adapter* FUNC_5 (struct net_device*) ;
 int FUNC_6 (struct cphy*,int ,int) ;

__attribute__((used)) static struct cphy *FUNC_7(struct net_device *VAR_7, int VAR_8,
      const struct mdio_ops *VAR_9)
{
 struct adapter *VAR_10 = FUNC_5(VAR_7);
 struct cphy *VAR_11 = FUNC_3(sizeof(*VAR_11), VAR_1);

 if (!VAR_11)
  return ((void*)0);

 FUNC_1(VAR_11, VAR_7, VAR_8, &VAR_6, VAR_9);


 if ((FUNC_0(VAR_10)->caps & VAR_5) &&
     FUNC_0(VAR_10)->chip_phy == VAR_0) {



  (void) FUNC_6(VAR_11,
    VAR_2, 0xB);
  (void) FUNC_6(VAR_11,
    VAR_3, 0x8004);
 }
 (void) FUNC_4(VAR_11, 1);


 if (FUNC_2(VAR_10)) {
  (void) FUNC_6(VAR_11,
    VAR_4, 0x1);
 }

 return VAR_11;
}
