
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct vme_bridge {struct tsi148_driver* driver_priv; } ;
struct tsi148_driver {int vme_int; int iack_queue; scalar_t__ base; } ;


 scalar_t__ VAR_0 ;
 int* VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int,scalar_t__) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct tsi148_driver*) ;
 int FUNC_5 (int ,int ) ;

__attribute__((used)) static int FUNC_6(struct vme_bridge *VAR_3, int VAR_4,
 int VAR_5)
{
 u32 VAR_6;
 struct tsi148_driver *VAR_7;

 VAR_7 = VAR_3->driver_priv;

 FUNC_2(&VAR_7->vme_int);


 VAR_6 = FUNC_0(VAR_7->base + VAR_0);


 VAR_6 = (VAR_6 & ~VAR_2) |
  (VAR_5 & VAR_2);
 FUNC_1(VAR_6, VAR_7->base + VAR_0);


 VAR_6 = VAR_6 | VAR_1[VAR_4];
 FUNC_1(VAR_6, VAR_7->base + VAR_0);


 FUNC_5(VAR_7->iack_queue,
  FUNC_4(VAR_7));

 FUNC_3(&VAR_7->vme_int);

 return 0;
}
