
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct ath10k {int dummy; } ;


 int FUNC_0 (struct ath10k*,int ,int ,int ,int *,int ) ;
 int FUNC_1 (struct ath10k*,int ,int ,int ,int *,int ) ;

__attribute__((used)) static int FUNC_2(struct ath10k *VAR_0,
     u8 VAR_1, u8 *VAR_2, u32 VAR_3,
     u8 VAR_4, u8 *VAR_5,
     u32 *VAR_6)
{
 int VAR_7;


 VAR_7 = FUNC_1(VAR_0, VAR_1, 0, 0,
      VAR_2, VAR_3);
 if (VAR_7)
  goto err;


 if (VAR_5) {
  VAR_7 = FUNC_0(VAR_0, VAR_4, 0, 0,
      VAR_5, *VAR_6);
  if (VAR_7)
   goto err;
 }

 return 0;
err:
 return VAR_7;
}
