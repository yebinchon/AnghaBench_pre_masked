
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct buffer_head {int dummy; } ;
struct block_device {int dummy; } ;
typedef int sector_t ;


 int VAR_0 ;
 int VAR_1 ;
 struct buffer_head* FUNC_0 (struct block_device*,int ,unsigned int) ;
 int FUNC_1 (struct buffer_head*) ;
 scalar_t__ FUNC_2 (struct buffer_head*) ;
 int FUNC_3 (int ,int ,int,struct buffer_head**) ;

void FUNC_4(struct block_device *VAR_2, sector_t VAR_3, unsigned VAR_4)
{
 struct buffer_head *VAR_5 = FUNC_0(VAR_2, VAR_3, VAR_4);
 if (FUNC_2(VAR_5)) {
  FUNC_3(VAR_0, VAR_1, 1, &VAR_5);
  FUNC_1(VAR_5);
 }
}
