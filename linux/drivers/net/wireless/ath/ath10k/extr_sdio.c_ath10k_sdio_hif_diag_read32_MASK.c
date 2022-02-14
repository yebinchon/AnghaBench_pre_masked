
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ath10k {int dummy; } ;
typedef int __le32 ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct ath10k*,int ,int *,int) ;
 int FUNC_2 (int *) ;
 int * FUNC_3 (int,int ) ;

__attribute__((used)) static int FUNC_4(struct ath10k *VAR_2, u32 VAR_3,
           u32 *VAR_4)
{
 __le32 *VAR_5;
 int VAR_6;

 VAR_5 = FUNC_3(sizeof(*VAR_5), VAR_1);
 if (!VAR_5)
  return -VAR_0;

 VAR_6 = FUNC_1(VAR_2, VAR_3, VAR_5, sizeof(*VAR_5));
 if (VAR_6)
  goto out;

 *VAR_4 = FUNC_0(*VAR_5);

out:
 FUNC_2(VAR_5);

 return VAR_6;
}
