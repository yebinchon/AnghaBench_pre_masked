
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct vme_master_resource {unsigned int number; int lock; struct vme_bridge* parent; } ;
struct vme_bridge {struct fake_driver* driver_priv; } ;
struct fake_driver {TYPE_1__* masters; } ;
struct TYPE_2__ {int enabled; unsigned long long vme_base; unsigned long long size; int aspace; int cycle; int dwidth; } ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static int FUNC_3(struct vme_master_resource *VAR_1, int VAR_2,
  unsigned long long VAR_3, unsigned long long VAR_4,
  u32 VAR_5, u32 VAR_6, u32 VAR_7)
{
 int VAR_8 = 0;
 unsigned int VAR_9;
 struct vme_bridge *VAR_10;
 struct fake_driver *VAR_11;

 VAR_10 = VAR_1->parent;

 VAR_11 = VAR_10->driver_priv;


 if (VAR_3 & 0xFFFF) {
  FUNC_0("Invalid VME Window alignment\n");
  VAR_8 = -VAR_0;
  goto err_window;
 }

 if (VAR_4 & 0xFFFF) {
  FUNC_0("Invalid size alignment\n");
  VAR_8 = -VAR_0;
  goto err_window;
 }

 if ((VAR_4 == 0) && (VAR_2 != 0)) {
  FUNC_0("Size must be non-zero for enabled windows\n");
  VAR_8 = -VAR_0;
  goto err_window;
 }


 switch (VAR_7) {
 case 132:
 case 134:
 case 133:
  break;
 default:
  FUNC_0("Invalid data width\n");
  VAR_8 = -VAR_0;
  goto err_dwidth;
 }


 switch (VAR_5) {
 case 139:
 case 138:
 case 137:
 case 136:
 case 135:
 case 131:
 case 130:
 case 129:
 case 128:
  break;
 default:
  FUNC_0("Invalid address space\n");
  VAR_8 = -VAR_0;
  goto err_aspace;
 }

 FUNC_1(&VAR_1->lock);

 VAR_9 = VAR_1->number;

 VAR_11->masters[VAR_9].enabled = VAR_2;
 VAR_11->masters[VAR_9].vme_base = VAR_3;
 VAR_11->masters[VAR_9].size = VAR_4;
 VAR_11->masters[VAR_9].aspace = VAR_5;
 VAR_11->masters[VAR_9].cycle = VAR_6;
 VAR_11->masters[VAR_9].dwidth = VAR_7;

 FUNC_2(&VAR_1->lock);

 return 0;

err_aspace:
err_dwidth:
err_window:
 return VAR_8;

}
