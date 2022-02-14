
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int * parent; } ;
struct TYPE_9__ {TYPE_3__* algo_data; int owner; int name; TYPE_1__ dev; } ;
struct TYPE_8__ {struct cx8802_dev* data; } ;
struct vp3054_i2c_state {TYPE_4__ adap; TYPE_3__ algo; } ;
struct cx88_core {scalar_t__ boardnr; int name; } ;
struct cx8802_dev {struct vp3054_i2c_state* vp3054; TYPE_2__* pci; struct cx88_core* core; } ;
struct TYPE_7__ {int dev; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (TYPE_4__*) ;
 int FUNC_1 (TYPE_4__*,struct cx8802_dev*) ;
 int FUNC_2 (struct vp3054_i2c_state*) ;
 struct vp3054_i2c_state* FUNC_3 (int,int ) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (int ,int ,int) ;
 int FUNC_6 (struct cx8802_dev*,int) ;
 int FUNC_7 (struct cx8802_dev*,int) ;
 TYPE_3__ VAR_4 ;

int FUNC_8(struct cx8802_dev *VAR_5)
{
 struct cx88_core *VAR_6 = VAR_5->core;
 struct vp3054_i2c_state *VAR_7;
 int VAR_8;

 if (VAR_6->boardnr != VAR_0)
  return 0;

 VAR_7 = FUNC_3(sizeof(*VAR_7), VAR_2);
 if (!VAR_7)
  return -VAR_1;
 VAR_5->vp3054 = VAR_7;

 VAR_7->algo = VAR_4;

 VAR_7->adap.dev.parent = &VAR_5->pci->dev;
 FUNC_5(VAR_7->adap.name, VAR_6->name,
  sizeof(VAR_7->adap.name));
 VAR_7->adap.owner = VAR_3;
 VAR_7->algo.data = VAR_5;
 FUNC_1(&VAR_7->adap, VAR_5);
 VAR_7->adap.algo_data = &VAR_7->algo;

 FUNC_6(VAR_5, 1);
 FUNC_7(VAR_5, 1);

 VAR_8 = FUNC_0(&VAR_7->adap);
 if (VAR_8 != 0) {
  FUNC_4("vp3054_i2c register FAILED\n");

  FUNC_2(VAR_5->vp3054);
  VAR_5->vp3054 = ((void*)0);
 }

 return VAR_8;
}
