
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct config_item {int dummy; } ;
typedef int ssize_t ;
struct TYPE_4__ {TYPE_1__* epf; } ;
struct TYPE_3__ {int msi_interrupts; } ;


 int FUNC_0 (char const*,int ,int *) ;
 TYPE_2__* FUNC_1 (struct config_item*) ;

__attribute__((used)) static ssize_t FUNC_2(struct config_item *VAR_0,
         const char *VAR_1, size_t VAR_2)
{
 u8 VAR_3;
 int VAR_4;

 VAR_4 = FUNC_0(VAR_1, 0, &VAR_3);
 if (VAR_4)
  return VAR_4;

 FUNC_1(VAR_0)->epf->msi_interrupts = VAR_3;

 return VAR_2;
}
