
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






union iwreq_data {int name; } ;
struct iw_request_info {int dummy; } ;
struct ieee80211_device {int modulation; int mode; scalar_t__ state; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int ,char*,int ) ;
 int FUNC_1 (int ,char*,int ) ;

int FUNC_2(struct ieee80211_device *VAR_8,
        struct iw_request_info *VAR_9,
        union iwreq_data *VAR_10, char *VAR_11)
{
 FUNC_1(VAR_10->name, "802.11", VAR_7);
 if (VAR_8->modulation & VAR_0) {
  FUNC_0(VAR_10->name, "b", VAR_7);
  if (VAR_8->modulation & VAR_4)
   FUNC_0(VAR_10->name, "/g", VAR_7);
 } else if (VAR_8->modulation & VAR_4) {
  FUNC_0(VAR_10->name, "g", VAR_7);
 }

 if (VAR_8->mode & (VAR_5 | VAR_6))
  FUNC_0(VAR_10->name, "/n", VAR_7);

 if ((VAR_8->state == VAR_1) ||
     (VAR_8->state == VAR_2))
  FUNC_0(VAR_10->name, " linked", VAR_7);
 else if (VAR_8->state != VAR_3)
  FUNC_0(VAR_10->name, " link..", VAR_7);

 return 0;
}
