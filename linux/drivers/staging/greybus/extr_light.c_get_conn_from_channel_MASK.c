
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct gb_connection {int dummy; } ;
struct gb_channel {TYPE_2__* light; } ;
struct TYPE_4__ {TYPE_1__* glights; } ;
struct TYPE_3__ {struct gb_connection* connection; } ;



__attribute__((used)) static struct gb_connection *FUNC_0(struct gb_channel *VAR_0)
{
 return VAR_0->light->glights->connection;
}
