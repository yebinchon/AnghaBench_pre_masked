
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct cgx {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (int ,int *,struct cgx*,int) ;

__attribute__((used)) static int FUNC_2(struct cgx *VAR_3, int VAR_4, bool VAR_5)
{
 u64 VAR_6 = 0;
 u64 VAR_7;

 if (VAR_5)
  VAR_6 = FUNC_0(VAR_2, VAR_1, VAR_6);
 else
  VAR_6 = FUNC_0(VAR_2, VAR_0, VAR_6);

 return FUNC_1(VAR_6, &VAR_7, VAR_3, VAR_4);
}
