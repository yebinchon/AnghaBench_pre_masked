
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int val ;
typedef int u32 ;
struct ath10k {int dummy; } ;
typedef int __le32 ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct ath10k*,int ,int *,int) ;

__attribute__((used)) static int FUNC_2(struct ath10k *VAR_0, u32 VAR_1, u32 *VAR_2)
{
 __le32 VAR_3 = 0;
 int VAR_4;

 VAR_4 = FUNC_1(VAR_0, VAR_1, &VAR_3, sizeof(VAR_3));
 *VAR_2 = FUNC_0(VAR_3);

 return VAR_4;
}
