
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef long u8 ;
struct seq_file {void* private; } ;
struct pnp_bios_node {int size; int data; } ;
struct TYPE_2__ {int max_node_size; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct pnp_bios_node*) ;
 struct pnp_bios_node* FUNC_1 (int ,int ) ;
 TYPE_1__ VAR_3 ;
 scalar_t__ FUNC_2 (long*,int,struct pnp_bios_node*) ;
 int FUNC_3 (struct seq_file*,int ,int) ;

__attribute__((used)) static int FUNC_4(struct seq_file *VAR_4, void *VAR_5)
{
 void *VAR_6 = VAR_4->private;
 struct pnp_bios_node *VAR_7;
 int VAR_8 = (long)VAR_6 >> 8;
 u8 VAR_9 = (long)VAR_6;
 int VAR_10;

 VAR_7 = FUNC_1(VAR_3.max_node_size, VAR_2);
 if (!VAR_7)
  return -VAR_1;
 if (FUNC_2(&VAR_9, VAR_8, VAR_7)) {
  FUNC_0(VAR_7);
  return -VAR_0;
 }
 VAR_10 = VAR_7->size - sizeof(struct pnp_bios_node);
 FUNC_3(VAR_4, VAR_7->data, VAR_10);
 FUNC_0(VAR_7);
 return 0;
}
