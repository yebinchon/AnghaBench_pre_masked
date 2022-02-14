
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ext4_free_extent {int fe_len; int fe_start; int fe_group; int fe_logical; } ;
struct ext4_buddy {void* bd_bitmap; int bd_sb; int bd_group; } ;


 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,char*,int,int,int,int ,scalar_t__,scalar_t__,int ) ;
 int FUNC_5 (int ,int ) ;
 void* FUNC_6 (struct ext4_buddy*,int,int*) ;
 int FUNC_7 (struct ext4_buddy*,int) ;
 scalar_t__ FUNC_8 (int,void*) ;

__attribute__((used)) static int FUNC_9(struct ext4_buddy *VAR_0, int VAR_1,
    int VAR_2, struct ext4_free_extent *VAR_3)
{
 int VAR_4 = VAR_1;
 int VAR_5, VAR_6;
 void *VAR_7;

 FUNC_3(FUNC_5(VAR_0->bd_sb, VAR_0->bd_group));
 FUNC_0(VAR_3 == ((void*)0));

 VAR_7 = FUNC_6(VAR_0, 0, &VAR_5);
 FUNC_0(VAR_7 == ((void*)0));
 FUNC_0(VAR_1 >= VAR_5);
 if (FUNC_8(VAR_1, VAR_7)) {
  VAR_3->fe_len = 0;
  VAR_3->fe_start = 0;
  VAR_3->fe_group = 0;
  return 0;
 }


 VAR_6 = FUNC_7(VAR_0, VAR_1);
 VAR_1 = VAR_1 >> VAR_6;

 VAR_3->fe_len = 1 << VAR_6;
 VAR_3->fe_start = VAR_1 << VAR_6;
 VAR_3->fe_group = VAR_0->bd_group;


 VAR_4 = VAR_4 - VAR_3->fe_start;
 VAR_3->fe_len -= VAR_4;
 VAR_3->fe_start += VAR_4;

 while (VAR_2 > VAR_3->fe_len &&
        FUNC_6(VAR_0, VAR_6, &VAR_5)) {

  if (VAR_1 + 1 >= VAR_5)
   break;

  VAR_4 = (VAR_1 + 1) * (1 << VAR_6);
  if (FUNC_8(VAR_4, VAR_0->bd_bitmap))
   break;

  VAR_6 = FUNC_7(VAR_0, VAR_4);

  VAR_1 = VAR_4 >> VAR_6;
  VAR_3->fe_len += 1 << VAR_6;
 }

 if (VAR_3->fe_start + VAR_3->fe_len > FUNC_1(VAR_0->bd_sb)) {

  FUNC_2(1);
  FUNC_4(VAR_0->bd_sb, "corruption or bug in mb_find_extent "
      "block=%d, order=%d needed=%d ex=%u/%d/%d@%u",
      VAR_1, VAR_6, VAR_2, VAR_3->fe_group, VAR_3->fe_start,
      VAR_3->fe_len, VAR_3->fe_logical);
  VAR_3->fe_len = 0;
  VAR_3->fe_start = 0;
  VAR_3->fe_group = 0;
 }
 return VAR_3->fe_len;
}
