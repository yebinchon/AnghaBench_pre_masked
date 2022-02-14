
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ avail_out; scalar_t__ avail_in; int total_out; int * next_out; scalar_t__ next_in; } ;
typedef TYPE_1__ z_stream ;
struct squashfs_sb_info {scalar_t__ devblksize; } ;
struct squashfs_page_actor {int dummy; } ;
struct buffer_head {scalar_t__ b_data; } ;


 int VAR_0 ;
 void* VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int,scalar_t__) ;
 int FUNC_1 (struct buffer_head*) ;
 int FUNC_2 (struct squashfs_page_actor*) ;
 int * FUNC_3 (struct squashfs_page_actor*) ;
 int * FUNC_4 (struct squashfs_page_actor*) ;
 int FUNC_5 (TYPE_1__*,int ) ;
 int FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (TYPE_1__*) ;

__attribute__((used)) static int FUNC_8(struct squashfs_sb_info *VAR_5, void *VAR_6,
 struct buffer_head **VAR_7, int VAR_8, int VAR_9, int VAR_10,
 struct squashfs_page_actor *VAR_11)
{
 int VAR_12, VAR_13 = 0, VAR_14 = 0;
 z_stream *VAR_15 = VAR_6;

 VAR_15->avail_out = VAR_1;
 VAR_15->next_out = FUNC_3(VAR_11);
 VAR_15->avail_in = 0;

 do {
  if (VAR_15->avail_in == 0 && VAR_14 < VAR_8) {
   int VAR_16 = FUNC_0(VAR_10, VAR_5->devblksize - VAR_9);
   VAR_10 -= VAR_16;
   VAR_15->next_in = VAR_7[VAR_14]->b_data + VAR_9;
   VAR_15->avail_in = VAR_16;
   VAR_9 = 0;
  }

  if (VAR_15->avail_out == 0) {
   VAR_15->next_out = FUNC_4(VAR_11);
   if (VAR_15->next_out != ((void*)0))
    VAR_15->avail_out = VAR_1;
  }

  if (!VAR_13) {
   VAR_12 = FUNC_7(VAR_15);
   if (VAR_12 != VAR_2) {
    FUNC_2(VAR_11);
    goto out;
   }
   VAR_13 = 1;
  }

  VAR_12 = FUNC_5(VAR_15, VAR_4);

  if (VAR_15->avail_in == 0 && VAR_14 < VAR_8)
   FUNC_1(VAR_7[VAR_14++]);
 } while (VAR_12 == VAR_2);

 FUNC_2(VAR_11);

 if (VAR_12 != VAR_3)
  goto out;

 VAR_12 = FUNC_6(VAR_15);
 if (VAR_12 != VAR_2)
  goto out;

 if (VAR_14 < VAR_8)
  goto out;

 return VAR_15->total_out;

out:
 for (; VAR_14 < VAR_8; VAR_14++)
  FUNC_1(VAR_7[VAR_14]);

 return -VAR_0;
}
