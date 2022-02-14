
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct bonding {int * proc_entry; int proc_file_name; struct net_device* dev; } ;
struct bond_net {scalar_t__ proc_dir; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct net_device*) ;
 int FUNC_1 (int ,int ,int ) ;
 struct bond_net* FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,scalar_t__) ;

void FUNC_4(struct bonding *VAR_2)
{
 struct net_device *VAR_3 = VAR_2->dev;
 struct bond_net *VAR_4 = FUNC_2(FUNC_0(VAR_3), VAR_1);

 if (VAR_4->proc_dir && VAR_2->proc_entry) {
  FUNC_3(VAR_2->proc_file_name, VAR_4->proc_dir);
  FUNC_1(VAR_2->proc_file_name, 0, VAR_0);
  VAR_2->proc_entry = ((void*)0);
 }
}
