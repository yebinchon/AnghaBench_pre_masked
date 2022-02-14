
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct nilfs_sufile_header {int sh_ndirtysegs; int sh_ncleansegs; } ;
struct buffer_head {int b_page; } ;


 int FUNC_0 (struct buffer_head*) ;
 void* FUNC_1 (int ) ;
 int FUNC_2 (void*) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (struct buffer_head*) ;

__attribute__((used)) static void FUNC_5(struct buffer_head *VAR_0,
         u64 VAR_1, u64 VAR_2)
{
 struct nilfs_sufile_header *VAR_3;
 void *VAR_4;

 VAR_4 = FUNC_1(VAR_0->b_page);
 VAR_3 = VAR_4 + FUNC_0(VAR_0);
 FUNC_3(&VAR_3->sh_ncleansegs, VAR_1);
 FUNC_3(&VAR_3->sh_ndirtysegs, VAR_2);
 FUNC_2(VAR_4);

 FUNC_4(VAR_0);
}
