
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct zd1201 {int essidlen; int essid; } ;
struct net_device {int dummy; } ;
struct iw_request_info {int dummy; } ;
struct iw_point {int flags; int length; } ;


 int FUNC_0 (char*,int ,int ) ;
 struct zd1201* FUNC_1 (struct net_device*) ;

__attribute__((used)) static int FUNC_2(struct net_device *VAR_0,
    struct iw_request_info *VAR_1, struct iw_point *VAR_2, char *VAR_3)
{
 struct zd1201 *VAR_4 = FUNC_1(VAR_0);

 FUNC_0(VAR_3, VAR_4->essid, VAR_4->essidlen);
 VAR_2->flags = 1;
 VAR_2->length = VAR_4->essidlen;

 return 0;
}
