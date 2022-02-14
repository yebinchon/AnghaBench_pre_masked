
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct xdp_frame {int dummy; } ;
struct net_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct net_device*,struct xdp_frame*) ;
 int FUNC_1 (struct net_device*) ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (struct xdp_frame*) ;

__attribute__((used)) static int FUNC_4(struct net_device *VAR_3, int VAR_4,
         struct xdp_frame **VAR_5, u32 VAR_6)
{
 int VAR_7 = 0;
 int VAR_8, VAR_9;

 if (FUNC_2(VAR_6 & ~VAR_2))
  return -VAR_0;

 if (!FUNC_1(VAR_3))
  return -VAR_1;

 for (VAR_8 = 0; VAR_8 < VAR_4; VAR_8++) {
  struct xdp_frame *VAR_10 = VAR_5[VAR_8];

  VAR_9 = FUNC_0(VAR_3, VAR_10);
  if (VAR_9) {
   FUNC_3(VAR_10);
   VAR_7++;
  }
 }

 return VAR_4 - VAR_7;
}
