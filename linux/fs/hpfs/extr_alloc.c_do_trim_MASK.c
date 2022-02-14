
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct super_block {int dummy; } ;
typedef unsigned int secno ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (struct super_block*,unsigned int,unsigned int,int ,int ) ;

__attribute__((used)) static int FUNC_2(struct super_block *VAR_3, secno VAR_4, unsigned VAR_5, secno VAR_6, secno VAR_7, unsigned VAR_8, unsigned *VAR_9)
{
 int VAR_10;
 secno VAR_11;
 if (FUNC_0(VAR_2))
  return -VAR_0;
 VAR_11 = VAR_4 + VAR_5;
 if (VAR_4 < VAR_6)
  VAR_4 = VAR_6;
 if (VAR_11 > VAR_7)
  VAR_11 = VAR_7;
 if (VAR_4 >= VAR_11)
  return 0;
 if (VAR_11 - VAR_4 < VAR_8)
  return 0;
 VAR_10 = FUNC_1(VAR_3, VAR_4, VAR_11 - VAR_4, VAR_1, 0);
 if (VAR_10)
  return VAR_10;
 *VAR_9 += VAR_11 - VAR_4;
 return 0;
}
