
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pnp_bios_node {int handle; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (char*,int,int ,int *,void*) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (char*,char*,int) ;

int FUNC_2(struct pnp_bios_node *VAR_5)
{
 char VAR_6[3];

 FUNC_1(VAR_6, "%02x", VAR_5->handle);

 if (!VAR_3)
  return -VAR_0;
 if (!VAR_1) {
  FUNC_0(VAR_6, 0644, VAR_3, &VAR_2,
     (void *)(long)(VAR_5->handle));
 }

 if (!VAR_4)
  return -VAR_0;
 if (FUNC_0(VAR_6, 0644, VAR_4, &VAR_2,
        (void *)(long)(VAR_5->handle + 0x100)))
  return 0;
 return -VAR_0;
}
