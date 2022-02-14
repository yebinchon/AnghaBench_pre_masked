
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct v9fs_session_info {int dummy; } ;
struct TYPE_2__ {unsigned char* name; } ;
struct dentry {TYPE_1__ d_name; struct dentry* d_parent; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct dentry*) ;
 unsigned char** FUNC_1 (int,int,int ) ;

__attribute__((used)) static int FUNC_2(struct v9fs_session_info *VAR_2,
      struct dentry *VAR_3, const unsigned char ***VAR_4)
{
 int VAR_5 = 0, VAR_6;
 const unsigned char **VAR_7;
 struct dentry *VAR_8;

 for (VAR_8 = VAR_3; !FUNC_0(VAR_8); VAR_8 = VAR_8->d_parent)
  VAR_5++;

 VAR_7 = FUNC_1(VAR_5, sizeof(char *), VAR_1);
 if (!VAR_7)
  goto err_out;

 for (VAR_8 = VAR_3, VAR_6 = (VAR_5-1); VAR_6 >= 0; VAR_6--, VAR_8 = VAR_8->d_parent)
  VAR_7[VAR_6] = VAR_8->d_name.name;

 *VAR_4 = VAR_7;
 return VAR_5;
err_out:
 return -VAR_0;
}
