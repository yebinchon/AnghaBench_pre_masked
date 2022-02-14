
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ili9320 {int initialised; int dev; int platdata; TYPE_1__* client; } ;
struct TYPE_2__ {int (* init ) (struct ili9320*,int ) ;} ;


 int FUNC_0 (int ,char*) ;
 int FUNC_1 (struct ili9320*) ;
 int FUNC_2 (struct ili9320*,int ) ;

__attribute__((used)) static inline int FUNC_3(struct ili9320 *VAR_0)
{
 int VAR_1;

 FUNC_1(VAR_0);

 VAR_1 = VAR_0->client->init(VAR_0, VAR_0->platdata);
 if (VAR_1 != 0) {
  FUNC_0(VAR_0->dev, "failed to initialise display\n");
  return VAR_1;
 }

 VAR_0->initialised = 1;
 return 0;
}
