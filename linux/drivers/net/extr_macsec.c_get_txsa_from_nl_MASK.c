
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u8 ;
struct nlattr {int dummy; } ;
struct net_device {int dummy; } ;
struct net {int dummy; } ;
struct macsec_tx_sc {int * sa; } ;
struct macsec_tx_sa {int dummy; } ;
struct macsec_secy {struct macsec_tx_sc tx_sc; } ;
struct TYPE_2__ {struct macsec_secy secy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct macsec_tx_sa* FUNC_0 (struct net_device*) ;
 struct macsec_tx_sa* FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (struct net_device*) ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 struct net_device* FUNC_3 (struct net*,struct nlattr**) ;
 TYPE_1__* FUNC_4 (struct net_device*) ;
 size_t FUNC_5 (struct nlattr*) ;
 struct macsec_tx_sa* FUNC_6 (int ) ;

__attribute__((used)) static struct macsec_tx_sa *FUNC_7(struct net *VAR_4,
          struct nlattr **VAR_5,
          struct nlattr **VAR_6,
          struct net_device **VAR_7,
          struct macsec_secy **VAR_8,
          struct macsec_tx_sc **VAR_9,
          u8 *VAR_10)
{
 struct net_device *VAR_11;
 struct macsec_secy *VAR_12;
 struct macsec_tx_sc *VAR_13;
 struct macsec_tx_sa *VAR_14;

 if (!VAR_6[VAR_3])
  return FUNC_1(-VAR_0);

 *VAR_10 = FUNC_5(VAR_6[VAR_3]);

 VAR_11 = FUNC_3(VAR_4, VAR_5);
 if (FUNC_2(VAR_11))
  return FUNC_0(VAR_11);

 if (*VAR_10 >= VAR_2)
  return FUNC_1(-VAR_0);

 VAR_12 = &FUNC_4(VAR_11)->secy;
 VAR_13 = &VAR_12->tx_sc;

 VAR_14 = FUNC_6(VAR_13->sa[*VAR_10]);
 if (!VAR_14)
  return FUNC_1(-VAR_1);

 *VAR_7 = VAR_11;
 *VAR_9 = VAR_13;
 *VAR_8 = VAR_12;
 return VAR_14;
}
