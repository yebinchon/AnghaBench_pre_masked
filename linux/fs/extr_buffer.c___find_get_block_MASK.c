
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct buffer_head {int dummy; } ;
struct block_device {int dummy; } ;
typedef int sector_t ;


 struct buffer_head* FUNC_0 (struct block_device*,int ) ;
 int FUNC_1 (struct buffer_head*) ;
 struct buffer_head* FUNC_2 (struct block_device*,int ,unsigned int) ;
 int FUNC_3 (struct buffer_head*) ;

struct buffer_head *
FUNC_4(struct block_device *VAR_0, sector_t VAR_1, unsigned VAR_2)
{
 struct buffer_head *VAR_3 = FUNC_2(VAR_0, VAR_1, VAR_2);

 if (VAR_3 == ((void*)0)) {

  VAR_3 = FUNC_0(VAR_0, VAR_1);
  if (VAR_3)
   FUNC_1(VAR_3);
 } else
  FUNC_3(VAR_3);

 return VAR_3;
}
