
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct net_device {int dummy; } ;
struct iw_request_info {int dummy; } ;
struct iw_point {int flags; } ;


 int FUNC_0 (int ,int ,int ,char*) ;
 int FUNC_1 (struct net_device*) ;

__attribute__((used)) static int
FUNC_2(struct net_device *VAR_0, struct iw_request_info *VAR_1,
  struct iw_point *VAR_2, char *VAR_3)
{
 u32 VAR_4 = VAR_2->flags;

 return FUNC_0(FUNC_1(VAR_0), VAR_4, 0, VAR_3);
}
