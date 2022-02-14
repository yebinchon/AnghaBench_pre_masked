
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef scalar_t__ u32 ;
typedef int u16 ;
struct vme_master_resource {int number; int lock; struct vme_bridge* parent; } ;
struct vme_bridge {struct fake_driver* driver_priv; } ;
struct fake_driver {TYPE_1__* masters; } ;
typedef int ssize_t ;
typedef unsigned long long loff_t ;
struct TYPE_2__ {unsigned long long vme_base; scalar_t__ aspace; scalar_t__ cycle; scalar_t__ dwidth; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (struct fake_driver*,int *,unsigned long long,scalar_t__,scalar_t__) ;
 int FUNC_1 (struct fake_driver*,scalar_t__*,unsigned long long,scalar_t__,scalar_t__) ;
 int FUNC_2 (struct fake_driver*,int *,unsigned long long,scalar_t__,scalar_t__) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static ssize_t FUNC_5(struct vme_master_resource *VAR_3, void *VAR_4,
  size_t VAR_5, loff_t VAR_6)
{
 int VAR_7 = 0;
 u32 VAR_8, VAR_9, VAR_10;
 unsigned long long VAR_11;
 int VAR_12;
 unsigned int VAR_13 = 0;
 unsigned int VAR_14;

 struct vme_bridge *VAR_15;
 struct fake_driver *VAR_16;

 VAR_15 = VAR_3->parent;

 VAR_16 = VAR_15->driver_priv;

 VAR_12 = VAR_3->number;

 VAR_11 = VAR_16->masters[VAR_12].vme_base + VAR_6;
 VAR_8 = VAR_16->masters[VAR_12].aspace;
 VAR_9 = VAR_16->masters[VAR_12].cycle;
 VAR_10 = VAR_16->masters[VAR_12].dwidth;

 FUNC_3(&VAR_3->lock);




 if (VAR_11 & 0x1) {
  FUNC_2(VAR_16, (u8 *)VAR_4, VAR_11, VAR_8, VAR_9);
  VAR_13 += 1;
  if (VAR_13 == VAR_5)
   goto out;
 }

 if ((VAR_10 == VAR_0) || (VAR_10 == VAR_1)) {
  if ((VAR_11 + VAR_13) & 0x2) {
   if ((VAR_5 - VAR_13) < 2) {
    FUNC_2(VAR_16, (u8 *)(VAR_4 + VAR_13),
      VAR_11 + VAR_13, VAR_8, VAR_9);
    VAR_13 += 1;
    goto out;
   } else {
    FUNC_0(VAR_16, (u16 *)(VAR_4 + VAR_13),
      VAR_11 + VAR_13, VAR_8, VAR_9);
    VAR_13 += 2;
   }
  }
 }

 if (VAR_10 == VAR_1) {
  VAR_14 = (VAR_5 - VAR_13) & ~0x3;
  while (VAR_13 < VAR_14) {
   FUNC_1(VAR_16, (u32 *)(VAR_4 + VAR_13),
     VAR_11 + VAR_13, VAR_8, VAR_9);
   VAR_13 += 4;
  }
 } else if (VAR_10 == VAR_0) {
  VAR_14 = (VAR_5 - VAR_13) & ~0x3;
  while (VAR_13 < VAR_14) {
   FUNC_0(VAR_16, (u16 *)(VAR_4 + VAR_13),
     VAR_11 + VAR_13, VAR_8, VAR_9);
   VAR_13 += 2;
  }
 } else if (VAR_10 == VAR_2) {
  VAR_14 = (VAR_5 - VAR_13);
  while (VAR_13 < VAR_14) {
   FUNC_2(VAR_16, (u8 *)(VAR_4 + VAR_13), VAR_11 + VAR_13,
     VAR_8, VAR_9);
   VAR_13 += 1;
  }

 }

 if ((VAR_10 == VAR_0) || (VAR_10 == VAR_1)) {
  if ((VAR_5 - VAR_13) & 0x2) {
   FUNC_0(VAR_16, (u16 *)(VAR_4 + VAR_13),
     VAR_11 + VAR_13, VAR_8, VAR_9);
   VAR_13 += 2;
  }
 }

 if ((VAR_5 - VAR_13) & 0x1) {
  FUNC_2(VAR_16, (u8 *)(VAR_4 + VAR_13), VAR_11 + VAR_13, VAR_8,
    VAR_9);
  VAR_13 += 1;
 }

out:
 VAR_7 = VAR_5;

 FUNC_4(&VAR_3->lock);

 return VAR_7;
}
