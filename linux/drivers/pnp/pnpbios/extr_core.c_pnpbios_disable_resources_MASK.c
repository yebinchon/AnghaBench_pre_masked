
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct pnp_dev {int flags; int number; } ;
struct pnp_bios_node {int dummy; } ;
struct TYPE_2__ {int max_node_size; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (struct pnp_bios_node*) ;
 struct pnp_bios_node* FUNC_1 (int ,int ) ;
 TYPE_1__ VAR_6 ;
 scalar_t__ FUNC_2 (int *,char,struct pnp_bios_node*) ;
 int FUNC_3 (int ,char,struct pnp_bios_node*) ;
 int FUNC_4 (struct pnp_dev*) ;
 int FUNC_5 (struct pnp_bios_node*) ;

__attribute__((used)) static int FUNC_6(struct pnp_dev *VAR_7)
{
 struct pnp_bios_node *VAR_8;
 u8 VAR_9 = VAR_7->number;
 int VAR_10;

 if (VAR_7->flags & VAR_4 || !FUNC_4(VAR_7))
  return -VAR_2;

 VAR_8 = FUNC_1(VAR_6.max_node_size, VAR_3);
 if (!VAR_8)
  return -VAR_1;

 if (FUNC_2(&VAR_9, (char)VAR_5, VAR_8)) {
  FUNC_0(VAR_8);
  return -VAR_0;
 }
 FUNC_5(VAR_8);

 VAR_10 = FUNC_3(VAR_7->number, (char)VAR_5, VAR_8);
 FUNC_0(VAR_8);
 if (VAR_10 > 0)
  VAR_10 = -1;
 return VAR_10;
}
