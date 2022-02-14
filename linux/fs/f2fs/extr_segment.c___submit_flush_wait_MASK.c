
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct f2fs_sb_info {int dummy; } ;
struct block_device {int dummy; } ;
struct bio {int bi_opf; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct bio*) ;
 int FUNC_1 (struct bio*,struct block_device*) ;
 struct bio* FUNC_2 (struct f2fs_sb_info*,int ,int) ;
 int FUNC_3 (struct bio*) ;
 int FUNC_4 (struct f2fs_sb_info*,int ) ;
 int FUNC_5 (struct block_device*,int ,int ,int) ;

__attribute__((used)) static int FUNC_6(struct f2fs_sb_info *VAR_6,
    struct block_device *VAR_7)
{
 struct bio *VAR_8;
 int VAR_9;

 VAR_8 = FUNC_2(VAR_6, 0, 0);
 if (!VAR_8)
  return -VAR_0;

 VAR_8->bi_opf = VAR_3 | VAR_5 | VAR_4;
 FUNC_1(VAR_8, VAR_7);
 VAR_9 = FUNC_3(VAR_8);
 FUNC_0(VAR_8);

 FUNC_5(VAR_7, FUNC_4(VAR_6, VAR_2),
    FUNC_4(VAR_6, VAR_1), VAR_9);
 return VAR_9;
}
