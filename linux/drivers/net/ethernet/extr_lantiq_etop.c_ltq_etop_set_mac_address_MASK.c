
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;
struct net_device {int * dev_addr; } ;
struct ltq_etop_priv {int lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct net_device*,void*) ;
 int FUNC_1 (int,int ) ;
 struct ltq_etop_priv* FUNC_2 (struct net_device*) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;

__attribute__((used)) static int
FUNC_5(struct net_device *VAR_2, void *VAR_3)
{
 int VAR_4 = FUNC_0(VAR_2, VAR_3);

 if (!VAR_4) {
  struct ltq_etop_priv *VAR_5 = FUNC_2(VAR_2);
  unsigned long VAR_6;


  FUNC_3(&VAR_5->lock, VAR_6);
  FUNC_1(*((u32 *)VAR_2->dev_addr), VAR_0);
  FUNC_1(*((u16 *)&VAR_2->dev_addr[4]) << 16,
   VAR_1);
  FUNC_4(&VAR_5->lock, VAR_6);
 }
 return VAR_4;
}
