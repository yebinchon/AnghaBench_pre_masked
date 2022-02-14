
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
struct rtllib_hdr_4addr {int* addr1; int addr2; } ;
struct net_device {int dummy; } ;
struct iw_michaelmicfailure {int flags; TYPE_2__ data; TYPE_1__ src_addr; } ;
typedef int ev ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (union iwreq_data*,int ,int) ;
 int FUNC_2 (struct net_device*,int ,union iwreq_data*,char*) ;

__attribute__((used)) static void FUNC_3(struct net_device *VAR_5,
           struct rtllib_hdr_4addr *VAR_6,
           int VAR_7)
{
 union iwreq_data VAR_8;
 struct iw_michaelmicfailure VAR_9;


 FUNC_1(&VAR_9, 0, sizeof(VAR_9));
 VAR_9.flags = VAR_7 & VAR_3;
 if (VAR_6->addr1[0] & 0x01)
  VAR_9.flags |= VAR_2;
 else
  VAR_9.flags |= VAR_4;
 VAR_9.src_addr.sa_family = VAR_0;
 FUNC_0(VAR_9.src_addr.sa_data, VAR_6->addr2);
 FUNC_1(&VAR_8, 0, sizeof(VAR_8));
 VAR_8.data.length = sizeof(VAR_9);
 FUNC_2(VAR_5, VAR_1, &VAR_8, (char *) &VAR_9);
}
