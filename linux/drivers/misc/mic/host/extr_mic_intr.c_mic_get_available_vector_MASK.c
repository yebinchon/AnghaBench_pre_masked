
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct msix_entry {int dummy; } ;
struct mic_irq_info {int num_vectors; struct msix_entry* msix_entries; int * mic_msi_map; } ;
struct mic_device {struct mic_irq_info irq_info; } ;



__attribute__((used)) static struct msix_entry *FUNC_0(struct mic_device *VAR_0)
{
 int VAR_1;
 struct mic_irq_info *VAR_2 = &VAR_0->irq_info;

 for (VAR_1 = 0; VAR_1 < VAR_2->num_vectors; VAR_1++)
  if (!VAR_2->mic_msi_map[VAR_1])
   return &VAR_2->msix_entries[VAR_1];
 return ((void*)0);
}
