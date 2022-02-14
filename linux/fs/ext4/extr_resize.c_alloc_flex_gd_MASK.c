
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ext4_new_group_data {int dummy; } ;
struct ext4_new_flex_group_data {unsigned long count; struct ext4_new_flex_group_data* groups; int * bg_flags; } ;
typedef int __u16 ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct ext4_new_flex_group_data*) ;
 struct ext4_new_flex_group_data* FUNC_1 (int,int ) ;
 void* FUNC_2 (unsigned long,int,int ) ;

__attribute__((used)) static struct ext4_new_flex_group_data *FUNC_3(unsigned long VAR_2)
{
 struct ext4_new_flex_group_data *VAR_3;

 VAR_3 = FUNC_1(sizeof(*VAR_3), VAR_0);
 if (VAR_3 == ((void*)0))
  goto out3;

 if (VAR_2 >= VAR_1 / sizeof(struct ext4_new_group_data))
  goto out2;
 VAR_3->count = VAR_2;

 VAR_3->groups = FUNC_2(VAR_2,
     sizeof(struct ext4_new_group_data),
     VAR_0);
 if (VAR_3->groups == ((void*)0))
  goto out2;

 VAR_3->bg_flags = FUNC_2(VAR_2, sizeof(__u16),
       VAR_0);
 if (VAR_3->bg_flags == ((void*)0))
  goto out1;

 return VAR_3;

out1:
 FUNC_0(VAR_3->groups);
out2:
 FUNC_0(VAR_3);
out3:
 return ((void*)0);
}
