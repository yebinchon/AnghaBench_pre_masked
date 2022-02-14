
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct bh1770_chip {int prox_threshold_hw; scalar_t__ lux_data_raw; int prox_force_update; scalar_t__ prox_persistence_counter; scalar_t__ prox_persistence; TYPE_2__* client; int prox_data; int prox_abs_thres; } ;
struct TYPE_3__ {int kobj; } ;
struct TYPE_4__ {TYPE_1__ dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (struct bh1770_chip*,int ) ;
 int FUNC_1 (struct bh1770_chip*,int) ;
 int FUNC_2 (TYPE_2__*,int ) ;
 scalar_t__ FUNC_3 (int) ;
 int FUNC_4 (int *,int *,char*) ;

__attribute__((used)) static int FUNC_5(struct bh1770_chip *VAR_5)
{
 int VAR_6;
 bool VAR_7;
 u8 VAR_8;

 VAR_6 = FUNC_2(VAR_5->client, VAR_0);
 if (VAR_6 < 0)
  goto out;

 if (VAR_6 > VAR_5->prox_threshold_hw)
  VAR_7 = 1;
 else
  VAR_7 = 0;






 if (VAR_5->lux_data_raw > VAR_4)
  VAR_6 = 0;

 VAR_5->prox_data = FUNC_1(VAR_5, VAR_6);


 if (VAR_5->prox_data >= VAR_5->prox_abs_thres ||
     VAR_5->prox_force_update)
  VAR_5->prox_persistence_counter = VAR_5->prox_persistence;

 VAR_5->prox_force_update = 0;


 if (FUNC_3(VAR_7)) {
  if (VAR_5->prox_persistence_counter < VAR_5->prox_persistence) {
   VAR_5->prox_persistence_counter++;
   VAR_6 = -VAR_1;
  } else {
   VAR_8 = VAR_2;
   VAR_6 = 0;
  }
 } else {
  VAR_5->prox_persistence_counter = 0;
  VAR_8 = VAR_3;
  VAR_5->prox_data = 0;
  VAR_6 = 0;
 }


 if (VAR_6 == 0) {
  FUNC_0(VAR_5, VAR_8);
  FUNC_4(&VAR_5->client->dev.kobj, ((void*)0), "prox0_raw");
 }
out:
 return VAR_6;
}
