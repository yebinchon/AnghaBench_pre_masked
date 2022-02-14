
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct octeon_device {int dummy; } ;
struct octeon_config {int dummy; } ;


 scalar_t__ FUNC_0 (struct octeon_device*,int ) ;
 scalar_t__ FUNC_1 (struct octeon_device*) ;
 scalar_t__ FUNC_2 (struct octeon_device*) ;
 scalar_t__ FUNC_3 (struct octeon_device*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

struct octeon_config *FUNC_4(struct octeon_device *VAR_3)
{
 struct octeon_config *VAR_4 = ((void*)0);





 if (FUNC_3(VAR_3)) {
  VAR_4 =
   (struct octeon_config *)(FUNC_0(VAR_3, VAR_2));
 } else if (FUNC_1(VAR_3)) {
  VAR_4 = (struct octeon_config *)
   (FUNC_0(VAR_3, VAR_0));
 } else if (FUNC_2(VAR_3)) {
  VAR_4 = (struct octeon_config *)
   (FUNC_0(VAR_3, VAR_1));
 }
 return VAR_4;
}
