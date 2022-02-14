
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct m920x_state {int* filtering_enabled; int** filters; } ;
struct TYPE_7__ {TYPE_2__* fe; } ;
struct dvb_usb_adapter {size_t id; TYPE_4__* dev; TYPE_3__ props; } ;
struct TYPE_8__ {struct m920x_state* priv; } ;
struct TYPE_5__ {int endpoint; } ;
struct TYPE_6__ {TYPE_1__ stream; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_4__*,int,int,int) ;

__attribute__((used)) static int FUNC_1(struct dvb_usb_adapter *VAR_1)
{
 struct m920x_state *VAR_2 = VAR_1->dev->priv;
 int VAR_3 = VAR_2->filtering_enabled[VAR_1->id];
 int VAR_4, VAR_5 = 0, VAR_6 = 0;
 int VAR_7 = VAR_1->props.fe[0].stream.endpoint;

 for (VAR_4 = 0; VAR_4 < VAR_0; VAR_4++)
  if (VAR_2->filters[VAR_1->id][VAR_4] == 8192)
   VAR_3 = 0;


 if ((VAR_5 = FUNC_0(VAR_1->dev, VAR_7, 1, VAR_3)) != 0)
  return VAR_5;

 for (VAR_4 = 0; VAR_4 < VAR_0; VAR_4++)
  if ((VAR_5 = FUNC_0(VAR_1->dev, VAR_7, VAR_4 + 2, 0)) != 0)
   return VAR_5;


 if (VAR_3) {
  for (VAR_4 = 0; VAR_4 < VAR_0; VAR_4++) {
   if (VAR_2->filters[VAR_1->id][VAR_4] == 0)
    continue;

   if ((VAR_5 = FUNC_0(VAR_1->dev, VAR_7, VAR_6 + 2, VAR_2->filters[VAR_1->id][VAR_4])) != 0)
    return VAR_5;

   VAR_6++;
  }
 }

 return VAR_5;
}
