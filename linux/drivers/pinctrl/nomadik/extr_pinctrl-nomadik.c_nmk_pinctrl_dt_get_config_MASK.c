
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct device_node {int dummy; } ;
struct TYPE_3__ {int property; } ;


 int FUNC_0 (TYPE_1__*) ;
 int VAR_0 ;
 TYPE_1__* VAR_1 ;
 scalar_t__ FUNC_1 (int,int,unsigned long*) ;
 int FUNC_2 (struct device_node*,int ,int*) ;

__attribute__((used)) static bool FUNC_3(struct device_node *VAR_2,
  unsigned long *VAR_3)
{
 bool VAR_4 = 0;
 unsigned long VAR_5 = 0;
 int VAR_6, VAR_7, VAR_8;

 for (VAR_6 = 0; VAR_6 < FUNC_0(VAR_1); VAR_6++) {
  VAR_8 = FUNC_2(VAR_2,
    VAR_1[VAR_6].property, &VAR_7);
  if (VAR_8 != -VAR_0) {
   if (FUNC_1(VAR_6, VAR_7, &VAR_5) == 0) {
    *VAR_3 |= VAR_5;
    VAR_4 = 1;
   }
  }
 }

 return VAR_4;
}
