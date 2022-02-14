
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nlattr {int dummy; } ;
struct net_device {int dummy; } ;
struct net {int dummy; } ;
struct macsec_secy {int dummy; } ;
struct macsec_rx_sc {int dummy; } ;
typedef int sci_t ;
struct TYPE_2__ {struct macsec_secy secy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct macsec_rx_sc* FUNC_0 (struct net_device*) ;
 struct macsec_rx_sc* FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (struct net_device*) ;
 size_t VAR_2 ;
 struct macsec_rx_sc* FUNC_3 (struct macsec_secy*,int ) ;
 struct net_device* FUNC_4 (struct net*,struct nlattr**) ;
 TYPE_1__* FUNC_5 (struct net_device*) ;
 int FUNC_6 (struct nlattr*) ;

__attribute__((used)) static struct macsec_rx_sc *FUNC_7(struct net *VAR_3,
          struct nlattr **VAR_4,
          struct nlattr **VAR_5,
          struct net_device **VAR_6,
          struct macsec_secy **VAR_7)
{
 struct net_device *VAR_8;
 struct macsec_secy *VAR_9;
 struct macsec_rx_sc *VAR_10;
 sci_t VAR_11;

 VAR_8 = FUNC_4(VAR_3, VAR_4);
 if (FUNC_2(VAR_8))
  return FUNC_0(VAR_8);

 VAR_9 = &FUNC_5(VAR_8)->secy;

 if (!VAR_5[VAR_2])
  return FUNC_1(-VAR_0);

 VAR_11 = FUNC_6(VAR_5[VAR_2]);
 VAR_10 = FUNC_3(VAR_9, VAR_11);
 if (!VAR_10)
  return FUNC_1(-VAR_1);

 *VAR_7 = VAR_9;
 *VAR_6 = VAR_8;

 return VAR_10;
}
