
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
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (struct ufs_hba*,int ,int*) ;
 int FUNC_2 (struct ufs_hba*,int ,int) ;

__attribute__((used)) static void FUNC_3(struct ufs_hba *VAR_6, bool VAR_7)
{
 u32 VAR_8;

 if (VAR_7) {
  FUNC_1(VAR_6,
          FUNC_0(VAR_5), &VAR_8);
  VAR_8 = VAR_8 |
        (1 << VAR_0) |
        (1 << VAR_1) |
        (1 << VAR_2);
  FUNC_2(VAR_6,
          FUNC_0(VAR_5), VAR_8);

  FUNC_1(VAR_6,
          FUNC_0(VAR_4), &VAR_8);
  VAR_8 = VAR_8 & ~(1 << VAR_3);
  FUNC_2(VAR_6,
          FUNC_0(VAR_4), VAR_8);
 } else {
  FUNC_1(VAR_6,
          FUNC_0(VAR_5), &VAR_8);
  VAR_8 = VAR_8 & ~((1 << VAR_0) |
         (1 << VAR_1) |
         (1 << VAR_2));
  FUNC_2(VAR_6,
          FUNC_0(VAR_5), VAR_8);

  FUNC_1(VAR_6,
          FUNC_0(VAR_4), &VAR_8);
  VAR_8 = VAR_8 | (1 << VAR_3);
  FUNC_2(VAR_6,
          FUNC_0(VAR_4), VAR_8);
 }
}
