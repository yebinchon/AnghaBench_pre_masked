
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct btrfs_feature_attr {int feature_set; int feature_bit; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;



 int FUNC_0 (char*,int) ;

__attribute__((used)) static int FUNC_1(struct btrfs_feature_attr *VAR_6)
{
 int VAR_7 = 0;
 u64 VAR_8, VAR_9;
 switch (VAR_6->feature_set) {
 case 130:
  VAR_8 = VAR_3;
  VAR_9 = VAR_2;
  break;
 case 129:
  VAR_8 = VAR_1;
  VAR_9 = VAR_0;
  break;
 case 128:
  VAR_8 = VAR_5;
  VAR_9 = VAR_4;
  break;
 default:
  FUNC_0("btrfs: sysfs: unknown feature set %d\n",
    VAR_6->feature_set);
  return 0;
 }

 if (VAR_8 & VAR_6->feature_bit)
  VAR_7 |= 1;
 if (VAR_9 & VAR_6->feature_bit)
  VAR_7 |= 2;

 return VAR_7;
}
