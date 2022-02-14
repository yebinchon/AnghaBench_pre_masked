
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct gb_power_supply {TYPE_1__* supplies; } ;
struct gb_connection {int dummy; } ;
struct TYPE_2__ {struct gb_connection* connection; } ;



__attribute__((used)) static struct gb_connection *FUNC_0(struct gb_power_supply *VAR_0)
{
 return VAR_0->supplies->connection;
}
