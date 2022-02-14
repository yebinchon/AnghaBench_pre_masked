
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xhci_hcd {int dummy; } ;
struct xhci_file_map {int name; } ;
struct file_operations {int dummy; } ;
struct dentry {int dummy; } ;


 int FUNC_0 (int ,int,struct dentry*,void*,struct file_operations const*) ;

__attribute__((used)) static void FUNC_1(struct xhci_hcd *VAR_0,
          struct xhci_file_map *VAR_1,
          size_t VAR_2, void *VAR_3,
          struct dentry *VAR_4,
          const struct file_operations *VAR_5)
{
 int VAR_6;

 for (VAR_6 = 0; VAR_6 < VAR_2; VAR_6++)
  FUNC_0(VAR_1[VAR_6].name, 0444, VAR_4, VAR_3, VAR_5);
}
