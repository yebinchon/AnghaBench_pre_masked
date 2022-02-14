
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct extent_buffer {int fs_info; } ;
struct btrfs_key {int dummy; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 struct extent_buffer* FUNC_1 (int ) ;
 int FUNC_2 (struct extent_buffer*) ;
 int FUNC_3 (struct extent_buffer*) ;
 int FUNC_4 (struct extent_buffer*) ;
 int FUNC_5 (struct extent_buffer*,int) ;
 int FUNC_6 (struct extent_buffer*,struct btrfs_key*,int) ;
 int FUNC_7 (struct extent_buffer*,int) ;
 int FUNC_8 (struct extent_buffer*) ;
 int FUNC_9 (struct extent_buffer*) ;
 struct extent_buffer* FUNC_10 (int ,int ,int ,int,struct btrfs_key*) ;

struct extent_buffer *FUNC_11(struct extent_buffer *VAR_2,
        int VAR_3)
{
 int VAR_4 = FUNC_3(VAR_2);
 struct extent_buffer *VAR_5;
 struct btrfs_key VAR_6;

 if (VAR_3 < 0 || VAR_3 >= FUNC_4(VAR_2))
  return FUNC_1(-VAR_1);

 FUNC_0(VAR_4 == 0);

 FUNC_6(VAR_2, &VAR_6, VAR_3);
 VAR_5 = FUNC_10(VAR_2->fs_info, FUNC_5(VAR_2, VAR_3),
        FUNC_7(VAR_2, VAR_3),
        VAR_4 - 1, &VAR_6);
 if (!FUNC_2(VAR_5) && !FUNC_8(VAR_5)) {
  FUNC_9(VAR_5);
  VAR_5 = FUNC_1(-VAR_0);
 }

 return VAR_5;
}
