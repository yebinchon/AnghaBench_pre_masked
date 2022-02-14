
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ath10k_dump_file_data {int len; } ;
struct ath10k {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct ath10k_dump_file_data* FUNC_0 (struct ath10k*) ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (struct ath10k*,char*) ;
 int FUNC_2 (int ,struct ath10k_dump_file_data*,int ,int ) ;
 int FUNC_3 (int ) ;

int FUNC_4(struct ath10k *VAR_3)
{
 struct ath10k_dump_file_data *VAR_4;

 if (VAR_2 == 0)

  return 0;

 VAR_4 = FUNC_0(VAR_3);
 if (!VAR_4) {
  FUNC_1(VAR_3, "no crash dump data found for devcoredump");
  return -VAR_0;
 }

 FUNC_2(VAR_3->dev, VAR_4, FUNC_3(VAR_4->len), VAR_1);

 return 0;
}
