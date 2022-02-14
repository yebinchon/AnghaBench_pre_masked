
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct bq24190_dev_info {int client; } ;


 int FUNC_0 (int ,int) ;

__attribute__((used)) static int FUNC_1(struct bq24190_dev_info *VAR_0, u8 VAR_1, u8 *VAR_2)
{
 int VAR_3;

 VAR_3 = FUNC_0(VAR_0->client, VAR_1);
 if (VAR_3 < 0)
  return VAR_3;

 *VAR_2 = VAR_3;
 return 0;
}
