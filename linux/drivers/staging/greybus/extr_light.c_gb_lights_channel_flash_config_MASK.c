
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct gb_connection {TYPE_1__* bundle; } ;
struct gb_channel {int dummy; } ;
struct TYPE_2__ {int dev; } ;


 int FUNC_0 (int *,char*) ;
 struct gb_connection* FUNC_1 (struct gb_channel*) ;

__attribute__((used)) static int FUNC_2(struct gb_channel *VAR_0)
{
 struct gb_connection *VAR_1 = FUNC_1(VAR_0);

 FUNC_0(&VAR_1->bundle->dev, "no support for flash devices\n");
 return 0;
}
