
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct iw_point {int length; int flags; } ;
union iwreq_data {struct iw_point encoding; } ;
typedef int uint ;
struct net_device {int dummy; } ;
struct mlme_priv {int dummy; } ;
struct iw_request_info {int dummy; } ;
struct TYPE_4__ {int dot11PrivacyKeyIndex; int ndisencryptstatus; int* dot11DefKeylen; int ndisauthtype; TYPE_1__* dot11DefKey; } ;
struct adapter {TYPE_2__ securitypriv; struct mlme_priv mlmepriv; } ;
struct TYPE_3__ {int skey; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;





 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_0 (struct mlme_priv*,int ) ;
 int FUNC_1 (char*,int ,int) ;
 scalar_t__ FUNC_2 (struct net_device*) ;

__attribute__((used)) static int FUNC_3(struct net_device *VAR_12,
       struct iw_request_info *VAR_13,
       union iwreq_data *VAR_14, char *VAR_15)
{
 uint VAR_16;
 struct adapter *VAR_17 = (struct adapter *)FUNC_2(VAR_12);
 struct iw_point *VAR_18 = &(VAR_14->encoding);
 struct mlme_priv *VAR_19 = &(VAR_17->mlmepriv);

 if (!FUNC_0(VAR_19, VAR_11)) {
  if (!FUNC_0(VAR_19, VAR_10)) {
   VAR_18->length = 0;
   VAR_18->flags |= VAR_1;
   return 0;
  }
 }

 VAR_16 = VAR_18->flags & VAR_3;

 if (VAR_16) {
  if (VAR_16 > VAR_9)
   return -VAR_0;
  VAR_16--;
 } else {
  VAR_16 = VAR_17->securitypriv.dot11PrivacyKeyIndex;
 }

 VAR_18->flags = VAR_16 + 1;

 switch (VAR_17->securitypriv.ndisencryptstatus) {
 case 128:
 case 129:
  VAR_18->length = 0;
  VAR_18->flags |= VAR_1;
  break;
 case 132:
  VAR_18->length = VAR_17->securitypriv.dot11DefKeylen[VAR_16];
  if (VAR_18->length) {
   FUNC_1(VAR_15, VAR_17->securitypriv.dot11DefKey[VAR_16].skey, VAR_17->securitypriv.dot11DefKeylen[VAR_16]);

   VAR_18->flags |= VAR_2;

   if (VAR_17->securitypriv.ndisauthtype == VAR_7)
    VAR_18->flags |= VAR_5;
   else if (VAR_17->securitypriv.ndisauthtype == VAR_8)
    VAR_18->flags |= VAR_6;
  } else {
   VAR_18->length = 0;
   VAR_18->flags |= VAR_1;
  }
  break;
 case 131:
 case 130:
  VAR_18->length = 16;
  VAR_18->flags |= (VAR_2 | VAR_5 | VAR_4);
  break;
 default:
  VAR_18->length = 0;
  VAR_18->flags |= VAR_1;
  break;
 }

 return 0;
}
