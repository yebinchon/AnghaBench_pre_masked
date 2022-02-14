
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct buffer_head {scalar_t__ b_blocknr; unsigned int b_size; struct block_device* b_bdev; } ;
struct block_device {int dummy; } ;
typedef scalar_t__ sector_t ;
struct TYPE_2__ {int * bhs; } ;


 unsigned int VAR_0 ;
 struct buffer_head* FUNC_0 (int ) ;
 int FUNC_1 (int ,struct buffer_head*) ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 TYPE_1__ VAR_1 ;
 int FUNC_4 () ;
 int FUNC_5 (struct buffer_head*) ;

__attribute__((used)) static struct buffer_head *
FUNC_6(struct block_device *VAR_2, sector_t VAR_3, unsigned VAR_4)
{
 struct buffer_head *VAR_5 = ((void*)0);
 unsigned int VAR_6;

 FUNC_4();
 FUNC_2();
 for (VAR_6 = 0; VAR_6 < VAR_0; VAR_6++) {
  struct buffer_head *VAR_7 = FUNC_0(VAR_1.bhs[VAR_6]);

  if (VAR_7 && VAR_7->b_blocknr == VAR_3 && VAR_7->b_bdev == VAR_2 &&
      VAR_7->b_size == VAR_4) {
   if (VAR_6) {
    while (VAR_6) {
     FUNC_1(VAR_1.bhs[VAR_6],
      FUNC_0(VAR_1.bhs[VAR_6 - 1]));
     VAR_6--;
    }
    FUNC_1(VAR_1.bhs[0], VAR_7);
   }
   FUNC_5(VAR_7);
   VAR_5 = VAR_7;
   break;
  }
 }
 FUNC_3();
 return VAR_5;
}
