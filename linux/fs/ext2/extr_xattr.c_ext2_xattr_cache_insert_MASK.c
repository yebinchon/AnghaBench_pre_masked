
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct mb_cache {int dummy; } ;
struct buffer_head {int b_blocknr; } ;
typedef scalar_t__ __u32 ;
struct TYPE_4__ {int h_hash; } ;
struct TYPE_3__ {int c_entry_count; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_2__* FUNC_0 (struct buffer_head*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct buffer_head*,char*,int) ;
 TYPE_1__* VAR_2 ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (struct mb_cache*,int ,scalar_t__,int ,int) ;

__attribute__((used)) static int
FUNC_5(struct mb_cache *VAR_3, struct buffer_head *VAR_4)
{
 __u32 VAR_5 = FUNC_3(FUNC_0(VAR_4)->h_hash);
 int VAR_6;

 VAR_6 = FUNC_4(VAR_3, VAR_1, VAR_5, VAR_4->b_blocknr,
          1);
 if (VAR_6) {
  if (VAR_6 == -VAR_0) {
   FUNC_2(VAR_4, "already in cache (%d cache entries)",
    FUNC_1(&VAR_2->c_entry_count));
   VAR_6 = 0;
  }
 } else
  FUNC_2(VAR_4, "inserting [%x]", (int)VAR_5);
 return VAR_6;
}
