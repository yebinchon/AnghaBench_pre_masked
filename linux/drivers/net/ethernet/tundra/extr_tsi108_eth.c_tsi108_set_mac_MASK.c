
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct tsi108_prv_data {int misclock; int txlock; scalar_t__ link_up; scalar_t__ txfree; } ;
struct net_device {unsigned char* dev_addr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int) ;
 int FUNC_1 (void*) ;
 struct tsi108_prv_data* FUNC_2 (struct net_device*) ;
 int FUNC_3 (struct net_device*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static int FUNC_8(struct net_device *VAR_3, void *VAR_4)
{
 struct tsi108_prv_data *VAR_5 = FUNC_2(VAR_3);
 u32 VAR_6, VAR_7;
 int VAR_8;

 if (!FUNC_1(VAR_4))
  return -VAR_0;

 for (VAR_8 = 0; VAR_8 < 6; VAR_8++)

  VAR_3->dev_addr[VAR_8] = ((unsigned char *)VAR_4)[VAR_8 + 2];

 VAR_7 = (VAR_3->dev_addr[0] << 16) | (VAR_3->dev_addr[1] << 24);

 VAR_6 = (VAR_3->dev_addr[2] << 0) | (VAR_3->dev_addr[3] << 8) |
     (VAR_3->dev_addr[4] << 16) | (VAR_3->dev_addr[5] << 24);

 FUNC_5(&VAR_5->misclock);
 FUNC_0(VAR_1, VAR_6);
 FUNC_0(VAR_2, VAR_7);
 FUNC_4(&VAR_5->txlock);

 if (VAR_5->txfree && VAR_5->link_up)
  FUNC_3(VAR_3);

 FUNC_6(&VAR_5->txlock);
 FUNC_7(&VAR_5->misclock);
 return 0;
}
