
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int name; } ;
struct bonding {int proc_file_name; int * proc_entry; struct net_device* dev; } ;
struct bond_net {scalar_t__ proc_dir; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct net_device*) ;
 int FUNC_1 (int ,int ,int ) ;
 struct bond_net* FUNC_2 (int ,int ) ;
 int FUNC_3 (struct net_device*,char*,int ,int ) ;
 int * FUNC_4 (int ,int,scalar_t__,int *,struct bonding*) ;

void FUNC_5(struct bonding *VAR_4)
{
 struct net_device *VAR_5 = VAR_4->dev;
 struct bond_net *VAR_6 = FUNC_2(FUNC_0(VAR_5), VAR_3);

 if (VAR_6->proc_dir) {
  VAR_4->proc_entry = FUNC_4(VAR_5->name, 0444,
    VAR_6->proc_dir, &VAR_2, VAR_4);
  if (VAR_4->proc_entry == ((void*)0))
   FUNC_3(VAR_5, "Cannot create /proc/net/%s/%s\n",
        VAR_0, VAR_5->name);
  else
   FUNC_1(VAR_4->proc_file_name, VAR_5->name, VAR_1);
 }
}
