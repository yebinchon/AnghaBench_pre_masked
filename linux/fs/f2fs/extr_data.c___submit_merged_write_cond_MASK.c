
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int dummy; } ;
struct inode {int dummy; } ;
struct f2fs_sb_info {struct f2fs_bio_info** write_io; } ;
struct f2fs_bio_info {int io_rwsem; int bio; } ;
typedef int nid_t ;
typedef enum temp_type { ____Placeholder_temp_type } temp_type ;
typedef enum page_type { ____Placeholder_page_type } page_type ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct f2fs_sb_info*,int,int) ;
 int FUNC_2 (int ,struct inode*,struct page*,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static void FUNC_5(struct f2fs_sb_info *VAR_3,
    struct inode *VAR_4, struct page *VAR_5,
    nid_t VAR_6, enum page_type VAR_7, bool VAR_8)
{
 enum temp_type VAR_9;
 bool VAR_10 = 1;

 for (VAR_9 = VAR_0; VAR_9 < VAR_2; VAR_9++) {
  if (!VAR_8) {
   enum page_type VAR_11 = FUNC_0(VAR_7);
   struct f2fs_bio_info *VAR_12 = VAR_3->write_io[VAR_11] + VAR_9;

   FUNC_3(&VAR_12->io_rwsem);
   VAR_10 = FUNC_2(VAR_12->bio, VAR_4, VAR_5, VAR_6);
   FUNC_4(&VAR_12->io_rwsem);
  }
  if (VAR_10)
   FUNC_1(VAR_3, VAR_7, VAR_9);


  if (VAR_7 >= VAR_1)
   break;
 }
}
