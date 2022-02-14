
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int cfg; } ;
struct atmel_pmecc_user {TYPE_1__ cache; } ;


 int VAR_0 ;

__attribute__((used)) static int FUNC_0(struct atmel_pmecc_user *VAR_1)
{
 return VAR_1->cache.cfg & VAR_0 ? 1024 : 512;
}
