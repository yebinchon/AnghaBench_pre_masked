
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {unsigned char* dev_addr; } ;
struct bmac_data {int lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (struct net_device*,int ,unsigned short) ;
 struct bmac_data* FUNC_2 (struct net_device*) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_5(struct net_device *VAR_3, void *VAR_4)
{
 struct bmac_data *VAR_5 = FUNC_2(VAR_3);
 unsigned char *VAR_6 = VAR_4;
 unsigned short *VAR_7;
 unsigned long VAR_8;
 int VAR_9;

 FUNC_0(("bmac: enter set_address\n"));
 FUNC_3(&VAR_5->lock, VAR_8);

 for (VAR_9 = 0; VAR_9 < 6; ++VAR_9) {
  VAR_3->dev_addr[VAR_9] = VAR_6[VAR_9];
 }

 VAR_7 = (unsigned short *)VAR_3->dev_addr;
 FUNC_1(VAR_3, VAR_0, *VAR_7++);
 FUNC_1(VAR_3, VAR_1, *VAR_7++);
 FUNC_1(VAR_3, VAR_2, *VAR_7);

 FUNC_4(&VAR_5->lock, VAR_8);
 FUNC_0(("bmac: exit set_address\n"));
 return 0;
}
