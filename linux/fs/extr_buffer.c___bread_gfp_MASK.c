
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct buffer_head {int dummy; } ;
struct block_device {int dummy; } ;
typedef int sector_t ;
typedef int gfp_t ;


 struct buffer_head* FUNC_0 (struct buffer_head*) ;
 struct buffer_head* FUNC_1 (struct block_device*,int ,unsigned int,int ) ;
 int FUNC_2 (struct buffer_head*) ;
 scalar_t__ FUNC_3 (struct buffer_head*) ;

struct buffer_head *
FUNC_4(struct block_device *VAR_0, sector_t VAR_1,
     unsigned VAR_2, gfp_t VAR_3)
{
 struct buffer_head *VAR_4 = FUNC_1(VAR_0, VAR_1, VAR_2, VAR_3);

 if (FUNC_3(VAR_4) && !FUNC_2(VAR_4))
  VAR_4 = FUNC_0(VAR_4);
 return VAR_4;
}
