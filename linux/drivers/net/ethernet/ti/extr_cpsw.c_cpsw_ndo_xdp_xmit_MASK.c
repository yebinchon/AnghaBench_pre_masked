
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct xdp_frame {scalar_t__ len; } ;
struct net_device {int dummy; } ;
struct cpsw_priv {int dummy; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct cpsw_priv*,struct xdp_frame*,int *) ;
 struct cpsw_priv* FUNC_1 (struct net_device*) ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (struct xdp_frame*) ;

__attribute__((used)) static int FUNC_4(struct net_device *VAR_3, int VAR_4,
        struct xdp_frame **VAR_5, u32 VAR_6)
{
 struct cpsw_priv *VAR_7 = FUNC_1(VAR_3);
 struct xdp_frame *VAR_8;
 int VAR_9, VAR_10 = 0;

 if (FUNC_2(VAR_6 & ~VAR_2))
  return -VAR_1;

 for (VAR_9 = 0; VAR_9 < VAR_4; VAR_9++) {
  VAR_8 = VAR_5[VAR_9];
  if (VAR_8->len < VAR_0) {
   FUNC_3(VAR_8);
   VAR_10++;
   continue;
  }

  if (FUNC_0(VAR_7, VAR_8, ((void*)0)))
   VAR_10++;
 }

 return VAR_4 - VAR_10;
}
