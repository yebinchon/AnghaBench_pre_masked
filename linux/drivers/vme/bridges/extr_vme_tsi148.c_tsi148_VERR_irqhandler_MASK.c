
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct vme_bridge {int parent; struct tsi148_driver* driver_priv; } ;
struct tsi148_driver {scalar_t__ base; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_0 (int ,char*,...) ;
 scalar_t__ VAR_7 ;
 void* FUNC_1 (scalar_t__) ;
 int FUNC_2 (int ,scalar_t__) ;
 int FUNC_3 (unsigned int,unsigned int,unsigned long long*) ;
 int FUNC_4 (struct vme_bridge*,unsigned long long,int) ;

__attribute__((used)) static u32 FUNC_5(struct vme_bridge *VAR_8)
{
 unsigned int VAR_9, VAR_10;
 unsigned long long VAR_11;
 u32 VAR_12;
 int VAR_13;
 struct tsi148_driver *VAR_14;

 VAR_14 = VAR_8->driver_priv;

 VAR_9 = FUNC_1(VAR_14->base + VAR_6);
 VAR_10 = FUNC_1(VAR_14->base + VAR_1);
 VAR_12 = FUNC_1(VAR_14->base + VAR_2);
 VAR_13 = (VAR_12 & VAR_3) >> 8;

 FUNC_3(VAR_9, VAR_10, &VAR_11);


 if (VAR_12 & VAR_4) {
  FUNC_0(VAR_8->parent, "VME Bus Exception Overflow "
   "Occurred\n");
 }

 if (VAR_7)
  FUNC_4(VAR_8, VAR_11, VAR_13);
 else
  FUNC_0(VAR_8->parent,
   "VME Bus Error at address: 0x%llx, attributes: %08x\n",
   VAR_11, VAR_12);


 FUNC_2(VAR_5, VAR_14->base + VAR_2);

 return VAR_0;
}
