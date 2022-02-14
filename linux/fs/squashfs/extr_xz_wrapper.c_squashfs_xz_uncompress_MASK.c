
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int in_pos; int in_size; scalar_t__ out_pos; scalar_t__ out_size; int * out; scalar_t__ in; } ;
struct squashfs_xz {TYPE_1__ buf; int state; } ;
struct squashfs_sb_info {scalar_t__ devblksize; } ;
struct squashfs_page_actor {int dummy; } ;
struct buffer_head {scalar_t__ b_data; } ;
typedef enum xz_ret { ____Placeholder_xz_ret } xz_ret ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int,scalar_t__) ;
 int FUNC_1 (struct buffer_head*) ;
 int FUNC_2 (struct squashfs_page_actor*) ;
 int * FUNC_3 (struct squashfs_page_actor*) ;
 int * FUNC_4 (struct squashfs_page_actor*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ,TYPE_1__*) ;

__attribute__((used)) static int FUNC_7(struct squashfs_sb_info *VAR_4, void *VAR_5,
 struct buffer_head **VAR_6, int VAR_7, int VAR_8, int VAR_9,
 struct squashfs_page_actor *VAR_10)
{
 enum xz_ret VAR_11;
 int VAR_12, VAR_13 = 0, VAR_14 = 0;
 struct squashfs_xz *VAR_15 = VAR_5;

 FUNC_5(VAR_15->state);
 VAR_15->buf.in_pos = 0;
 VAR_15->buf.in_size = 0;
 VAR_15->buf.out_pos = 0;
 VAR_15->buf.out_size = VAR_1;
 VAR_15->buf.out = FUNC_3(VAR_10);

 do {
  if (VAR_15->buf.in_pos == VAR_15->buf.in_size && VAR_14 < VAR_7) {
   VAR_12 = FUNC_0(VAR_9, VAR_4->devblksize - VAR_8);
   VAR_9 -= VAR_12;
   VAR_15->buf.in = VAR_6[VAR_14]->b_data + VAR_8;
   VAR_15->buf.in_size = VAR_12;
   VAR_15->buf.in_pos = 0;
   VAR_8 = 0;
  }

  if (VAR_15->buf.out_pos == VAR_15->buf.out_size) {
   VAR_15->buf.out = FUNC_4(VAR_10);
   if (VAR_15->buf.out != ((void*)0)) {
    VAR_15->buf.out_pos = 0;
    VAR_13 += VAR_1;
   }
  }

  VAR_11 = FUNC_6(VAR_15->state, &VAR_15->buf);

  if (VAR_15->buf.in_pos == VAR_15->buf.in_size && VAR_14 < VAR_7)
   FUNC_1(VAR_6[VAR_14++]);
 } while (VAR_11 == VAR_2);

 FUNC_2(VAR_10);

 if (VAR_11 != VAR_3 || VAR_14 < VAR_7)
  goto out;

 return VAR_13 + VAR_15->buf.out_pos;

out:
 for (; VAR_14 < VAR_7; VAR_14++)
  FUNC_1(VAR_6[VAR_14]);

 return -VAR_0;
}
