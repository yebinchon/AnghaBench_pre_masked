
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sdw_slave {TYPE_1__* bus; } ;
struct TYPE_2__ {int assigned; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int) ;
 int FUNC_1 (int,int ) ;

__attribute__((used)) static int FUNC_2(struct sdw_slave *VAR_2)
{
 int VAR_3;

 VAR_3 = FUNC_0(VAR_2->bus->assigned, VAR_1);
 if (VAR_3 == VAR_1) {
  VAR_3 = -VAR_0;
  goto err;
 }





 FUNC_1(VAR_3, VAR_2->bus->assigned);

err:
 return VAR_3;
}
