
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct super_block {int dummy; } ;
struct iso_directory_record {int dummy; } ;
struct buffer_head {scalar_t__ b_data; } ;


 int FUNC_0 (struct buffer_head*) ;
 struct buffer_head* FUNC_1 (struct super_block*,unsigned long) ;

__attribute__((used)) static bool FUNC_2(struct super_block *VAR_0, unsigned long VAR_1)
{
 int VAR_2 = 0, VAR_3 = 0, VAR_4;
 struct iso_directory_record *VAR_5;
 struct buffer_head *VAR_6;

 VAR_6 = FUNC_1(VAR_0, VAR_1);
 if (!VAR_6)
  return 1;
 while (VAR_3 < 3) {
  VAR_5 = (struct iso_directory_record *) (VAR_6->b_data + VAR_2);
  VAR_4 = *(unsigned char *) VAR_5;
  if (VAR_4 == 0)
   break;
  VAR_3++;
  VAR_2 += VAR_4;
 }
 FUNC_0(VAR_6);
 return VAR_3 < 3;
}
