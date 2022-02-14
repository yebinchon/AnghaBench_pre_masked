
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int u8 ;
struct sockaddr_storage {int ss_family; int * __data; } ;
struct sockaddr {int dummy; } ;
struct slave {TYPE_3__* dev; } ;
struct TYPE_8__ {int fail_over_mac; } ;
struct bonding {TYPE_1__ params; TYPE_2__* dev; } ;
struct TYPE_10__ {int type; int addr_len; int * dev_addr; } ;
struct TYPE_9__ {int type; int addr_len; int * dev_addr; } ;




 int VAR_0 ;
 struct slave* FUNC_0 (struct bonding*,struct slave*) ;
 int FUNC_1 (int *,int *,int ) ;
 int FUNC_2 (TYPE_2__*,TYPE_3__*) ;
 int FUNC_3 (TYPE_3__*,struct sockaddr*,int *) ;
 int FUNC_4 (TYPE_2__*,char*,int) ;
 int FUNC_5 (TYPE_2__*,TYPE_3__*,char*,int) ;

__attribute__((used)) static void FUNC_6(struct bonding *VAR_1,
      struct slave *VAR_2,
      struct slave *VAR_3)
{
 u8 VAR_4[VAR_0];
 struct sockaddr_storage VAR_5;
 int VAR_6;

 switch (VAR_1->params.fail_over_mac) {
 case 129:
  if (VAR_2) {
   VAR_6 = FUNC_2(VAR_1->dev, VAR_2->dev);
   if (VAR_6)
    FUNC_5(VAR_1->dev, VAR_2->dev, "Error %d setting bond MAC from slave\n",
       -VAR_6);
  }
  break;
 case 128:




  if (!VAR_2)
   return;

  if (!VAR_3)
   VAR_3 = FUNC_0(VAR_1, VAR_2);

  if (VAR_3) {
   FUNC_1(VAR_4, VAR_2->dev->dev_addr,
       VAR_2->dev->addr_len);
   FUNC_1(VAR_5.__data,
       VAR_3->dev->dev_addr,
       VAR_3->dev->addr_len);
   VAR_5.ss_family = VAR_2->dev->type;
  } else {
   FUNC_1(VAR_5.__data, VAR_1->dev->dev_addr,
       VAR_1->dev->addr_len);
   VAR_5.ss_family = VAR_1->dev->type;
  }

  VAR_6 = FUNC_3(VAR_2->dev,
      (struct sockaddr *)&VAR_5, ((void*)0));
  if (VAR_6) {
   FUNC_5(VAR_1->dev, VAR_2->dev, "Error %d setting MAC of new active slave\n",
      -VAR_6);
   goto out;
  }

  if (!VAR_3)
   goto out;

  FUNC_1(VAR_5.__data, VAR_4,
      VAR_2->dev->addr_len);
  VAR_5.ss_family = VAR_3->dev->type;

  VAR_6 = FUNC_3(VAR_3->dev,
      (struct sockaddr *)&VAR_5, ((void*)0));
  if (VAR_6)
   FUNC_5(VAR_1->dev, VAR_3->dev, "Error %d setting MAC of old active slave\n",
      -VAR_6);
out:
  break;
 default:
  FUNC_4(VAR_1->dev, "bond_do_fail_over_mac impossible: bad policy %d\n",
      VAR_1->params.fail_over_mac);
  break;
 }

}
