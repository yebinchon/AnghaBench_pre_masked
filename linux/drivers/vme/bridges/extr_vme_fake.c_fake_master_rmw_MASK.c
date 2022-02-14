
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef unsigned int u32 ;
struct vme_master_resource {int number; int lock; TYPE_1__* parent; } ;
struct fake_driver {TYPE_2__* masters; } ;
typedef unsigned int loff_t ;
struct TYPE_4__ {unsigned int vme_base; unsigned int aspace; unsigned int cycle; } ;
struct TYPE_3__ {struct fake_driver* driver_priv; } ;


 unsigned int FUNC_0 (struct fake_driver*,unsigned int,unsigned int,unsigned int) ;
 int FUNC_1 (struct fake_driver*,unsigned int*,unsigned int,unsigned int,unsigned int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static unsigned int FUNC_4(struct vme_master_resource *VAR_0,
  unsigned int VAR_1, unsigned int VAR_2, unsigned int VAR_3,
  loff_t VAR_4)
{
 u32 VAR_5, VAR_6;
 u32 VAR_7, VAR_8;
 int VAR_9;
 struct fake_driver *VAR_10;

 VAR_10 = VAR_0->parent->driver_priv;


 VAR_9 = VAR_0->number;

 VAR_6 = VAR_10->masters[VAR_9].vme_base;
 VAR_7 = VAR_10->masters[VAR_9].aspace;
 VAR_8 = VAR_10->masters[VAR_9].cycle;


 FUNC_2(&VAR_0->lock);


 VAR_5 = FUNC_0(VAR_10, VAR_6 + VAR_4, VAR_7, VAR_8);


 if ((VAR_5 && VAR_1) == (VAR_2 && VAR_1)) {
  VAR_5 = VAR_5 | (VAR_1 | VAR_3);
  VAR_5 = VAR_5 & (~VAR_1 | VAR_3);


  FUNC_1(VAR_10, &VAR_5, VAR_6 + VAR_4, VAR_7, VAR_8);
 }


 FUNC_3(&VAR_0->lock);

 return VAR_5;
}
