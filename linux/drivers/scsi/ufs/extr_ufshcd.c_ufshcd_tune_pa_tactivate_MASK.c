
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ufs_hba {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct ufs_hba*,int ,int*) ;
 int FUNC_4 (struct ufs_hba*,int ,int) ;

__attribute__((used)) static int FUNC_5(struct ufs_hba *VAR_4)
{
 int VAR_5 = 0;
 u32 VAR_6 = 0, VAR_7;

 VAR_5 = FUNC_3(VAR_4,
      FUNC_1(
     VAR_2,
     FUNC_2(0)),
      &VAR_6);
 if (VAR_5)
  goto out;


 VAR_7 =
  ((VAR_6 * VAR_3)
   / VAR_1);
 VAR_5 = FUNC_4(VAR_4, FUNC_0(VAR_0),
        VAR_7);

out:
 return VAR_5;
}
