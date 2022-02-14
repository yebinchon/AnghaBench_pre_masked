
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct vme_bridge {struct ca91cx42_driver* driver_priv; } ;
struct ca91cx42_driver {int vme_int; scalar_t__ base; int iack_queue; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (struct ca91cx42_driver*,int) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int,scalar_t__) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ,int ) ;

__attribute__((used)) static int FUNC_6(struct vme_bridge *VAR_3, int VAR_4,
 int VAR_5)
{
 u32 VAR_6;
 struct ca91cx42_driver *VAR_7;

 VAR_7 = VAR_3->driver_priv;


 if (VAR_5 & 1)
  return -VAR_0;

 FUNC_3(&VAR_7->vme_int);

 VAR_6 = FUNC_1(VAR_7->base + VAR_2);


 FUNC_2(VAR_5 << 24, VAR_7->base + VAR_1);


 VAR_6 = VAR_6 | (1 << (VAR_4 + 24));
 FUNC_2(VAR_6, VAR_7->base + VAR_2);


 FUNC_5(VAR_7->iack_queue,
     FUNC_0(VAR_7, VAR_4));


 VAR_6 = FUNC_1(VAR_7->base + VAR_2);
 VAR_6 = VAR_6 & ~(1 << (VAR_4 + 24));
 FUNC_2(VAR_6, VAR_7->base + VAR_2);

 FUNC_4(&VAR_7->vme_int);

 return 0;
}
