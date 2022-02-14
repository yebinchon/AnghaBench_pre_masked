
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_8__ ;
typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int u32 ;
struct cx18 {int instance; TYPE_3__* i2c_adap; TYPE_6__* i2c_algo_cb_data; TYPE_2__* pci_dev; int v4l2_dev; TYPE_8__* i2c_algo; } ;
struct TYPE_14__ {TYPE_6__* data; } ;
struct TYPE_13__ {int bus_index; struct cx18* cx; } ;
struct TYPE_10__ {int * parent; } ;
struct TYPE_12__ {TYPE_1__ dev; scalar_t__ name; TYPE_8__* algo_data; } ;
struct TYPE_11__ {int dev; } ;


 int FUNC_0 (char*) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (struct cx18*,int ,int ,int ,int ) ;
 TYPE_3__ VAR_8 ;
 TYPE_8__ VAR_9 ;
 int FUNC_2 (struct cx18*,int) ;
 int FUNC_3 (TYPE_6__*,int) ;
 int FUNC_4 (TYPE_6__*,int) ;
 int FUNC_5 (struct cx18*,int,int) ;
 int FUNC_6 (struct cx18*,int,int,int,int) ;
 int FUNC_7 (TYPE_3__*) ;
 int FUNC_8 (TYPE_3__*) ;
 int FUNC_9 (TYPE_3__*,int *) ;
 int FUNC_10 (int) ;
 int VAR_10 ;
 int FUNC_11 (scalar_t__,char*,int,int) ;
 scalar_t__ FUNC_12 (scalar_t__) ;

int FUNC_13(struct cx18 *VAR_11)
{
 int VAR_12, VAR_13;
 FUNC_0("i2c init\n");

 for (VAR_12 = 0; VAR_12 < 2; VAR_12++) {

  VAR_11->i2c_algo[VAR_12] = VAR_9;
  VAR_11->i2c_algo_cb_data[VAR_12].cx = VAR_11;
  VAR_11->i2c_algo_cb_data[VAR_12].bus_index = VAR_12;
  VAR_11->i2c_algo[VAR_12].data = &VAR_11->i2c_algo_cb_data[VAR_12];


  VAR_11->i2c_adap[VAR_12] = VAR_8;
  VAR_11->i2c_adap[VAR_12].algo_data = &VAR_11->i2c_algo[VAR_12];
  FUNC_11(VAR_11->i2c_adap[VAR_12].name + FUNC_12(VAR_11->i2c_adap[VAR_12].name),
    " #%d-%d", VAR_11->instance, VAR_12);
  FUNC_9(&VAR_11->i2c_adap[VAR_12], &VAR_11->v4l2_dev);
  VAR_11->i2c_adap[VAR_12].dev.parent = &VAR_11->pci_dev->dev;
 }

 if (FUNC_2(VAR_11, VAR_3) != 0x0003c02f) {


  FUNC_6(VAR_11, 0x10000000, 0xc71004,
       0x00000000, 0x10001000);

  FUNC_6(VAR_11, 0x10001000, 0xc71024,
       0x00001000, 0x10001000);
 }

 FUNC_6(VAR_11, 0x00c00000, 0xc7001c, 0x00000000, 0x00c000c0);
 FUNC_10(10);
 FUNC_6(VAR_11, 0x00c000c0, 0xc7001c, 0x000000c0, 0x00c000c0);
 FUNC_10(10);
 FUNC_6(VAR_11, 0x00c00000, 0xc7001c, 0x00000000, 0x00c000c0);
 FUNC_10(10);


 FUNC_5(VAR_11, 0x00c00000, 0xc730c8);

 FUNC_6(VAR_11, VAR_4|VAR_5, VAR_6,
         ~(VAR_4|VAR_5), VAR_4|VAR_5);


 FUNC_5(VAR_11, 0x00021c0f & ~4, VAR_2);
 FUNC_3(&VAR_11->i2c_algo_cb_data[0], 1);
 FUNC_4(&VAR_11->i2c_algo_cb_data[0], 1);


 FUNC_5(VAR_11, 0x00021c0f & ~4, VAR_3);
 FUNC_3(&VAR_11->i2c_algo_cb_data[1], 1);
 FUNC_4(&VAR_11->i2c_algo_cb_data[1], 1);

 FUNC_1(VAR_11, VAR_1,
       VAR_7, VAR_10, (u32) VAR_0);

 VAR_13 = FUNC_7(&VAR_11->i2c_adap[0]);
 if (VAR_13)
  goto err;
 VAR_13 = FUNC_7(&VAR_11->i2c_adap[1]);
 if (VAR_13)
  goto err_del_bus_0;
 return 0;

 err_del_bus_0:
 FUNC_8(&VAR_11->i2c_adap[0]);
 err:
 return VAR_13;
}
