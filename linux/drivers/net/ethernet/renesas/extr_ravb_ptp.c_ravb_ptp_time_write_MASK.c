
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct timespec64 {int tv_nsec; int tv_sec; } ;
struct ravb_private {struct net_device* ndev; } ;
struct net_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct ravb_private*,int ) ;
 int FUNC_1 (struct net_device*,int ) ;
 int FUNC_2 (struct net_device*,int,int ) ;

__attribute__((used)) static int FUNC_3(struct ravb_private *VAR_7,
    const struct timespec64 *VAR_8)
{
 struct net_device *VAR_9 = VAR_7->ndev;
 int VAR_10;
 u32 VAR_11;

 VAR_10 = FUNC_0(VAR_7, VAR_3);
 if (VAR_10)
  return VAR_10;

 VAR_11 = FUNC_1(VAR_9, VAR_1);
 if (VAR_11 & VAR_2)
  return -VAR_0;
 FUNC_2(VAR_9, VAR_8->tv_nsec, VAR_4);
 FUNC_2(VAR_9, VAR_8->tv_sec, VAR_5);
 FUNC_2(VAR_9, (VAR_8->tv_sec >> 32) & 0xffff, VAR_6);
 FUNC_2(VAR_9, VAR_11 | VAR_2, VAR_1);

 return 0;
}
