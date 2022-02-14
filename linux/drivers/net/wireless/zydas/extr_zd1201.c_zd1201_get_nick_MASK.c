
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct iw_request_info {int dummy; } ;
struct iw_point {int flags; int length; } ;


 int FUNC_0 (char*,char*) ;
 int FUNC_1 (char*) ;

__attribute__((used)) static int FUNC_2(struct net_device *VAR_0, struct iw_request_info *VAR_1,
    struct iw_point *VAR_2, char *VAR_3)
{
 FUNC_0(VAR_3, "zd1201");
 VAR_2->flags = 1;
 VAR_2->length = FUNC_1(VAR_3);
 return 0;
}
