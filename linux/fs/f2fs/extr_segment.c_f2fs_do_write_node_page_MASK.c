
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct f2fs_summary {int dummy; } ;
struct f2fs_io_info {int io_type; int sbi; } ;


 int VAR_0 ;
 int FUNC_0 (struct f2fs_summary*,struct f2fs_io_info*) ;
 int FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (struct f2fs_summary*,unsigned int,int ,int ) ;

void FUNC_3(unsigned int VAR_1, struct f2fs_io_info *VAR_2)
{
 struct f2fs_summary VAR_3;

 FUNC_2(&VAR_3, VAR_1, 0, 0);
 FUNC_0(&VAR_3, VAR_2);

 FUNC_1(VAR_2->sbi, VAR_2->io_type, VAR_0);
}
