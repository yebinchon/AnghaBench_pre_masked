
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u8 ;
struct pi3usb30532 {scalar_t__ conf; TYPE_1__* client; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int *,char*,int) ;
 int FUNC_1 (TYPE_1__*,int ,scalar_t__) ;

__attribute__((used)) static int FUNC_2(struct pi3usb30532 *VAR_1, u8 VAR_2)
{
 int VAR_3 = 0;

 if (VAR_1->conf == VAR_2)
  return 0;

 VAR_3 = FUNC_1(VAR_1->client, VAR_0, VAR_2);
 if (VAR_3) {
  FUNC_0(&VAR_1->client->dev, "Error writing conf: %d\n", VAR_3);
  return VAR_3;
 }

 VAR_1->conf = VAR_2;
 return 0;
}
