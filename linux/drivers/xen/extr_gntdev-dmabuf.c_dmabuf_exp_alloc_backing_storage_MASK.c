
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gntdev_priv {int dummy; } ;
struct gntdev_grant_map {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct gntdev_grant_map* FUNC_0 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int) ;
 struct gntdev_grant_map* FUNC_2 (struct gntdev_priv*,int,int) ;
 int FUNC_3 (int *,struct gntdev_grant_map*) ;
 int FUNC_4 (char*,int) ;
 scalar_t__ FUNC_5 (int) ;

__attribute__((used)) static struct gntdev_grant_map *
FUNC_6(struct gntdev_priv *VAR_4, int VAR_5,
     int VAR_6)
{
 struct gntdev_grant_map *VAR_7;

 if (FUNC_5(VAR_6 <= 0))
  return FUNC_0(-VAR_0);

 if ((VAR_5 & VAR_3) &&
     (VAR_5 & VAR_2)) {
  FUNC_4("Wrong dma-buf flags: 0x%x\n", VAR_5);
  return FUNC_0(-VAR_0);
 }

 VAR_7 = FUNC_2(VAR_4, VAR_6, VAR_5);
 if (!VAR_7)
  return FUNC_0(-VAR_1);

 if (FUNC_5(FUNC_1(VAR_6))) {
  FUNC_4("can't map %d pages: over limit\n", VAR_6);
  FUNC_3(((void*)0), VAR_7);
  return FUNC_0(-VAR_1);
 }
 return VAR_7;
}
