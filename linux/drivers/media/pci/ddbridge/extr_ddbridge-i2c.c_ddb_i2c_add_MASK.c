
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {int parent; } ;
struct i2c_adapter {TYPE_3__ dev; void* algo_data; int * algo; int name; void* class; } ;
struct ddb_regmap {TYPE_2__* i2c; TYPE_1__* i2c_buf; } ;
struct ddb_i2c {int nr; int link; int bsize; int wbuf; int rbuf; int regs; struct i2c_adapter adap; int completion; struct ddb* dev; } ;
struct ddb {int nr; int dev; } ;
struct TYPE_5__ {int base; int size; } ;
struct TYPE_4__ {int size; int base; } ;


 int FUNC_0 (int) ;
 void* VAR_0 ;
 void* VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (struct ddb*,int,scalar_t__) ;
 int FUNC_2 (struct i2c_adapter*) ;
 int FUNC_3 (struct i2c_adapter*,struct ddb_i2c*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ,int ,char*,int,int,int) ;

__attribute__((used)) static int FUNC_6(struct ddb *VAR_7, struct ddb_i2c *VAR_8,
         const struct ddb_regmap *VAR_9, int VAR_10,
         int VAR_11, int VAR_12)
{
 struct i2c_adapter *VAR_13;

 VAR_8->nr = VAR_11;
 VAR_8->dev = VAR_7;
 VAR_8->link = VAR_10;
 VAR_8->bsize = VAR_9->i2c_buf->size;
 VAR_8->wbuf = FUNC_0(VAR_10) |
  (VAR_9->i2c_buf->base + VAR_8->bsize * VAR_11);
 VAR_8->rbuf = VAR_8->wbuf;
 VAR_8->regs = FUNC_0(VAR_10) |
  (VAR_9->i2c->base + VAR_9->i2c->size * VAR_11);
 FUNC_1(VAR_7, VAR_3, VAR_8->regs + VAR_5);
 FUNC_1(VAR_7, ((VAR_8->rbuf & 0xffff) << 16) | (VAR_8->wbuf & 0xffff),
    VAR_8->regs + VAR_4);
 FUNC_4(&VAR_8->completion);

 VAR_13 = &VAR_8->adap;
 FUNC_3(VAR_13, VAR_8);







 FUNC_5(VAR_13->name, VAR_2, "ddbridge_%02x.%x.%x",
   VAR_7->nr, VAR_8->link, VAR_11);
 VAR_13->algo = &VAR_6;
 VAR_13->algo_data = (void *)VAR_8;
 VAR_13->dev.parent = VAR_7->dev;
 return FUNC_2(VAR_13);
}
