
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
 int VAR_4 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int,int) ;
 int FUNC_5 (struct ufs_hba*,int ,int*) ;
 int FUNC_6 (struct ufs_hba*,int ,int*) ;
 int FUNC_7 (struct ufs_hba*,int ,int) ;

__attribute__((used)) static int FUNC_8(struct ufs_hba *VAR_5)
{
 int VAR_6 = 0;
 u32 VAR_7 = 0, VAR_8 = 0;
 u32 VAR_9, VAR_10;

 VAR_6 = FUNC_5(VAR_5,
        FUNC_1(VAR_4,
     FUNC_3(0)),
      &VAR_7);
 if (VAR_6)
  goto out;

 VAR_6 = FUNC_6(VAR_5,
      FUNC_1(VAR_3,
     FUNC_2(0)),
      &VAR_8);
 if (VAR_6)
  goto out;

 VAR_9 = FUNC_4(VAR_7,
          VAR_8);

 VAR_10 = ((VAR_9 * VAR_0)
    / VAR_2);
 VAR_6 = FUNC_7(VAR_5, FUNC_0(VAR_1),
        VAR_10);
out:
 return VAR_6;
}
