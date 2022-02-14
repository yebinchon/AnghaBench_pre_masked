
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timespec64 {int tv_nsec; int tv_sec; } ;
struct ravb_private {struct net_device* ndev; } ;
struct net_device {int dummy; } ;
typedef int s64 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct ravb_private*,int ) ;
 int FUNC_1 (struct net_device*,int ) ;

__attribute__((used)) static int FUNC_2(struct ravb_private *VAR_4, struct timespec64 *VAR_5)
{
 struct net_device *VAR_6 = VAR_4->ndev;
 int VAR_7;

 VAR_7 = FUNC_0(VAR_4, VAR_0);
 if (VAR_7)
  return VAR_7;

 VAR_5->tv_nsec = FUNC_1(VAR_6, VAR_1);
 VAR_5->tv_sec = FUNC_1(VAR_6, VAR_2) |
  ((s64)FUNC_1(VAR_6, VAR_3) << 32);

 return 0;
}
