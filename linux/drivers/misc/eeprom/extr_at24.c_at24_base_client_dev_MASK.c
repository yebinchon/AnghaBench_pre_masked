
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct device {int dummy; } ;
struct at24_data {TYPE_2__* client; } ;
struct TYPE_4__ {TYPE_1__* client; } ;
struct TYPE_3__ {struct device dev; } ;



__attribute__((used)) static struct device *FUNC_0(struct at24_data *VAR_0)
{
 return &VAR_0->client[0].client->dev;
}
