
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u64 ;
struct extent_state {int dummy; } ;
struct extent_io_tree {int dummy; } ;
struct extent_buffer {scalar_t__ len; scalar_t__ start; int fs_info; } ;
struct TYPE_2__ {scalar_t__ journal_info; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*,scalar_t__,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_1 (struct extent_buffer*) ;
 int FUNC_2 (struct extent_buffer*) ;
 int FUNC_3 (struct extent_buffer*) ;
 int FUNC_4 (struct extent_buffer*) ;
 int FUNC_5 (struct extent_buffer*) ;
 TYPE_1__* VAR_2 ;
 int FUNC_6 (struct extent_buffer*) ;
 scalar_t__ FUNC_7 (struct extent_buffer*) ;
 int FUNC_8 (struct extent_io_tree*,scalar_t__,scalar_t__,struct extent_state**) ;
 int FUNC_9 (struct extent_io_tree*,scalar_t__,scalar_t__,struct extent_state**) ;

__attribute__((used)) static int FUNC_10(struct extent_io_tree *VAR_3,
     struct extent_buffer *VAR_4, u64 VAR_5,
     int VAR_6)
{
 struct extent_state *VAR_7 = ((void*)0);
 int VAR_8;
 bool VAR_9 = (VAR_2->journal_info == VAR_0);

 if (!VAR_5 || FUNC_1(VAR_4) == VAR_5)
  return 0;

 if (VAR_6)
  return -VAR_1;

 if (VAR_9) {
  FUNC_3(VAR_4);
  FUNC_2(VAR_4);
 }

 FUNC_8(VAR_3, VAR_4->start, VAR_4->start + VAR_4->len - 1,
    &VAR_7);
 if (FUNC_7(VAR_4) &&
     FUNC_1(VAR_4) == VAR_5) {
  VAR_8 = 0;
  goto out;
 }
 FUNC_0(VAR_4->fs_info,
  "parent transid verify failed on %llu wanted %llu found %llu",
   VAR_4->start,
   VAR_5, FUNC_1(VAR_4));
 VAR_8 = 1;
 if (!FUNC_6(VAR_4))
  FUNC_5(VAR_4);
out:
 FUNC_9(VAR_3, VAR_4->start, VAR_4->start + VAR_4->len - 1,
        &VAR_7);
 if (VAR_9)
  FUNC_4(VAR_4);
 return VAR_8;
}
