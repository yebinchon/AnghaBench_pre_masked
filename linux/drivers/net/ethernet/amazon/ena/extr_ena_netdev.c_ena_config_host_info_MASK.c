
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct pci_dev {int devfn; TYPE_2__* bus; } ;
struct TYPE_4__ {struct ena_admin_host_info* host_info; } ;
struct ena_com_dev {TYPE_1__ host_attr; } ;
struct ena_admin_host_info {int bdf; char driver_version; int driver_supported_features; int num_cpus; int os_dist_str; scalar_t__ os_dist; int kernel_ver_str; int kernel_ver; int os_type; } ;
struct TYPE_6__ {int release; int version; } ;
struct TYPE_5__ {int number; } ;


 char VAR_0 ;
 char VAR_1 ;
 char VAR_2 ;
 int VAR_3 ;
 char VAR_4 ;
 char VAR_5 ;
 char VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (struct ena_com_dev*) ;
 int FUNC_1 (struct ena_com_dev*) ;
 int FUNC_2 (struct ena_com_dev*) ;
 int FUNC_3 () ;
 int FUNC_4 (char*) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (int ,int ,int) ;
 int FUNC_7 (int ,int ,int) ;
 TYPE_3__* FUNC_8 () ;

__attribute__((used)) static void FUNC_9(struct ena_com_dev *VAR_10,
     struct pci_dev *VAR_11)
{
 struct ena_admin_host_info *VAR_12;
 int VAR_13;


 VAR_13 = FUNC_0(VAR_10);
 if (VAR_13) {
  FUNC_4("Cannot allocate host info\n");
  return;
 }

 VAR_12 = VAR_10->host_attr.host_info;

 VAR_12->bdf = (VAR_11->bus->number << 8) | VAR_11->devfn;
 VAR_12->os_type = VAR_7;
 VAR_12->kernel_ver = VAR_9;
 FUNC_6(VAR_12->kernel_ver_str, FUNC_8()->version,
  sizeof(VAR_12->kernel_ver_str) - 1);
 VAR_12->os_dist = 0;
 FUNC_7(VAR_12->os_dist_str, FUNC_8()->release,
  sizeof(VAR_12->os_dist_str) - 1);
 VAR_12->driver_version =
  (VAR_0) |
  (VAR_1 << VAR_4) |
  (VAR_2 << VAR_6) |
  ("K"[0] << VAR_5);
 VAR_12->num_cpus = FUNC_3();

 VAR_12->driver_supported_features =
  VAR_3;

 VAR_13 = FUNC_2(VAR_10);
 if (VAR_13) {
  if (VAR_13 == -VAR_8)
   FUNC_5("Cannot set host attributes\n");
  else
   FUNC_4("Cannot set host attributes\n");

  goto err;
 }

 return;

err:
 FUNC_1(VAR_10);
}
