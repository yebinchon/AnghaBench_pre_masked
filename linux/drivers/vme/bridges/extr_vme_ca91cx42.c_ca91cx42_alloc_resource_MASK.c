
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
 int VAR_4 ;
 scalar_t__ VAR_5 ;
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

__attribute__((used)) static int FUNC_10(struct vme_master_resource *VAR_6,
 unsigned long long VAR_7)
{
 unsigned long long VAR_8;
 int VAR_9 = 0;
 struct pci_dev *VAR_10;
 struct vme_bridge *VAR_11;

 VAR_11 = VAR_6->parent;


 if (!VAR_11->parent) {
  FUNC_0(VAR_11->parent, "Dev entry NULL\n");
  return -VAR_0;
 }
 VAR_10 = FUNC_9(VAR_11->parent);

 VAR_8 = (unsigned long long)(VAR_6->bus_resource.end -
  VAR_6->bus_resource.start);


 if (VAR_8 == (VAR_7 - 1))
  return 0;

 if (VAR_8 != 0) {
  FUNC_2(VAR_6->kern_base);
  VAR_6->kern_base = ((void*)0);
  FUNC_3(VAR_6->bus_resource.name);
  FUNC_7(&VAR_6->bus_resource);
  FUNC_5(&VAR_6->bus_resource, 0, sizeof(VAR_6->bus_resource));
 }

 if (!VAR_6->bus_resource.name) {
  VAR_6->bus_resource.name = FUNC_4(VAR_5+3, VAR_2);
  if (!VAR_6->bus_resource.name) {
   VAR_9 = -VAR_1;
   goto err_name;
  }
 }

 FUNC_8((char *)VAR_6->bus_resource.name, "%s.%d",
  VAR_11->name, VAR_6->number);

 VAR_6->bus_resource.start = 0;
 VAR_6->bus_resource.end = (unsigned long)VAR_7;
 VAR_6->bus_resource.flags = VAR_3;

 VAR_9 = FUNC_6(VAR_10->bus,
  &VAR_6->bus_resource, VAR_7, 0x10000, VAR_4,
  0, ((void*)0), ((void*)0));
 if (VAR_9) {
  FUNC_0(VAR_11->parent, "Failed to allocate mem "
   "resource for window %d size 0x%lx start 0x%lx\n",
   VAR_6->number, (unsigned long)VAR_7,
   (unsigned long)VAR_6->bus_resource.start);
  goto err_resource;
 }

 VAR_6->kern_base = FUNC_1(
  VAR_6->bus_resource.start, VAR_7);
 if (!VAR_6->kern_base) {
  FUNC_0(VAR_11->parent, "Failed to remap resource\n");
  VAR_9 = -VAR_1;
  goto err_remap;
 }

 return 0;

err_remap:
 FUNC_7(&VAR_6->bus_resource);
err_resource:
 FUNC_3(VAR_6->bus_resource.name);
 FUNC_5(&VAR_6->bus_resource, 0, sizeof(VAR_6->bus_resource));
err_name:
 return VAR_9;
}
