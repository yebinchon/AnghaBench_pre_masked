
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct udf_bitmap {int s_nr_groups; } ;
struct super_block {int dummy; } ;
struct buffer_head {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct udf_bitmap* FUNC_0 (int,int ) ;
 int FUNC_1 (struct super_block*,int ) ;
 struct udf_bitmap* FUNC_2 (int) ;

__attribute__((used)) static struct udf_bitmap *FUNC_3(struct super_block *VAR_2, u32 VAR_3)
{
 struct udf_bitmap *VAR_4;
 int VAR_5;
 int VAR_6;

 VAR_5 = FUNC_1(VAR_2, VAR_3);
 VAR_6 = sizeof(struct udf_bitmap) +
  (sizeof(struct buffer_head *) * VAR_5);

 if (VAR_6 <= VAR_1)
  VAR_4 = FUNC_0(VAR_6, VAR_0);
 else
  VAR_4 = FUNC_2(VAR_6);

 if (!VAR_4)
  return ((void*)0);

 VAR_4->s_nr_groups = VAR_5;
 return VAR_4;
}
