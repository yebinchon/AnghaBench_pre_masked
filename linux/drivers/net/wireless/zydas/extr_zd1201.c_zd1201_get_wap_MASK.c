
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int updated; int level; } ;
struct TYPE_4__ {TYPE_1__ qual; } ;
struct zd1201 {TYPE_2__ iwstats; } ;
struct sockaddr {unsigned char* sa_data; } ;
struct net_device {int dummy; } ;
struct iw_request_info {int dummy; } ;
typedef int __le16 ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 struct zd1201* FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct zd1201*,int ,unsigned char*,int) ;

__attribute__((used)) static int FUNC_3(struct net_device *VAR_2,
    struct iw_request_info *VAR_3, struct sockaddr *VAR_4, char *VAR_5)
{
 struct zd1201 *VAR_6 = FUNC_1(VAR_2);
 unsigned char VAR_7[6];

 if (!FUNC_2(VAR_6, VAR_0, VAR_7, 6)) {






  VAR_6->iwstats.qual.level = FUNC_0(((__le16 *)VAR_7)[1]);

  VAR_6->iwstats.qual.updated = 2;
 }

 return FUNC_2(VAR_6, VAR_1, VAR_4->sa_data, 6);
}
