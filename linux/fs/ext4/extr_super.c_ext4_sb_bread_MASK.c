
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct super_block {int dummy; } ;
struct buffer_head {int dummy; } ;
typedef int sector_t ;


 int VAR_0 ;
 int VAR_1 ;
 struct buffer_head* FUNC_0 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (struct buffer_head*) ;
 int FUNC_2 (int ,int,int,struct buffer_head**) ;
 int FUNC_3 (struct buffer_head*) ;
 struct buffer_head* FUNC_4 (struct super_block*,int ) ;
 int FUNC_5 (struct buffer_head*) ;

struct buffer_head *
FUNC_6(struct super_block *VAR_4, sector_t VAR_5, int VAR_6)
{
 struct buffer_head *VAR_7 = FUNC_4(VAR_4, VAR_5);

 if (VAR_7 == ((void*)0))
  return FUNC_0(-VAR_1);
 if (FUNC_1(VAR_7))
  return VAR_7;
 FUNC_2(VAR_3, VAR_2 | VAR_6, 1, &VAR_7);
 FUNC_5(VAR_7);
 if (FUNC_1(VAR_7))
  return VAR_7;
 FUNC_3(VAR_7);
 return FUNC_0(-VAR_0);
}
