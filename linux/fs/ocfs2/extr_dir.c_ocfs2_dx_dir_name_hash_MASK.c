
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ocfs2_super {int osb_dx_seed; } ;
struct ocfs2_dx_hinfo {void* minor_hash; void* major_hash; } ;
struct inode {int i_sb; } ;
typedef int buf ;
typedef void* __u32 ;


 struct ocfs2_super* FUNC_0 (int ) ;
 int FUNC_1 (void**,void**) ;
 int FUNC_2 (void**,int ,int) ;
 int FUNC_3 (char const*,int,void**,int) ;
 int FUNC_4 (char*,char const*,int) ;

__attribute__((used)) static void FUNC_5(struct inode *VAR_0, const char *VAR_1, int VAR_2,
       struct ocfs2_dx_hinfo *VAR_3)
{
 struct ocfs2_super *VAR_4 = FUNC_0(VAR_0->i_sb);
 const char *VAR_5;
 __u32 VAR_6[8], VAR_7[4];





 if ((VAR_2 == 1 && !FUNC_4(".", VAR_1, 1)) ||
     (VAR_2 == 2 && !FUNC_4("..", VAR_1, 2))) {
  VAR_7[0] = VAR_7[1] = 0;
  goto out;
 }
 FUNC_2(VAR_7, VAR_4->osb_dx_seed, sizeof(VAR_7));

 VAR_5 = VAR_1;
 while (VAR_2 > 0) {
  FUNC_3(VAR_5, VAR_2, VAR_6, 4);
  FUNC_1(VAR_7, VAR_6);
  VAR_2 -= 16;
  VAR_5 += 16;
 }

out:
 VAR_3->major_hash = VAR_7[0];
 VAR_3->minor_hash = VAR_7[1];
}
