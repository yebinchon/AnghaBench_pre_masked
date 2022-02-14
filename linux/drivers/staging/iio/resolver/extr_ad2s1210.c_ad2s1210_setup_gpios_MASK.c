
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct spi_device {int dev; } ;
struct ad2s1210_state {int * gpios; struct spi_device* sdev; } ;
struct TYPE_3__ {int name; int flags; } ;


 int FUNC_0 (TYPE_1__*) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *,char*,int ,int) ;
 int FUNC_4 (int *,int ,int ) ;
 TYPE_1__* VAR_0 ;

__attribute__((used)) static int FUNC_5(struct ad2s1210_state *VAR_1)
{
 struct spi_device *VAR_2 = VAR_1->sdev;
 int VAR_3, VAR_4;

 for (VAR_3 = 0; VAR_3 < FUNC_0(VAR_0); VAR_3++) {
  VAR_1->gpios[VAR_3] = FUNC_4(&VAR_2->dev, VAR_0[VAR_3].name,
           VAR_0[VAR_3].flags);
  if (FUNC_1(VAR_1->gpios[VAR_3])) {
   VAR_4 = FUNC_2(VAR_1->gpios[VAR_3]);
   FUNC_3(&VAR_2->dev,
    "ad2s1210: failed to request %s GPIO: %d\n",
    VAR_0[VAR_3].name, VAR_4);
   return VAR_4;
  }
 }

 return 0;
}
