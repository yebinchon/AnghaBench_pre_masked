
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ocfs2_super {int slot_num; } ;
struct inode {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct inode*) ;
 int FUNC_1 (int ,char*,int,int,int ) ;
 int FUNC_2 (int) ;
 struct inode* FUNC_3 (struct ocfs2_super*,int,int ) ;
 scalar_t__ FUNC_4 (struct ocfs2_super*) ;
 int FUNC_5 (struct ocfs2_super*,int) ;
 int FUNC_6 (struct ocfs2_super*) ;

__attribute__((used)) static int FUNC_7(struct ocfs2_super *VAR_5)
{
 struct inode *VAR_6 = ((void*)0);
 int VAR_7 = 0;
 int VAR_8;

 for (VAR_8 = VAR_4 + 1;
      VAR_8 < VAR_3;
      VAR_8++) {
  if (!FUNC_5(VAR_5, VAR_8))
   continue;
  VAR_6 = FUNC_3(VAR_5, VAR_8, VAR_5->slot_num);
  if (!VAR_6) {
   FUNC_6(VAR_5);
   VAR_7 = FUNC_4(VAR_5) ? -VAR_1 : -VAR_0;
   FUNC_1(VAR_2, "status=%d, sysfile=%d, slot=%d\n",
        VAR_7, VAR_8, VAR_5->slot_num);
   goto bail;
  }

  FUNC_0(VAR_6);
 }

bail:
 if (VAR_7)
  FUNC_2(VAR_7);
 return VAR_7;
}
