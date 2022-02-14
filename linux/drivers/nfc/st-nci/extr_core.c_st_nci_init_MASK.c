
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nci_mode_set_cmd {int mode; int cmd_type; } ;
struct nci_dev {int dummy; } ;
typedef int __u8 ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct nci_dev*,int ,int,int *) ;

__attribute__((used)) static int FUNC_1(struct nci_dev *VAR_2)
{
 struct nci_mode_set_cmd VAR_3;

 VAR_3.cmd_type = VAR_1;
 VAR_3.mode = 1;

 return FUNC_0(VAR_2, VAR_0,
   sizeof(struct nci_mode_set_cmd), (__u8 *)&VAR_3);
}
