
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ocfs2_xattr_set_ctxt {int dummy; } ;
struct ocfs2_xa_loc {int xl_entry; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct ocfs2_xa_loc*,char*,unsigned int) ;
 int FUNC_2 (struct ocfs2_xa_loc*) ;
 unsigned int FUNC_3 (struct ocfs2_xa_loc*) ;
 int FUNC_4 (struct ocfs2_xa_loc*,int ,struct ocfs2_xattr_set_ctxt*) ;
 int FUNC_5 (int ) ;

__attribute__((used)) static int FUNC_6(struct ocfs2_xa_loc *VAR_0,
      struct ocfs2_xattr_set_ctxt *VAR_1)
{
 int VAR_2 = 0;
 unsigned int VAR_3;

 if (!FUNC_5(VAR_0->xl_entry)) {
  VAR_3 = FUNC_3(VAR_0);
  VAR_2 = FUNC_4(VAR_0, 0, VAR_1);
  if (VAR_2) {
   FUNC_0(VAR_2);






   if (VAR_3 != FUNC_3(VAR_0))
    VAR_2 = 0;
   FUNC_1(VAR_0, "removing",
       VAR_3);
   if (VAR_2)
    goto out;
  }
 }

 FUNC_2(VAR_0);

out:
 return VAR_2;
}
