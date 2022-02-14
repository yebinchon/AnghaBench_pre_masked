
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct slcan {int tx_work; int lock; struct net_device* dev; int magic; } ;
struct net_device {int base_addr; void* ml_priv; } ;
struct can_ml_priv {int dummy; } ;


 int FUNC_0 (int,int ) ;
 int VAR_0 ;
 int FUNC_1 (int *,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct net_device* FUNC_2 (int,char*,int ,int ) ;
 int VAR_4 ;
 struct slcan* FUNC_3 (struct net_device*) ;
 int VAR_5 ;
 struct net_device** VAR_6 ;
 int VAR_7 ;
 int FUNC_4 (int *) ;
 int FUNC_5 (char*,char*,int) ;

__attribute__((used)) static struct slcan *FUNC_6(void)
{
 int VAR_8;
 char VAR_9[VAR_0];
 struct net_device *VAR_10 = ((void*)0);
 struct slcan *VAR_11;
 int VAR_12;

 for (VAR_8 = 0; VAR_8 < VAR_4; VAR_8++) {
  VAR_10 = VAR_6[VAR_8];
  if (VAR_10 == ((void*)0))
   break;

 }


 if (VAR_8 >= VAR_4)
  return ((void*)0);

 FUNC_5(VAR_9, "slcan%d", VAR_8);
 VAR_12 = FUNC_0(sizeof(*VAR_11), VAR_1) + sizeof(struct can_ml_priv);
 VAR_10 = FUNC_2(VAR_12, VAR_9, VAR_2, VAR_5);
 if (!VAR_10)
  return ((void*)0);

 VAR_10->base_addr = VAR_8;
 VAR_11 = FUNC_3(VAR_10);
 VAR_10->ml_priv = (void *)VAR_11 + FUNC_0(sizeof(*VAR_11), VAR_1);


 VAR_11->magic = VAR_3;
 VAR_11->dev = VAR_10;
 FUNC_4(&VAR_11->lock);
 FUNC_1(&VAR_11->tx_work, VAR_7);
 VAR_6[VAR_8] = VAR_10;

 return VAR_11;
}
