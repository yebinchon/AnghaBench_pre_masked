
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u8 ;
struct nlattr {int dummy; } ;
struct net_device {int dummy; } ;
struct net {int dummy; } ;
struct macsec_secy {int dummy; } ;
struct macsec_rx_sc {int * sa; } ;
struct macsec_rx_sa {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct macsec_rx_sa* FUNC_0 (struct macsec_rx_sc*) ;
 struct macsec_rx_sa* FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (struct macsec_rx_sc*) ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 struct macsec_rx_sc* FUNC_3 (struct net*,struct nlattr**,struct nlattr**,struct net_device**,struct macsec_secy**) ;
 size_t FUNC_4 (struct nlattr*) ;
 struct macsec_rx_sa* FUNC_5 (int ) ;

__attribute__((used)) static struct macsec_rx_sa *FUNC_6(struct net *VAR_4,
          struct nlattr **VAR_5,
          struct nlattr **VAR_6,
          struct nlattr **VAR_7,
          struct net_device **VAR_8,
          struct macsec_secy **VAR_9,
          struct macsec_rx_sc **VAR_10,
          u8 *VAR_11)
{
 struct macsec_rx_sc *VAR_12;
 struct macsec_rx_sa *VAR_13;

 if (!VAR_7[VAR_3])
  return FUNC_1(-VAR_0);

 *VAR_11 = FUNC_4(VAR_7[VAR_3]);
 if (*VAR_11 >= VAR_2)
  return FUNC_1(-VAR_0);

 VAR_12 = FUNC_3(VAR_4, VAR_5, VAR_6, VAR_8, VAR_9);
 if (FUNC_2(VAR_12))
  return FUNC_0(VAR_12);

 VAR_13 = FUNC_5(VAR_12->sa[*VAR_11]);
 if (!VAR_13)
  return FUNC_1(-VAR_1);

 *VAR_10 = VAR_12;
 return VAR_13;
}
