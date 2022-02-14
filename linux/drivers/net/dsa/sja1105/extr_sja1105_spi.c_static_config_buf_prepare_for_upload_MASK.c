
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sja1105_table_header {int crc; } ;
struct sja1105_static_config {int dummy; } ;
struct sja1105_private {TYPE_1__* spidev; struct sja1105_static_config static_config; } ;
typedef size_t sja1105_config_valid_t ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 void* VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (void*,int) ;
 size_t FUNC_2 (struct sja1105_static_config*) ;
 int * VAR_5 ;
 int FUNC_3 (void*,struct sja1105_static_config*) ;
 int FUNC_4 (char*,struct sja1105_table_header*,int ) ;

__attribute__((used)) static int
FUNC_5(struct sja1105_private *VAR_6,
         void *VAR_7, int VAR_8)
{
 struct sja1105_static_config *VAR_9 = &VAR_6->static_config;
 struct sja1105_table_header VAR_10;
 sja1105_config_valid_t VAR_11;
 char *VAR_12;
 int VAR_13;

 VAR_11 = FUNC_2(VAR_9);
 if (VAR_11 != VAR_2) {
  FUNC_0(&VAR_6->spidev->dev,
   VAR_5[VAR_11]);
  return -VAR_0;
 }


 FUNC_3(VAR_7, VAR_9);



 VAR_13 = VAR_8 - 4;

 VAR_12 = VAR_7 + VAR_8 - VAR_3;
 FUNC_4(VAR_12, &VAR_10, VAR_4);

 VAR_10.crc = FUNC_1(VAR_7, VAR_13);

 FUNC_4(VAR_12, &VAR_10, VAR_1);

 return 0;
}
