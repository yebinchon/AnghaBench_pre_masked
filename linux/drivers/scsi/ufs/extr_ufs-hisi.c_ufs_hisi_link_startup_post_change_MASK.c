
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ufs_hisi_host {int dummy; } ;
struct ufs_hba {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct ufs_hisi_host*,int ,int ) ;
 int FUNC_2 (struct ufs_hba*,int ,int) ;
 struct ufs_hisi_host* FUNC_3 (struct ufs_hba*) ;

__attribute__((used)) static int FUNC_4(struct ufs_hba *VAR_4)
{
 struct ufs_hisi_host *VAR_5 = FUNC_3(VAR_4);


 FUNC_2(VAR_4, FUNC_0(0x2044), 0x0);

 FUNC_2(VAR_4, FUNC_0(0x2045), 0x0);

 FUNC_2(VAR_4, FUNC_0(0x2040), 0x9);


 FUNC_1(VAR_5, VAR_1,
      VAR_0);
 FUNC_1(VAR_5, VAR_2,
      VAR_3);


 FUNC_2(VAR_4, FUNC_0(0xd09a), 0x80000000);

 FUNC_2(VAR_4, FUNC_0(0xd09c), 0x00000005);

 return 0;
}
