
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tty_struct {char* name; int flags; struct ser_device* disc_data; int receive_room; TYPE_1__* ops; } ;
struct ser_device {int node; struct net_device* dev; int tty; } ;
struct net_device {int dummy; } ;
typedef int name ;
struct TYPE_2__ {int * write; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 struct net_device* FUNC_0 (int,char*,int ,int ) ;
 int VAR_11 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct ser_device*,struct tty_struct*) ;
 int FUNC_3 (struct net_device*) ;
 int FUNC_4 (int *,int *) ;
 struct ser_device* FUNC_5 (struct net_device*) ;
 int FUNC_6 (struct net_device*) ;
 int FUNC_7 (struct net_device*) ;
 int FUNC_8 () ;
 int FUNC_9 () ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int ,int *) ;
 int FUNC_12 (char*,int,char*,char*) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (struct tty_struct*) ;
 int FUNC_16 (struct ser_device*) ;

__attribute__((used)) static int FUNC_17(struct tty_struct *VAR_14)
{
 struct ser_device *VAR_15;
 struct net_device *VAR_16;
 char VAR_17[64];
 int VAR_18;


 if (VAR_14->ops->write == ((void*)0))
  return -VAR_5;
 if (!FUNC_1(VAR_0) && !FUNC_1(VAR_1))
  return -VAR_6;


 FUNC_10(((void*)0));

 VAR_18 = FUNC_12(VAR_17, sizeof(VAR_17), "cf%s", VAR_14->name);
 if (VAR_18 >= VAR_7)
  return -VAR_2;
 VAR_16 = FUNC_0(sizeof(*VAR_15), VAR_17, VAR_8,
      VAR_11);
 if (!VAR_16)
  return -VAR_4;

 VAR_15 = FUNC_5(VAR_16);
 VAR_15->tty = FUNC_15(VAR_14);
 VAR_15->dev = VAR_16;
 FUNC_2(VAR_15, VAR_14);
 VAR_14->receive_room = VAR_9;
 VAR_14->disc_data = VAR_15;
 FUNC_11(VAR_10, &VAR_14->flags);
 FUNC_8();
 VAR_18 = FUNC_7(VAR_16);
 if (VAR_18) {
  FUNC_9();
  FUNC_3(VAR_16);
  return -VAR_3;
 }

 FUNC_13(&VAR_13);
 FUNC_4(&VAR_15->node, &VAR_12);
 FUNC_14(&VAR_13);
 FUNC_9();
 FUNC_6(VAR_16);
 FUNC_16(VAR_15);
 return 0;
}
