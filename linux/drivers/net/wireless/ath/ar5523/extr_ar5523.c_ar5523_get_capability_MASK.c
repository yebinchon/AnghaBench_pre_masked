
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ar5523 {int dummy; } ;
typedef int cap_be ;
typedef int __be32 ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct ar5523*,int ,int *,int,int *,int,int ) ;
 int FUNC_1 (struct ar5523*,char*,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static int FUNC_4(struct ar5523 *VAR_2, u32 VAR_3, u32 *VAR_4)
{
 int VAR_5;
 __be32 VAR_6, VAR_7;

 VAR_6 = FUNC_3(VAR_3);
 VAR_5 = FUNC_0(VAR_2, VAR_1, &VAR_6,
    sizeof(VAR_6), &VAR_7, sizeof(__be32),
    VAR_0);
 if (VAR_5 != 0) {
  FUNC_1(VAR_2, "could not read capability %u\n", VAR_3);
  return VAR_5;
 }
 *VAR_4 = FUNC_2(VAR_7);
 return VAR_5;
}
