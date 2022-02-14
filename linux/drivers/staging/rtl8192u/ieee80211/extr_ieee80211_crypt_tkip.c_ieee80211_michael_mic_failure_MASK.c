
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int wrqu ;
struct TYPE_4__ {int length; } ;
struct TYPE_3__ {int sa_data; int sa_family; } ;
union iwreq_data {int flags; TYPE_2__ data; TYPE_1__ src_addr; } ;
struct rtl_80211_hdr_4addr {int* addr1; int addr2; } ;
struct net_device {int dummy; } ;
struct iw_michaelmicfailure {int flags; TYPE_2__ data; TYPE_1__ src_addr; } ;
typedef int ev ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (union iwreq_data*,int ,int) ;
 int FUNC_2 (struct net_device*,int ,union iwreq_data*,char*) ;

__attribute__((used)) static void FUNC_3(struct net_device *VAR_6,
           struct rtl_80211_hdr_4addr *VAR_7,
           int VAR_8)
{
 union iwreq_data VAR_9;
 struct iw_michaelmicfailure VAR_10;


 FUNC_1(&VAR_10, 0, sizeof(VAR_10));
 VAR_10.flags = VAR_8 & VAR_4;
 if (VAR_7->addr1[0] & 0x01)
  VAR_10.flags |= VAR_3;
 else
  VAR_10.flags |= VAR_5;
 VAR_10.src_addr.sa_family = VAR_0;
 FUNC_0(VAR_10.src_addr.sa_data, VAR_7->addr2, VAR_1);
 FUNC_1(&VAR_9, 0, sizeof(VAR_9));
 VAR_9.data.length = sizeof(VAR_10);
 FUNC_2(VAR_6, VAR_2, &VAR_9, (char *)&VAR_10);
}
