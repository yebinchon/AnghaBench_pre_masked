
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ovl_fh {int len; int type; } ;
struct dentry {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct ovl_fh*) ;
 int FUNC_1 (struct ovl_fh*) ;
 int FUNC_2 (struct ovl_fh*) ;
 int FUNC_3 (char*,char*,int) ;
 int FUNC_4 (struct dentry*) ;
 int FUNC_5 (struct dentry*) ;
 int FUNC_6 (struct dentry*) ;
 struct ovl_fh* FUNC_7 (int ,int) ;
 int FUNC_8 (char*,struct dentry*,int,int,int,int ) ;

__attribute__((used)) static int FUNC_9(struct dentry *VAR_1, char *VAR_2, int VAR_3)
{
 struct ovl_fh *VAR_4 = ((void*)0);
 int VAR_5, VAR_6;





 VAR_5 = VAR_6 = FUNC_4(VAR_1);
 if (VAR_6 < 0)
  goto fail;


 VAR_4 = FUNC_7(VAR_6 ? FUNC_5(VAR_1) :
    FUNC_6(VAR_1), !VAR_6);
 if (FUNC_0(VAR_4))
  return FUNC_1(VAR_4);

 VAR_5 = -VAR_0;
 if (VAR_4->len > VAR_3)
  goto fail;

 FUNC_3(VAR_2, (char *)VAR_4, VAR_4->len);
 VAR_5 = VAR_4->len;

out:
 FUNC_2(VAR_4);
 return VAR_5;

fail:
 FUNC_8("overlayfs: failed to encode file handle (%pd2, err=%i, buflen=%d, len=%d, type=%d)\n",
       VAR_1, VAR_5, VAR_3, VAR_4 ? (int)VAR_4->len : 0,
       VAR_4 ? VAR_4->type : 0);
 goto out;
}
