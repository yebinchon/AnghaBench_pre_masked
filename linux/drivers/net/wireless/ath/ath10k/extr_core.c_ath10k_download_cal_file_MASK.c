
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct firmware {int size; int data; } ;
struct ath10k {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct firmware const*) ;
 int FUNC_1 (struct firmware const*) ;
 int FUNC_2 (struct ath10k*,int ,char*) ;
 int FUNC_3 (struct ath10k*,int ,int ) ;
 int FUNC_4 (struct ath10k*,char*,int) ;

__attribute__((used)) static int FUNC_5(struct ath10k *VAR_2,
        const struct firmware *VAR_3)
{
 int VAR_4;

 if (!VAR_3)
  return -VAR_1;

 if (FUNC_0(VAR_3))
  return FUNC_1(VAR_3);

 VAR_4 = FUNC_3(VAR_2, VAR_3->data, VAR_3->size);
 if (VAR_4) {
  FUNC_4(VAR_2, "failed to download cal_file data: %d\n", VAR_4);
  return VAR_4;
 }

 FUNC_2(VAR_2, VAR_0, "boot cal file downloaded\n");

 return 0;
}
