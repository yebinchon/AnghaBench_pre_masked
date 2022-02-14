
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ad5820_device {int standby; int vana; } ;


 int FUNC_0 (struct ad5820_device*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3(struct ad5820_device *VAR_0, bool VAR_1)
{
 int VAR_2;

 VAR_2 = FUNC_2(VAR_0->vana);
 if (VAR_2 < 0)
  return VAR_2;

 if (VAR_1) {

  VAR_0->standby = 0;
  VAR_2 = FUNC_0(VAR_0);
  if (VAR_2)
   goto fail;
 }
 return 0;

fail:
 VAR_0->standby = 1;
 FUNC_1(VAR_0->vana);

 return VAR_2;
}
