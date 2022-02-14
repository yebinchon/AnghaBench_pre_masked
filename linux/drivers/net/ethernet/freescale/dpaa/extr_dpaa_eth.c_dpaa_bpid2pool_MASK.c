
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dpaa_bp {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int) ;
 struct dpaa_bp** VAR_1 ;

__attribute__((used)) static struct dpaa_bp *FUNC_1(int VAR_2)
{
 if (FUNC_0(VAR_2 < 0 || VAR_2 >= VAR_0))
  return ((void*)0);

 return VAR_1[VAR_2];
}
