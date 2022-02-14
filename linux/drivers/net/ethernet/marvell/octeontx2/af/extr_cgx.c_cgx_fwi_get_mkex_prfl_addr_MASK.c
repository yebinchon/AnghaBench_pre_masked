
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct cgx {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ,int ) ;
 int VAR_2 ;
 int FUNC_2 (int ,int *,struct cgx*,int ) ;

__attribute__((used)) static inline int FUNC_3(u64 *VAR_3,
          struct cgx *VAR_4)
{
 u64 VAR_5 = 0;
 u64 VAR_6;
 int VAR_7;

 VAR_5 = FUNC_1(VAR_1, VAR_0, VAR_5);
 VAR_7 = FUNC_2(VAR_5, &VAR_6, VAR_4, 0);
 if (!VAR_7)
  *VAR_3 = FUNC_0(VAR_2, VAR_6);

 return VAR_7;
}
