
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ice_pkg_ver {scalar_t__ major; scalar_t__ minor; } ;
typedef enum ice_status { ____Placeholder_ice_status } ice_status ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;

__attribute__((used)) static enum ice_status FUNC_0(struct ice_pkg_ver *VAR_3)
{
 if (VAR_3->major != VAR_1 ||
     VAR_3->minor != VAR_2)
  return VAR_0;

 return 0;
}
