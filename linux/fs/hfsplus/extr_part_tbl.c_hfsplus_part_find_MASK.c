
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct super_block {int dummy; } ;
typedef scalar_t__ sector_t ;
typedef int __be16 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;


 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct super_block*,void*,void*,scalar_t__*,scalar_t__*) ;
 int FUNC_2 (struct super_block*,void*,scalar_t__*,scalar_t__*) ;
 int FUNC_3 (struct super_block*) ;
 int FUNC_4 (struct super_block*,scalar_t__,void*,void**,int ,int ) ;
 int FUNC_5 (void*) ;
 void* FUNC_6 (int ,int ) ;

int FUNC_7(struct super_block *VAR_5,
  sector_t *VAR_6, sector_t *VAR_7)
{
 void *VAR_8, *VAR_9;
 int VAR_10;

 VAR_8 = FUNC_6(FUNC_3(VAR_5), VAR_2);
 if (!VAR_8)
  return -VAR_1;

 VAR_10 = FUNC_4(VAR_5, *VAR_6 + VAR_3,
     VAR_8, &VAR_9, VAR_4, 0);
 if (VAR_10)
  goto out;

 switch (FUNC_0(*((__be16 *)VAR_9))) {
 case 128:
  VAR_10 = FUNC_2(VAR_5, VAR_9, VAR_6, VAR_7);
  break;
 case 129:
  VAR_10 = FUNC_1(VAR_5, VAR_8, VAR_9, VAR_6, VAR_7);
  break;
 default:
  VAR_10 = -VAR_0;
  break;
 }
out:
 FUNC_5(VAR_8);
 return VAR_10;
}
