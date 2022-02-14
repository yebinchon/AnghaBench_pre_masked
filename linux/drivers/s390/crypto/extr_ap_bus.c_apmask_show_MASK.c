
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct bus_type {int dummy; } ;
typedef int ssize_t ;
struct TYPE_2__ {int * apm; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (char*,int ,char*,int ,int ,int ,int ) ;

__attribute__((used)) static ssize_t FUNC_3(struct bus_type *VAR_4, char *VAR_5)
{
 int VAR_6;

 if (FUNC_0(&VAR_3))
  return -VAR_0;
 VAR_6 = FUNC_2(VAR_5, VAR_1,
        "0x%016lx%016lx%016lx%016lx\n",
        VAR_2.apm[0], VAR_2.apm[1],
        VAR_2.apm[2], VAR_2.apm[3]);
 FUNC_1(&VAR_3);

 return VAR_6;
}
