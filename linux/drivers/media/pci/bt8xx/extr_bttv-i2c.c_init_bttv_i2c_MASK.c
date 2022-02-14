
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_9__ ;
typedef struct TYPE_15__ TYPE_8__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_15__ {TYPE_4__* adapter; int name; } ;
struct TYPE_14__ {int name; } ;
struct TYPE_10__ {int * parent; } ;
struct TYPE_13__ {int name; TYPE_1__ dev; int owner; TYPE_9__* algo_data; int * algo; } ;
struct TYPE_12__ {int nr; TYPE_5__ v4l2_dev; TYPE_4__ i2c_adap; TYPE_2__* pci; } ;
struct TYPE_16__ {int udelay; struct bttv* data; } ;
struct bttv {int use_i2c_hw; int id; scalar_t__ i2c_rc; TYPE_8__ i2c_client; TYPE_3__ c; TYPE_9__ i2c_algo; } ;
struct TYPE_11__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct bttv*,int) ;
 int FUNC_1 (struct bttv*,int) ;
 TYPE_9__ VAR_3 ;
 int FUNC_2 (int ,TYPE_8__*) ;
 scalar_t__ FUNC_3 (TYPE_4__*) ;
 scalar_t__ FUNC_4 (TYPE_4__*) ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_5 (TYPE_4__*,TYPE_5__*) ;
 int VAR_6 ;
 int FUNC_6 (int ,int,char*,int,int,char*) ;
 int FUNC_7 (int ,char*,int) ;

int FUNC_8(struct bttv *VAR_7)
{
 FUNC_7(VAR_7->i2c_client.name, "bttv internal", VAR_0);

 if (VAR_4)
  VAR_7->use_i2c_hw = 1;
 if (VAR_7->use_i2c_hw) {

  FUNC_7(VAR_7->c.i2c_adap.name, "bt878",
   sizeof(VAR_7->c.i2c_adap.name));
  VAR_7->c.i2c_adap.algo = &VAR_2;
 } else {


  if (VAR_6<5)
   VAR_6=5;

  FUNC_7(VAR_7->c.i2c_adap.name, "bttv",
   sizeof(VAR_7->c.i2c_adap.name));
  VAR_7->i2c_algo = VAR_3;
  VAR_7->i2c_algo.udelay = VAR_6;
  VAR_7->i2c_algo.data = VAR_7;
  VAR_7->c.i2c_adap.algo_data = &VAR_7->i2c_algo;
 }
 VAR_7->c.i2c_adap.owner = VAR_1;

 VAR_7->c.i2c_adap.dev.parent = &VAR_7->c.pci->dev;
 FUNC_6(VAR_7->c.i2c_adap.name, sizeof(VAR_7->c.i2c_adap.name),
   "bt%d #%d [%s]", VAR_7->id, VAR_7->c.nr,
   VAR_7->use_i2c_hw ? "hw" : "sw");

 FUNC_5(&VAR_7->c.i2c_adap, &VAR_7->c.v4l2_dev);
 VAR_7->i2c_client.adapter = &VAR_7->c.i2c_adap;


 if (VAR_7->use_i2c_hw) {
  VAR_7->i2c_rc = FUNC_3(&VAR_7->c.i2c_adap);
 } else {
  FUNC_0(VAR_7,1);
  FUNC_1(VAR_7,1);
  VAR_7->i2c_rc = FUNC_4(&VAR_7->c.i2c_adap);
 }
 if (0 == VAR_7->i2c_rc && VAR_5)
  FUNC_2(VAR_7->c.v4l2_dev.name, &VAR_7->i2c_client);

 return VAR_7->i2c_rc;
}
