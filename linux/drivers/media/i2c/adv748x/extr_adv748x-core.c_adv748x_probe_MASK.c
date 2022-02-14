
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct i2c_client {int dev; int adapter; } ;
struct TYPE_3__ {int port; int page; struct adv748x_state* state; } ;
struct adv748x_state {int mutex; int hdmi; int afe; TYPE_1__ txa; TYPE_1__ txb; struct i2c_client** i2c_clients; struct i2c_client* client; int * dev; } ;


 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct adv748x_state*,size_t) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (struct adv748x_state*,TYPE_1__*) ;
 int FUNC_5 (struct adv748x_state*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (struct adv748x_state*) ;
 int FUNC_9 (struct adv748x_state*) ;
 int FUNC_10 (struct adv748x_state*) ;
 int FUNC_11 (struct adv748x_state*) ;
 int FUNC_12 (struct adv748x_state*) ;
 int FUNC_13 (struct adv748x_state*,char*) ;
 struct adv748x_state* FUNC_14 (int *,int,int ) ;
 int FUNC_15 (int ,int ) ;
 int FUNC_16 (struct i2c_client*,struct adv748x_state*) ;
 int FUNC_17 (int *) ;
 int FUNC_18 (int *) ;

__attribute__((used)) static int FUNC_19(struct i2c_client *VAR_9)
{
 struct adv748x_state *VAR_10;
 int VAR_11;


 if (!FUNC_15(VAR_9->adapter, VAR_8))
  return -VAR_5;

 VAR_10 = FUNC_14(&VAR_9->dev, sizeof(*VAR_10), VAR_7);
 if (!VAR_10)
  return -VAR_6;

 FUNC_18(&VAR_10->mutex);

 VAR_10->dev = &VAR_9->dev;
 VAR_10->client = VAR_9;
 VAR_10->i2c_clients[VAR_0] = VAR_9;
 FUNC_16(VAR_9, VAR_10);






 VAR_10->txa.state = VAR_10->txb.state = VAR_10;
 VAR_10->txa.page = VAR_1;
 VAR_10->txb.page = VAR_2;
 VAR_10->txa.port = VAR_3;
 VAR_10->txb.port = VAR_4;


 VAR_11 = FUNC_10(VAR_10);
 if (VAR_11) {
  FUNC_13(VAR_10, "Failed to parse device tree");
  goto err_free_mutex;
 }


 VAR_11 = FUNC_2(VAR_10, VAR_0);
 if (VAR_11) {
  FUNC_13(VAR_10, "Error configuring IO regmap region");
  goto err_cleanup_dt;
 }

 VAR_11 = FUNC_8(VAR_10);
 if (VAR_11) {
  FUNC_13(VAR_10, "Failed to identify chip");
  goto err_cleanup_dt;
 }


 VAR_11 = FUNC_9(VAR_10);
 if (VAR_11) {
  FUNC_13(VAR_10, "Failed to setup client regmap pages");
  goto err_cleanup_clients;
 }


 VAR_11 = FUNC_11(VAR_10);
 if (VAR_11) {
  FUNC_13(VAR_10, "Failed to reset hardware");
  goto err_cleanup_clients;
 }


 VAR_11 = FUNC_7(&VAR_10->hdmi);
 if (VAR_11) {
  FUNC_13(VAR_10, "Failed to probe HDMI");
  goto err_cleanup_clients;
 }


 VAR_11 = FUNC_1(&VAR_10->afe);
 if (VAR_11) {
  FUNC_13(VAR_10, "Failed to probe AFE");
  goto err_cleanup_hdmi;
 }


 VAR_11 = FUNC_4(VAR_10, &VAR_10->txa);
 if (VAR_11) {
  FUNC_13(VAR_10, "Failed to probe TXA");
  goto err_cleanup_afe;
 }


 VAR_11 = FUNC_4(VAR_10, &VAR_10->txb);
 if (VAR_11) {
  FUNC_13(VAR_10, "Failed to probe TXB");
  goto err_cleanup_txa;
 }

 return 0;

err_cleanup_txa:
 FUNC_3(&VAR_10->txa);
err_cleanup_afe:
 FUNC_0(&VAR_10->afe);
err_cleanup_hdmi:
 FUNC_6(&VAR_10->hdmi);
err_cleanup_clients:
 FUNC_12(VAR_10);
err_cleanup_dt:
 FUNC_5(VAR_10);
err_free_mutex:
 FUNC_17(&VAR_10->mutex);

 return VAR_11;
}
