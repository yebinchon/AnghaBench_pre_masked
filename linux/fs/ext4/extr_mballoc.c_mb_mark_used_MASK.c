
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct ext4_free_extent {int fe_start; int fe_len; scalar_t__ fe_group; } ;
struct ext4_buddy {scalar_t__ bd_group; int bd_bitmap; TYPE_2__* bd_info; TYPE_1__* bd_sb; } ;
struct TYPE_8__ {int* s_mb_maxs; } ;
struct TYPE_7__ {int bb_free; int bb_first_free; int * bb_counters; int bb_fragments; } ;
struct TYPE_6__ {int s_blocksize; } ;


 int FUNC_0 (int) ;
 TYPE_4__* FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (TYPE_1__*,scalar_t__) ;
 int FUNC_4 (int ,int,int) ;
 int FUNC_5 (struct ext4_buddy*) ;
 int FUNC_6 (int,void*) ;
 void* FUNC_7 (struct ext4_buddy*,int,int*) ;
 int FUNC_8 (struct ext4_buddy*,int) ;
 int FUNC_9 (struct ext4_buddy*,int,int) ;
 int FUNC_10 (int,void*) ;
 int FUNC_11 (TYPE_1__*,TYPE_2__*) ;
 int FUNC_12 (int,int ) ;

__attribute__((used)) static int FUNC_13(struct ext4_buddy *VAR_0, struct ext4_free_extent *VAR_1)
{
 int VAR_2;
 int VAR_3 = 0;
 int VAR_4 = 0;
 int VAR_5;
 int VAR_6 = VAR_1->fe_start;
 int VAR_7 = VAR_1->fe_len;
 unsigned VAR_8 = 0;
 int VAR_9 = VAR_7;
 void *VAR_10;

 FUNC_0(VAR_6 + VAR_7 > (VAR_0->bd_sb->s_blocksize << 3));
 FUNC_0(VAR_0->bd_group != VAR_1->fe_group);
 FUNC_2(FUNC_3(VAR_0->bd_sb, VAR_0->bd_group));
 FUNC_5(VAR_0);
 FUNC_9(VAR_0, VAR_6, VAR_7);

 VAR_0->bd_info->bb_free -= VAR_7;
 if (VAR_0->bd_info->bb_first_free == VAR_6)
  VAR_0->bd_info->bb_first_free += VAR_7;


 if (VAR_6 != 0)
  VAR_3 = !FUNC_12(VAR_6 - 1, VAR_0->bd_bitmap);
 if (VAR_6 + VAR_7 < FUNC_1(VAR_0->bd_sb)->s_mb_maxs[0])
  VAR_4 = !FUNC_12(VAR_6 + VAR_7, VAR_0->bd_bitmap);
 if (VAR_3 && VAR_4)
  VAR_0->bd_info->bb_fragments++;
 else if (!VAR_3 && !VAR_4)
  VAR_0->bd_info->bb_fragments--;


 while (VAR_7) {
  VAR_2 = FUNC_8(VAR_0, VAR_6);

  if (((VAR_6 >> VAR_2) << VAR_2) == VAR_6 && VAR_7 >= (1 << VAR_2)) {

   VAR_3 = 1 << VAR_2;
   VAR_10 = FUNC_7(VAR_0, VAR_2, &VAR_4);
   FUNC_0((VAR_6 >> VAR_2) >= VAR_4);
   FUNC_10(VAR_6 >> VAR_2, VAR_10);
   VAR_0->bd_info->bb_counters[VAR_2]--;
   VAR_6 += VAR_3;
   VAR_7 -= VAR_3;
   FUNC_0(VAR_7 < 0);
   continue;
  }


  if (VAR_8 == 0)
   VAR_8 = VAR_7 | (VAR_2 << 16);


  FUNC_0(VAR_2 <= 0);
  VAR_10 = FUNC_7(VAR_0, VAR_2, &VAR_4);
  FUNC_10(VAR_6 >> VAR_2, VAR_10);
  VAR_0->bd_info->bb_counters[VAR_2]--;

  VAR_2--;
  VAR_5 = (VAR_6 >> VAR_2) & ~1U;
  VAR_10 = FUNC_7(VAR_0, VAR_2, &VAR_4);
  FUNC_6(VAR_5, VAR_10);
  FUNC_6(VAR_5 + 1, VAR_10);
  VAR_0->bd_info->bb_counters[VAR_2]++;
  VAR_0->bd_info->bb_counters[VAR_2]++;
 }
 FUNC_11(VAR_0->bd_sb, VAR_0->bd_info);

 FUNC_4(VAR_0->bd_bitmap, VAR_1->fe_start, VAR_9);
 FUNC_5(VAR_0);

 return VAR_8;
}
