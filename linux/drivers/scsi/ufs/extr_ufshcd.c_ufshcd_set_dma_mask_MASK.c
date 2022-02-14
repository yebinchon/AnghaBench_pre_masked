
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ufs_hba {int capabilities; int dev; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (int ,int ) ;

__attribute__((used)) static int FUNC_2(struct ufs_hba *VAR_1)
{
 if (VAR_1->capabilities & VAR_0) {
  if (!FUNC_1(VAR_1->dev, FUNC_0(64)))
   return 0;
 }
 return FUNC_1(VAR_1->dev, FUNC_0(32));
}
