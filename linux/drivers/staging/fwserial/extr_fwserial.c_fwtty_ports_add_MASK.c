
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct fw_serial {TYPE_1__** ports; } ;
struct TYPE_2__ {int index; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int VAR_2 ;
 TYPE_1__** VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;

__attribute__((used)) static int FUNC_2(struct fw_serial *VAR_6)
{
 int VAR_7 = -VAR_0;
 int VAR_8, VAR_9;

 if (VAR_4)
  return VAR_7;

 FUNC_0(&VAR_5);
 for (VAR_8 = 0; VAR_8 + VAR_2 <= VAR_1; VAR_8 += VAR_2) {
  if (!VAR_3[VAR_8]) {
   for (VAR_9 = 0; VAR_9 < VAR_2; ++VAR_8, ++VAR_9) {
    VAR_6->ports[VAR_9]->index = VAR_8;
    VAR_3[VAR_8] = VAR_6->ports[VAR_9];
   }
   VAR_7 = 0;
   break;
  }
 }
 FUNC_1(&VAR_5);
 return VAR_7;
}
