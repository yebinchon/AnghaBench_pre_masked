
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct timespec64 {int tv_nsec; int tv_sec; } ;
struct phy_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int,struct phy_device*,int ,int ,int) ;

__attribute__((used)) static int FUNC_1(int VAR_3, struct phy_device *VAR_4,
       const struct timespec64 *VAR_5, u16 VAR_6)
{
 FUNC_0(VAR_3, VAR_4, VAR_0, VAR_2, VAR_5->tv_nsec & 0xffff);
 FUNC_0(VAR_3, VAR_4, VAR_0, VAR_2, VAR_5->tv_nsec >> 16);
 FUNC_0(VAR_3, VAR_4, VAR_0, VAR_2, VAR_5->tv_sec & 0xffff);
 FUNC_0(VAR_3, VAR_4, VAR_0, VAR_2, VAR_5->tv_sec >> 16);

 FUNC_0(VAR_3, VAR_4, VAR_0, VAR_1, VAR_6);

 return 0;
}
