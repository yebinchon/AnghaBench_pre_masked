
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {unsigned long end; scalar_t__ name; scalar_t__ start; int flags; } ;
struct vme_master_resource {int number; TYPE_1__ bus_resource; int * kern_base; struct vme_bridge* parent; } ;
struct vme_bridge {char* name; int parent; } ;
struct pci_dev {int bus; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (int ,char*,...) ;
 int * FUNC_1 (scalar_t__,unsigned long long) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (scalar_t__) ;
 scalar_t__ FUNC_4 (scalar_t__,int ) ;
 int FUNC_5 (TYPE_1__*,int ,int) ;
 int FUNC_6 (int ,TYPE_1__*,unsigned long long,int,int ,int ,int *,int *) ;
 int FUNC_7 (TYPE_1__*) ;
 int FUNC_8 (char*,char*,char*,int) ;
 struct pci_dev* FUNC_9 (int ) ;

__attribute__((used)) static int FUNC_10(struct vme_master_resource *VAR_5,
 unsigned long long VAR_6)
{
 unsigned long long VAR_7;
 int VAR_8 = 0;
 struct pci_dev *VAR_9;
 struct vme_bridge *VAR_10;

 VAR_10 = VAR_5->parent;

 VAR_9 = FUNC_9(VAR_10->parent);

 VAR_7 = (unsigned long long)(VAR_5->bus_resource.end -
  VAR_5->bus_resource.start);


 if ((VAR_6 != 0) && (VAR_7 == (VAR_6 - 1)))
  return 0;

 if (VAR_7 != 0) {
  FUNC_2(VAR_5->kern_base);
  VAR_5->kern_base = ((void*)0);
  FUNC_3(VAR_5->bus_resource.name);
  FUNC_7(&VAR_5->bus_resource);
  FUNC_5(&VAR_5->bus_resource, 0, sizeof(VAR_5->bus_resource));
 }


 if (VAR_6 == 0)
  return 0;

 if (!VAR_5->bus_resource.name) {
  VAR_5->bus_resource.name = FUNC_4(VAR_4+3, VAR_1);
  if (!VAR_5->bus_resource.name) {
   VAR_8 = -VAR_0;
   goto err_name;
  }
 }

 FUNC_8((char *)VAR_5->bus_resource.name, "%s.%d", VAR_10->name,
  VAR_5->number);

 VAR_5->bus_resource.start = 0;
 VAR_5->bus_resource.end = (unsigned long)VAR_6;
 VAR_5->bus_resource.flags = VAR_2;

 VAR_8 = FUNC_6(VAR_9->bus,
  &VAR_5->bus_resource, VAR_6, 0x10000, VAR_3,
  0, ((void*)0), ((void*)0));
 if (VAR_8) {
  FUNC_0(VAR_10->parent, "Failed to allocate mem "
   "resource for window %d size 0x%lx start 0x%lx\n",
   VAR_5->number, (unsigned long)VAR_6,
   (unsigned long)VAR_5->bus_resource.start);
  goto err_resource;
 }

 VAR_5->kern_base = FUNC_1(
  VAR_5->bus_resource.start, VAR_6);
 if (!VAR_5->kern_base) {
  FUNC_0(VAR_10->parent, "Failed to remap resource\n");
  VAR_8 = -VAR_0;
  goto err_remap;
 }

 return 0;

err_remap:
 FUNC_7(&VAR_5->bus_resource);
err_resource:
 FUNC_3(VAR_5->bus_resource.name);
 FUNC_5(&VAR_5->bus_resource, 0, sizeof(VAR_5->bus_resource));
err_name:
 return VAR_8;
}
