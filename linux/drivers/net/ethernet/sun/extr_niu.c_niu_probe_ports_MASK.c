
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct niu_parent {scalar_t__ port_phy; } ;
struct niu {struct niu_parent* parent; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (struct niu*,int,int ) ;
 int FUNC_1 (struct niu*,int) ;
 int FUNC_2 (struct niu*,struct niu_parent*) ;

__attribute__((used)) static int FUNC_3(struct niu *VAR_4)
{
 struct niu_parent *VAR_5 = VAR_4->parent;
 int VAR_6, VAR_7;

 if (VAR_5->port_phy == VAR_3) {
  VAR_6 = FUNC_2(VAR_4, VAR_5);
  if (VAR_6)
   return VAR_6;

  FUNC_1(VAR_4, 2);
  for (VAR_7 = 0; VAR_7 <= VAR_1; VAR_7++)
   FUNC_0(VAR_4, VAR_7, 0);
 }

 if (VAR_5->port_phy == VAR_2)
  return -VAR_0;

 return 0;
}
