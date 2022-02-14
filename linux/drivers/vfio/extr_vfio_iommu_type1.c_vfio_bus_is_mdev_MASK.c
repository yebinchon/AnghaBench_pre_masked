
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bus_type {int dummy; } ;


 int VAR_0 ;
 struct bus_type* FUNC_0 (int ) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static bool FUNC_2(struct bus_type *VAR_1)
{
 struct bus_type *VAR_2;
 bool VAR_3 = 0;

 VAR_2 = FUNC_0(VAR_0);
 if (VAR_2) {
  VAR_3 = (VAR_1 == VAR_2);
  FUNC_1(VAR_0);
 }

 return VAR_3;
}
