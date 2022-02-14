
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct pnp_dev {int dev; int number; } ;
struct pnp_bios_node {int handle; } ;
struct TYPE_2__ {int max_node_size; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (struct pnp_bios_node*) ;
 struct pnp_bios_node* FUNC_1 (int ,int ) ;
 TYPE_1__ VAR_4 ;
 scalar_t__ FUNC_2 (int *,char,struct pnp_bios_node*) ;
 int FUNC_3 (int ,char,struct pnp_bios_node*) ;
 int FUNC_4 (int *,char*) ;
 int FUNC_5 (struct pnp_dev*) ;
 scalar_t__ FUNC_6 (struct pnp_dev*,struct pnp_bios_node*) ;

__attribute__((used)) static int FUNC_7(struct pnp_dev *VAR_5)
{
 u8 VAR_6 = VAR_5->number;
 struct pnp_bios_node *VAR_7;
 int VAR_8;

 if (!FUNC_5(VAR_5))
  return -VAR_1;

 FUNC_4(&VAR_5->dev, "set resources\n");
 VAR_7 = FUNC_1(VAR_4.max_node_size, VAR_2);
 if (!VAR_7)
  return -1;
 if (FUNC_2(&VAR_6, (char)VAR_3, VAR_7)) {
  FUNC_0(VAR_7);
  return -VAR_0;
 }
 if (FUNC_6(VAR_5, VAR_7) < 0) {
  FUNC_0(VAR_7);
  return -1;
 }
 VAR_8 = FUNC_3(VAR_7->handle, (char)VAR_3, VAR_7);
 FUNC_0(VAR_7);
 if (VAR_8 > 0)
  VAR_8 = -1;
 return VAR_8;
}
