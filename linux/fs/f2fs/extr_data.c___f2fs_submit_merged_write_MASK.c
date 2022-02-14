
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct f2fs_sb_info {struct f2fs_bio_info** write_io; } ;
struct TYPE_2__ {int type; int op_flags; int op; } ;
struct f2fs_bio_info {int io_rwsem; TYPE_1__ fio; } ;
typedef enum temp_type { ____Placeholder_temp_type } temp_type ;
typedef enum page_type { ____Placeholder_page_type } page_type ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (struct f2fs_bio_info*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct f2fs_sb_info*,int ) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static void FUNC_5(struct f2fs_sb_info *VAR_8,
    enum page_type VAR_9, enum temp_type VAR_10)
{
 enum page_type VAR_11 = FUNC_0(VAR_9);
 struct f2fs_bio_info *VAR_12 = VAR_8->write_io[VAR_11] + VAR_10;

 FUNC_2(&VAR_12->io_rwsem);


 if (VAR_9 >= VAR_0) {
  VAR_12->fio.type = VAR_0;
  VAR_12->fio.op = VAR_4;
  VAR_12->fio.op_flags = VAR_3 | VAR_6 | VAR_7;
  if (!FUNC_3(VAR_8, VAR_1))
   VAR_12->fio.op_flags |= VAR_5 | VAR_2;
 }
 FUNC_1(VAR_12);
 FUNC_4(&VAR_12->io_rwsem);
}
