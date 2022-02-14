
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {char* card_name; int dev; struct device* parent; int simple_enable_set; int enable_get; int fieldbus_id_get; int write_area; int read_area; int fieldbus_type; void* write_area_sz; void* read_area_sz; } ;
struct profi_priv {TYPE_1__ fbdev; struct anybuss_client* client; int enable_lock; } ;
struct device {int dummy; } ;
struct anybuss_client {int on_online_changed; int on_area_updated; struct device dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 void* VAR_3 ;
 int FUNC_0 (struct anybuss_client*,struct profi_priv*) ;
 int FUNC_1 (struct device*,char*,int ) ;
 int FUNC_2 (int ) ;
 struct profi_priv* FUNC_3 (struct device*,int,int ) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (int *) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;

__attribute__((used)) static int FUNC_6(struct anybuss_client *VAR_11)
{
 struct profi_priv *VAR_12;
 struct device *VAR_13 = &VAR_11->dev;
 int VAR_14;

 VAR_11->on_area_updated = VAR_6;
 VAR_11->on_online_changed = VAR_7;
 VAR_12 = FUNC_3(VAR_13, sizeof(*VAR_12), VAR_2);
 if (!VAR_12)
  return -VAR_0;
 FUNC_5(&VAR_12->enable_lock);
 VAR_12->client = VAR_11;
 VAR_12->fbdev.read_area_sz = VAR_3;
 VAR_12->fbdev.write_area_sz = VAR_3;
 VAR_12->fbdev.card_name = "HMS Profinet IRT (Anybus-S)";
 VAR_12->fbdev.fieldbus_type = VAR_1;
 VAR_12->fbdev.read_area = VAR_8;
 VAR_12->fbdev.write_area = VAR_10;
 VAR_12->fbdev.fieldbus_id_get = VAR_5;
 VAR_12->fbdev.enable_get = VAR_4;
 VAR_12->fbdev.simple_enable_set = VAR_9;
 VAR_12->fbdev.parent = VAR_13;
 VAR_14 = FUNC_4(&VAR_12->fbdev);
 if (VAR_14 < 0)
  return VAR_14;
 FUNC_1(VAR_13, "card detected, registered as %s",
   FUNC_2(VAR_12->fbdev.dev));
 FUNC_0(VAR_11, VAR_12);

 return 0;
}
