
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct ds278x_info {TYPE_1__* client; } ;
struct TYPE_2__ {int dev; } ;


 int FUNC_0 (int *,char*) ;
 int FUNC_1 (TYPE_1__*,int) ;

__attribute__((used)) static inline int FUNC_2(struct ds278x_info *VAR_0, int VAR_1, u8 *VAR_2)
{
 int VAR_3;

 VAR_3 = FUNC_1(VAR_0->client, VAR_1);
 if (VAR_3 < 0) {
  FUNC_0(&VAR_0->client->dev, "register read failed\n");
  return VAR_3;
 }

 *VAR_2 = VAR_3;
 return 0;
}
