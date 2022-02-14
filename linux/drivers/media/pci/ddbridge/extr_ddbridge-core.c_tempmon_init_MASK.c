
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
typedef int temperature_table ;
struct ddb_link {int overtemperature_error; int temp_lock; struct ddb* dev; TYPE_1__* info; int temp_tab; int nr; } ;
struct ddb {int dev; } ;
struct TYPE_2__ {int tempmon_irq; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct ddb*,int ,int ,int ,struct ddb_link*) ;
 int FUNC_1 (struct ddb_link*,int ) ;
 int FUNC_2 (struct ddb_link*,int,int ) ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 (int ,int*,int) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int VAR_5 ;
 int FUNC_7 (struct ddb_link*) ;

__attribute__((used)) static int FUNC_8(struct ddb_link *VAR_6, int VAR_7)
{
 struct ddb *VAR_8 = VAR_6->dev;
 int VAR_9 = 0;
 u32 VAR_10 = VAR_6->nr;

 FUNC_5(&VAR_6->temp_lock);
 if (VAR_7) {
  static u8 VAR_11[11] = {
   30, 35, 40, 45, 50, 55, 60, 65, 70, 75, 80 };

  FUNC_4(VAR_6->temp_tab, VAR_11,
         sizeof(VAR_11));
 }
 FUNC_0(VAR_8, VAR_10, VAR_6->info->tempmon_irq, VAR_5, VAR_6);
 FUNC_2(VAR_6, (VAR_3 | VAR_1 |
     VAR_2),
     VAR_0);
 FUNC_2(VAR_6, (3 << 8), VAR_4);

 VAR_6->overtemperature_error =
  ((FUNC_1(VAR_6, VAR_0) &
   VAR_3) != 0);
 if (VAR_6->overtemperature_error) {
  FUNC_3(VAR_6->dev->dev, "Over temperature condition\n");
  VAR_9 = -1;
 }
 FUNC_7(VAR_6);
 FUNC_6(&VAR_6->temp_lock);
 return VAR_9;
}
