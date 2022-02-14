
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int type; TYPE_1__* dev; } ;
struct uwb_rsv {int stream; TYPE_2__ target; struct uwb_rc* rc; } ;
struct device {int dummy; } ;
struct TYPE_6__ {unsigned long* streams; struct device dev; } ;
struct uwb_rc {TYPE_3__ uwb_dev; } ;
struct TYPE_4__ {unsigned long* streams; } ;




 int FUNC_0 (int ,unsigned long*) ;
 int FUNC_1 (struct device*,char*,int ) ;

__attribute__((used)) static void FUNC_2(struct uwb_rsv *VAR_0)
{
 struct uwb_rc *VAR_1 = VAR_0->rc;
 struct device *VAR_2 = &VAR_1->uwb_dev.dev;
 unsigned long *VAR_3;

 switch (VAR_0->target.type) {
 case 129:
  VAR_3 = VAR_0->target.dev->streams;
  break;
 case 128:
  VAR_3 = VAR_1->uwb_dev.streams;
  break;
 default:
  return;
 }

 FUNC_0(VAR_0->stream, VAR_3);

 FUNC_1(VAR_2, "put stream %d\n", VAR_0->stream);
}
