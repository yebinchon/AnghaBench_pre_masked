
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iomap_page {int write_count; } ;
struct inode {int i_mapping; } ;
struct bio_vec {int bv_page; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (struct inode*) ;
 int FUNC_6 (int ,int ) ;
 struct iomap_page* FUNC_7 (int ) ;

__attribute__((used)) static void
FUNC_8(
 struct inode *VAR_2,
 struct bio_vec *VAR_3,
 int VAR_4)
{
 struct iomap_page *VAR_5 = FUNC_7(VAR_3->bv_page);

 if (VAR_4) {
  FUNC_1(VAR_3->bv_page);
  FUNC_6(VAR_2->i_mapping, -VAR_0);
 }

 FUNC_0(VAR_5 || FUNC_5(VAR_2) == VAR_1);
 FUNC_0(!VAR_5 || FUNC_3(&VAR_5->write_count) > 0);

 if (!VAR_5 || FUNC_2(&VAR_5->write_count))
  FUNC_4(VAR_3->bv_page);
}
