
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct zd1201 {scalar_t__ mac_enabled; scalar_t__ monitor; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct zd1201*,int ,int ,int ,int ) ;
 int FUNC_1 (struct zd1201*,int ,int ) ;

__attribute__((used)) static int FUNC_2(struct zd1201 *VAR_2)
{
 int VAR_3;

 if (!VAR_2->mac_enabled)
  return 0;
 if (VAR_2->monitor) {
  VAR_3 = FUNC_1(VAR_2, VAR_1, 0);
  if (VAR_3)
   return VAR_3;
 }

 VAR_3 = FUNC_0(VAR_2, VAR_0, 0, 0, 0);
 if (!VAR_3)
  VAR_2->mac_enabled = 0;
 return VAR_3;
}
