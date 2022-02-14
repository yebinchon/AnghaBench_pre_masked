
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct gb_connection {TYPE_1__* bundle; } ;
struct TYPE_2__ {int dev; } ;


 int FUNC_0 (struct gb_connection*) ;
 int FUNC_1 (struct gb_connection*) ;
 int FUNC_2 (struct gb_connection*,int *,int ) ;
 int VAR_0 ;

__attribute__((used)) static int FUNC_3(struct gb_connection *VAR_1)
{
 int VAR_2;

 if (!VAR_1)
  return 0;

 VAR_2 = FUNC_1(VAR_1);
 if (VAR_2)
  return VAR_2;

 VAR_2 = FUNC_2(VAR_1, &VAR_1->bundle->dev,
        VAR_0);
 if (VAR_2) {
  FUNC_0(VAR_1);
  return VAR_2;
 }

 return 0;
}
