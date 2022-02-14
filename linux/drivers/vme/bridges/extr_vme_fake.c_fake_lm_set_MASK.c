
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct vme_lm_resource {int monitors; int mtx; struct vme_bridge* parent; } ;
struct vme_bridge {struct fake_driver* driver_priv; } ;
struct fake_driver {unsigned long long lm_base; int lm_aspace; int lm_cycle; scalar_t__* lm_callback; } ;


 int VAR_0 ;
 int VAR_1 ;




 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (char*) ;

__attribute__((used)) static int FUNC_3(struct vme_lm_resource *VAR_2, unsigned long long VAR_3,
  u32 VAR_4, u32 VAR_5)
{
 int VAR_6;
 struct vme_bridge *VAR_7;
 struct fake_driver *VAR_8;

 VAR_7 = VAR_2->parent;

 VAR_8 = VAR_7->driver_priv;

 FUNC_0(&VAR_2->mtx);


 for (VAR_6 = 0; VAR_6 < VAR_2->monitors; VAR_6++) {
  if (VAR_8->lm_callback[VAR_6]) {
   FUNC_1(&VAR_2->mtx);
   FUNC_2("Location monitor callback attached, can't reset\n");
   return -VAR_0;
  }
 }

 switch (VAR_4) {
 case 131:
 case 130:
 case 129:
 case 128:
  break;
 default:
  FUNC_1(&VAR_2->mtx);
  FUNC_2("Invalid address space\n");
  return -VAR_1;
 }

 VAR_8->lm_base = VAR_3;
 VAR_8->lm_aspace = VAR_4;
 VAR_8->lm_cycle = VAR_5;

 FUNC_1(&VAR_2->mtx);

 return 0;
}
