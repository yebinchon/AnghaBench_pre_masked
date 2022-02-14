
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u8 ;
struct sockaddr_storage {int ss_family; int * __data; } ;
struct sockaddr {int dummy; } ;
struct slave {TYPE_3__* dev; } ;
struct TYPE_5__ {scalar_t__ rlb_promisc_timeout_counter; scalar_t__ primary_is_promisc; } ;
struct bonding {TYPE_2__* dev; int curr_active_slave; TYPE_1__ alb_info; } ;
struct TYPE_7__ {int addr_len; int * dev_addr; } ;
struct TYPE_6__ {int * dev_addr; int addr_len; int type; } ;


 scalar_t__ FUNC_0 (struct bonding*) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct bonding*,struct slave*,struct slave*) ;
 int FUNC_2 (struct slave*,int *,int) ;
 int FUNC_3 (struct slave*,int *,int ) ;
 int FUNC_4 (struct slave*,struct slave*) ;
 int FUNC_5 (struct bonding*) ;
 int FUNC_6 (int *,int *,int ) ;
 struct slave* FUNC_7 (struct bonding*,int *) ;
 int FUNC_8 (TYPE_3__*,struct sockaddr*,int *) ;
 int FUNC_9 (TYPE_3__*,int) ;
 int FUNC_10 (int ,struct slave*) ;
 struct slave* FUNC_11 (int ) ;
 int FUNC_12 (struct bonding*,struct slave*,int) ;

void FUNC_13(struct bonding *VAR_2, struct slave *VAR_3)
{
 struct slave *VAR_4;
 struct slave *VAR_5;

 VAR_5 = FUNC_11(VAR_2->curr_active_slave);
 if (VAR_5 == VAR_3)
  return;

 if (VAR_5 && VAR_2->alb_info.primary_is_promisc) {
  FUNC_9(VAR_5->dev, -1);
  VAR_2->alb_info.primary_is_promisc = 0;
  VAR_2->alb_info.rlb_promisc_timeout_counter = 0;
 }

 VAR_4 = VAR_5;
 FUNC_10(VAR_2->curr_active_slave, VAR_3);

 if (!VAR_3 || !FUNC_5(VAR_2))
  return;




 if (!VAR_4)
  VAR_4 = FUNC_7(VAR_2, VAR_2->dev->dev_addr);





 if (VAR_4)
  FUNC_12(VAR_2, VAR_4, 1);
 FUNC_12(VAR_2, VAR_3, 1);




 if (FUNC_0(VAR_2) == VAR_0) {
  struct sockaddr_storage VAR_6;
  u8 VAR_7[VAR_1];

  FUNC_6(VAR_7, VAR_3->dev->dev_addr,
      VAR_3->dev->addr_len);

  FUNC_6(VAR_6.__data, VAR_2->dev->dev_addr,
      VAR_2->dev->addr_len);
  VAR_6.ss_family = VAR_2->dev->type;

  FUNC_8(VAR_3->dev, (struct sockaddr *)&VAR_6,
        ((void*)0));

  FUNC_6(VAR_3->dev->dev_addr, VAR_7,
      VAR_3->dev->addr_len);
 }


 if (VAR_4) {

  FUNC_4(VAR_4, VAR_3);
  FUNC_1(VAR_2, VAR_4, VAR_3);
 } else {

  FUNC_3(VAR_3, VAR_2->dev->dev_addr,
           VAR_2->dev->addr_len);
  FUNC_2(VAR_3, VAR_2->dev->dev_addr,
       0);
 }
}
