
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ad5820_device {int standby; int vana; } ;


 int FUNC_0 (struct ad5820_device*) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static int FUNC_2(struct ad5820_device *VAR_0, bool VAR_1)
{
 int VAR_2 = 0, VAR_3;





 if (VAR_1) {
  VAR_0->standby = 1;
  VAR_2 = FUNC_0(VAR_0);
 }

 VAR_3 = FUNC_1(VAR_0->vana);
 if (VAR_2)
  return VAR_2;
 return VAR_3;
}
