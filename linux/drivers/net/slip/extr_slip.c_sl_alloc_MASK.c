
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct slip {int outfill_timer; int keepalive_timer; int mode; int tx_work; int lock; struct net_device* dev; int magic; } ;
struct net_device {int base_addr; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct net_device* FUNC_1 (int,char*,int ,int ) ;
 struct slip* FUNC_2 (struct net_device*) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 struct net_device** VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (char*,char*,int) ;
 int FUNC_5 (int *,int ,int ) ;

__attribute__((used)) static struct slip *FUNC_6(void)
{
 int VAR_10;
 char VAR_11[VAR_0];
 struct net_device *VAR_12 = ((void*)0);
 struct slip *VAR_13;

 for (VAR_10 = 0; VAR_10 < VAR_8; VAR_10++) {
  VAR_12 = VAR_7[VAR_10];
  if (VAR_12 == ((void*)0))
   break;
 }

 if (VAR_10 >= VAR_8)
  return ((void*)0);

 FUNC_4(VAR_11, "sl%d", VAR_10);
 VAR_12 = FUNC_1(sizeof(*VAR_13), VAR_11, VAR_1, VAR_6);
 if (!VAR_12)
  return ((void*)0);

 VAR_12->base_addr = VAR_10;
 VAR_13 = FUNC_2(VAR_12);


 VAR_13->magic = VAR_2;
 VAR_13->dev = VAR_12;
 FUNC_3(&VAR_13->lock);
 FUNC_0(&VAR_13->tx_work, VAR_9);
 VAR_13->mode = VAR_3;





 VAR_7[VAR_10] = VAR_12;
 return VAR_13;
}
