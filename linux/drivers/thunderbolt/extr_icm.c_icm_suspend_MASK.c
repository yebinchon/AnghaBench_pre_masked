
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tb {int nhi; } ;
struct icm {int (* save_devices ) (struct tb*) ;} ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (struct tb*) ;
 struct icm* FUNC_2 (struct tb*) ;

__attribute__((used)) static int FUNC_3(struct tb *VAR_1)
{
 struct icm *VAR_2 = FUNC_2(VAR_1);

 if (VAR_2->save_devices)
  VAR_2->save_devices(VAR_1);

 FUNC_0(VAR_1->nhi, VAR_0, 0);
 return 0;
}
