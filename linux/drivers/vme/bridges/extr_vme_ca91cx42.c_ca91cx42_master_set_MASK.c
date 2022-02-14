
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {scalar_t__ start; } ;
struct vme_master_resource {unsigned int number; int lock; TYPE_1__ bus_resource; struct vme_bridge* parent; } ;
struct vme_bridge {int parent; struct ca91cx42_driver* driver_priv; } ;
struct ca91cx42_driver {scalar_t__ base; } ;


 scalar_t__* VAR_0 ;
 scalar_t__* VAR_1 ;
 scalar_t__* VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 unsigned int VAR_7 ;
 unsigned int VAR_8 ;
 unsigned int VAR_9 ;
 unsigned int VAR_10 ;
 unsigned int VAR_11 ;
 unsigned int VAR_12 ;
 unsigned int VAR_13 ;
 unsigned int VAR_14 ;
 unsigned int VAR_15 ;
 unsigned int VAR_16 ;
 unsigned int VAR_17 ;
 unsigned int VAR_18 ;
 unsigned int VAR_19 ;
 unsigned int VAR_20 ;
 unsigned int VAR_21 ;
 unsigned int VAR_22 ;
 scalar_t__* VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;




 int VAR_26 ;





 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;




 int FUNC_0 (struct vme_master_resource*,unsigned long long) ;
 int FUNC_1 (struct vme_master_resource*) ;
 int FUNC_2 (int ,char*) ;
 unsigned int FUNC_3 (scalar_t__) ;
 int FUNC_4 (unsigned int,scalar_t__) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static int FUNC_7(struct vme_master_resource *VAR_30, int VAR_31,
 unsigned long long VAR_32, unsigned long long VAR_33, u32 VAR_34,
 u32 VAR_35, u32 VAR_36)
{
 int VAR_37 = 0;
 unsigned int VAR_38, VAR_39 = 0;
 unsigned int VAR_40 = 0;
 unsigned long long VAR_41, VAR_42, VAR_43;
 struct vme_bridge *VAR_44;
 struct ca91cx42_driver *VAR_45;

 VAR_44 = VAR_30->parent;

 VAR_45 = VAR_44->driver_priv;

 VAR_38 = VAR_30->number;

 if ((VAR_38 == 0) || (VAR_38 == 4))
  VAR_39 = 0x1000;
 else
  VAR_39 = 0x10000;


 if (VAR_32 & (VAR_39 - 1)) {
  FUNC_2(VAR_44->parent, "Invalid VME Window "
   "alignment\n");
  VAR_37 = -VAR_24;
  goto err_window;
 }
 if (VAR_33 & (VAR_39 - 1)) {
  FUNC_2(VAR_44->parent, "Invalid VME Window "
   "alignment\n");
  VAR_37 = -VAR_24;
  goto err_window;
 }

 FUNC_5(&VAR_30->lock);





 VAR_37 = FUNC_0(VAR_30, VAR_33);
 if (VAR_37) {
  FUNC_6(&VAR_30->lock);
  FUNC_2(VAR_44->parent, "Unable to allocate memory "
   "for resource name\n");
  VAR_37 = -VAR_25;
  goto err_res;
 }

 VAR_43 = (unsigned long long)VAR_30->bus_resource.start;





 VAR_41 = VAR_43 + VAR_33;
 VAR_42 = VAR_32 - VAR_43;


 VAR_40 = FUNC_3(VAR_45->base + VAR_2[VAR_38]);
 VAR_40 &= ~VAR_3;
 FUNC_4(VAR_40, VAR_45->base + VAR_2[VAR_38]);


 VAR_40 &= ~VAR_16;
 if (VAR_35 & VAR_26)
  VAR_40 |= VAR_15;
 if (VAR_35 & VAR_27)
  VAR_40 |= VAR_17;


 VAR_40 &= ~VAR_22;
 switch (VAR_36) {
 case 132:
  VAR_40 |= VAR_21;
  break;
 case 135:
  VAR_40 |= VAR_18;
  break;
 case 134:
  VAR_40 |= VAR_19;
  break;
 case 133:
  VAR_40 |= VAR_20;
  break;
 default:
  FUNC_6(&VAR_30->lock);
  FUNC_2(VAR_44->parent, "Invalid data width\n");
  VAR_37 = -VAR_24;
  goto err_dwidth;
  break;
 }


 VAR_40 &= ~VAR_12;
 switch (VAR_34) {
 case 140:
  VAR_40 |= VAR_8;
  break;
 case 139:
  VAR_40 |= VAR_9;
  break;
 case 138:
  VAR_40 |= VAR_10;
  break;
 case 136:
  VAR_40 |= VAR_11;
  break;
 case 131:
  VAR_40 |= VAR_13;
  break;
 case 130:
  VAR_40 |= VAR_14;
  break;
 case 137:
 case 129:
 case 128:
 default:
  FUNC_6(&VAR_30->lock);
  FUNC_2(VAR_44->parent, "Invalid address space\n");
  VAR_37 = -VAR_24;
  goto err_aspace;
  break;
 }

 VAR_40 &= ~(VAR_4 | VAR_6);
 if (VAR_35 & VAR_29)
  VAR_40 |= VAR_7;
 if (VAR_35 & VAR_28)
  VAR_40 |= VAR_5;


 FUNC_4(VAR_43, VAR_45->base + VAR_1[VAR_38]);
 FUNC_4(VAR_41, VAR_45->base + VAR_0[VAR_38]);
 FUNC_4(VAR_42, VAR_45->base + VAR_23[VAR_38]);


 FUNC_4(VAR_40, VAR_45->base + VAR_2[VAR_38]);

 if (VAR_31)
  VAR_40 |= VAR_3;

 FUNC_4(VAR_40, VAR_45->base + VAR_2[VAR_38]);

 FUNC_6(&VAR_30->lock);
 return 0;

err_aspace:
err_dwidth:
 FUNC_1(VAR_30);
err_res:
err_window:
 return VAR_37;
}
