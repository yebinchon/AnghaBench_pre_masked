
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct ufs_hba {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct ufs_hba*,scalar_t__,int ,scalar_t__*,int) ;

__attribute__((used)) static int FUNC_1(struct ufs_hba *VAR_4,
       u8 VAR_5,
       u8 *VAR_6)
{
 int VAR_7;

 if (!VAR_6)
  VAR_7 = -VAR_0;





 else if (VAR_5 >= VAR_2)
  VAR_7 = -VAR_1;
 else
  VAR_7 = FUNC_0(VAR_4,
       VAR_5,
       VAR_3,
       VAR_6,
       sizeof(*VAR_6));
 return VAR_7;
}
