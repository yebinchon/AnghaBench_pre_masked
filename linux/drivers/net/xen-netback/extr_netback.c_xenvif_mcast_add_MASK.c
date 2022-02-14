
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct xenvif_mcast_addr {int entry; int addr; } ;
struct xenvif {scalar_t__ fe_mcast_count; int fe_mcast_addr; int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int ,int const*) ;
 struct xenvif_mcast_addr* FUNC_1 (int,int ) ;
 int FUNC_2 (int *,int *) ;
 scalar_t__ FUNC_3 () ;
 int FUNC_4 (int ,char*) ;

__attribute__((used)) static int FUNC_5(struct xenvif *VAR_4, const u8 *VAR_5)
{
 struct xenvif_mcast_addr *VAR_6;

 if (VAR_4->fe_mcast_count == VAR_3) {
  if (FUNC_3())
   FUNC_4(VAR_4->dev,
       "Too many multicast addresses\n");
  return -VAR_1;
 }

 VAR_6 = FUNC_1(sizeof(*VAR_6), VAR_2);
 if (!VAR_6)
  return -VAR_0;

 FUNC_0(VAR_6->addr, VAR_5);
 FUNC_2(&VAR_6->entry, &VAR_4->fe_mcast_addr);
 VAR_4->fe_mcast_count++;

 return 0;
}
