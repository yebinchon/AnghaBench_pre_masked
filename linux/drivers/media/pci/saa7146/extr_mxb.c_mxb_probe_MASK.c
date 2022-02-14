
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct v4l2_ctrl_handler {int error; } ;
struct saa7146_dev {struct mxb* ext_priv; int v4l2_dev; struct v4l2_ctrl_handler ctrl_handler; } ;
struct TYPE_5__ {int name; } ;
struct mxb {TYPE_1__ i2c_adapter; void* tuner; void* saa7111a; void* tda9840; void* tea6415c; void* tea6420_2; void* tea6420_1; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 scalar_t__ FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (struct mxb*) ;
 struct mxb* FUNC_5 (int,int ) ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_6 (char*) ;
 int FUNC_7 (struct saa7146_dev*,TYPE_1__*,int ) ;
 int FUNC_8 (int ,int,char*,int) ;
 int FUNC_9 (struct v4l2_ctrl_handler*) ;
 int FUNC_10 (struct v4l2_ctrl_handler*,int *,int ,int ,int,int,int) ;
 void* FUNC_11 (int *,TYPE_1__*,char*,int ,int *) ;

__attribute__((used)) static int FUNC_12(struct saa7146_dev *VAR_14)
{
 struct v4l2_ctrl_handler *VAR_15 = &VAR_14->ctrl_handler;
 struct mxb *VAR_16 = ((void*)0);

 FUNC_10(VAR_15, &VAR_12,
   VAR_11, 0, 1, 1, 1);
 if (VAR_15->error)
  return VAR_15->error;
 VAR_16 = FUNC_5(sizeof(struct mxb), VAR_3);
 if (VAR_16 == ((void*)0)) {
  FUNC_0("not enough kernel memory\n");
  return -VAR_2;
 }


 FUNC_8(VAR_16->i2c_adapter.name, sizeof(VAR_16->i2c_adapter.name), "mxb%d", VAR_13);

 FUNC_7(VAR_14, &VAR_16->i2c_adapter, VAR_10);
 if (FUNC_2(&VAR_16->i2c_adapter) < 0) {
  FUNC_1("cannot register i2c-device. skipping.\n");
  FUNC_4(VAR_16);
  return -VAR_0;
 }

 VAR_16->saa7111a = FUNC_11(&VAR_14->v4l2_dev, &VAR_16->i2c_adapter,
   "saa7111", VAR_4, ((void*)0));
 VAR_16->tea6420_1 = FUNC_11(&VAR_14->v4l2_dev, &VAR_16->i2c_adapter,
   "tea6420", VAR_7, ((void*)0));
 VAR_16->tea6420_2 = FUNC_11(&VAR_14->v4l2_dev, &VAR_16->i2c_adapter,
   "tea6420", VAR_8, ((void*)0));
 VAR_16->tea6415c = FUNC_11(&VAR_14->v4l2_dev, &VAR_16->i2c_adapter,
   "tea6415c", VAR_6, ((void*)0));
 VAR_16->tda9840 = FUNC_11(&VAR_14->v4l2_dev, &VAR_16->i2c_adapter,
   "tda9840", VAR_5, ((void*)0));
 VAR_16->tuner = FUNC_11(&VAR_14->v4l2_dev, &VAR_16->i2c_adapter,
   "tuner", VAR_9, ((void*)0));


 if (!VAR_16->tea6420_1 || !VAR_16->tea6420_2 || !VAR_16->tea6415c ||
     !VAR_16->tda9840 || !VAR_16->saa7111a || !VAR_16->tuner) {
  FUNC_6("did not find all i2c devices. aborting\n");
  FUNC_3(&VAR_16->i2c_adapter);
  FUNC_4(VAR_16);
  return -VAR_1;
 }




 VAR_14->ext_priv = VAR_16;

 FUNC_9(VAR_15);

 return 0;
}
