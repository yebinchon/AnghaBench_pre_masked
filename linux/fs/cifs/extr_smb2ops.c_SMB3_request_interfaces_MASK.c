
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct network_interface_info_ioctl_rsp {int dummy; } ;
struct cifs_tcon {struct cifs_ses* ses; } ;
struct cifs_ses {size_t iface_count; int iface_lock; int iface_last_update; struct network_interface_info_ioctl_rsp* iface_list; } ;
typedef struct network_interface_info_ioctl_rsp cifs_server_iface ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (unsigned int const,struct cifs_tcon*,int ,int ,int ,int,int *,int ,int ,char**,unsigned int*) ;
 int VAR_5 ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int ,char*,int) ;
 int VAR_6 ;
 int FUNC_3 (struct network_interface_info_ioctl_rsp*) ;
 int FUNC_4 (struct network_interface_info_ioctl_rsp*,unsigned int,struct network_interface_info_ioctl_rsp**,size_t*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static int
FUNC_7(const unsigned int VAR_7, struct cifs_tcon *VAR_8)
{
 int VAR_9;
 unsigned int VAR_10 = 0;
 struct network_interface_info_ioctl_rsp *VAR_11 = ((void*)0);
 struct cifs_server_iface *VAR_12;
 size_t VAR_13;
 struct cifs_ses *VAR_14 = VAR_8->ses;

 VAR_9 = FUNC_0(VAR_7, VAR_8, VAR_4, VAR_4,
   VAR_2, 1 ,
   ((void*)0) , 0 ,
   VAR_0, (char **)&VAR_11, &VAR_10);
 if (VAR_9 == -VAR_1) {
  FUNC_1(VAR_3,
    "server does not support query network interfaces\n");
  goto out;
 } else if (VAR_9 != 0) {
  FUNC_2(VAR_5, "error %d on ioctl to get interface list\n", VAR_9);
  goto out;
 }

 VAR_9 = FUNC_4(VAR_11, VAR_10,
         &VAR_12, &VAR_13);
 if (VAR_9)
  goto out;

 FUNC_5(&VAR_14->iface_lock);
 FUNC_3(VAR_14->iface_list);
 VAR_14->iface_list = VAR_12;
 VAR_14->iface_count = VAR_13;
 VAR_14->iface_last_update = VAR_6;
 FUNC_6(&VAR_14->iface_lock);

out:
 FUNC_3(VAR_11);
 return VAR_9;
}
