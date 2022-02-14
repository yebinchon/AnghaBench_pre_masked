
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct hisi_hba {int dummy; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (struct hisi_hba*,int,int ) ;

__attribute__((used)) static bool FUNC_2(struct hisi_hba *VAR_1, int VAR_2)
{
 u32 VAR_3;

 VAR_3 = FUNC_1(VAR_1, VAR_2, VAR_0);

 if (VAR_3 & FUNC_0(16))
  return 0;

 return 1;
}
