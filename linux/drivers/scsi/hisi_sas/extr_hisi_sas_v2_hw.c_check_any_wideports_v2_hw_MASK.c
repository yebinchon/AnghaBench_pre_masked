
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct hisi_hba {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct hisi_hba*,int ) ;

__attribute__((used)) static bool FUNC_1(struct hisi_hba *VAR_1)
{
 u32 VAR_2;

 VAR_2 = FUNC_0(VAR_1, VAR_0);
 if (VAR_2 & 0x1ff)
  return 1;

 return 0;
}
