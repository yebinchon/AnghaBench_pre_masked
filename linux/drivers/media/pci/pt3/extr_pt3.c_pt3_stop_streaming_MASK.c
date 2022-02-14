
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int num; int device; } ;
struct pt3_adapter {int * thread; TYPE_2__* fe; TYPE_1__ dvb_adap; } ;
struct TYPE_4__ {int id; } ;


 int FUNC_0 (int ,char*,int ,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct pt3_adapter*) ;

__attribute__((used)) static int FUNC_3(struct pt3_adapter *VAR_0)
{
 int VAR_1;

 VAR_1 = FUNC_2(VAR_0);
 if (VAR_1)
  FUNC_0(VAR_0->dvb_adap.device,
    "PT3: failed to stop streaming of adap:%d/FE:%d\n",
    VAR_0->dvb_adap.num, VAR_0->fe->id);


 VAR_1 = FUNC_1(VAR_0->thread);
 VAR_0->thread = ((void*)0);
 return VAR_1;
}
