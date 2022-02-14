
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ovl_lookup_data {int stop; int opaque; int metacopy; int is_dir; scalar_t__ last; int sb; } ;
struct dentry {int d_inode; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (struct dentry*) ;
 int FUNC_1 (struct dentry*) ;
 int FUNC_2 (struct dentry*) ;
 int FUNC_3 (struct dentry*) ;
 int FUNC_4 (struct dentry*) ;
 struct dentry* FUNC_5 (char const*,struct dentry*,unsigned int) ;
 int FUNC_6 (struct dentry*) ;
 int FUNC_7 (struct dentry*,struct ovl_lookup_data*,size_t,char const*) ;
 scalar_t__ FUNC_8 (struct dentry*) ;
 scalar_t__ FUNC_9 (struct dentry*) ;
 scalar_t__ FUNC_10 (struct dentry*) ;
 scalar_t__ FUNC_11 (int ,struct dentry*) ;

__attribute__((used)) static int FUNC_12(struct dentry *VAR_4, struct ovl_lookup_data *VAR_5,
        const char *VAR_6, unsigned int VAR_7,
        size_t VAR_8, const char *VAR_9,
        struct dentry **VAR_10)
{
 struct dentry *VAR_11;
 int VAR_12;
 bool VAR_13 = !VAR_9[0];

 VAR_11 = FUNC_5(VAR_6, VAR_4, VAR_7);
 if (FUNC_0(VAR_11)) {
  VAR_12 = FUNC_1(VAR_11);
  VAR_11 = ((void*)0);
  if (VAR_12 == -VAR_2 || VAR_12 == -VAR_1)
   goto out;
  goto out_err;
 }
 if (!VAR_11->d_inode)
  goto put_and_out;

 if (FUNC_8(VAR_11)) {

  VAR_12 = -VAR_3;
  goto out_err;
 }
 if (FUNC_10(VAR_11)) {
  VAR_5->stop = VAR_5->opaque = 1;
  goto put_and_out;
 }




 if (VAR_13 && VAR_5->metacopy && !FUNC_3(VAR_11)) {
  VAR_5->stop = 1;
  goto put_and_out;
 }
 if (!FUNC_2(VAR_11)) {
  if (VAR_5->is_dir || !VAR_13) {
   VAR_5->stop = 1;
   goto put_and_out;
  }
  VAR_12 = FUNC_6(VAR_11);
  if (VAR_12 < 0)
   goto out_err;

  VAR_5->metacopy = VAR_12;
  VAR_5->stop = !VAR_5->metacopy;
  if (!VAR_5->metacopy || VAR_5->last)
   goto out;
 } else {
  if (FUNC_11(VAR_5->sb, VAR_11)) {

   VAR_12 = -VAR_0;
   goto out_err;
  }

  if (VAR_13)
   VAR_5->is_dir = 1;
  if (VAR_5->last)
   goto out;

  if (FUNC_9(VAR_11)) {
   VAR_5->stop = 1;
   if (VAR_13)
    VAR_5->opaque = 1;
   goto out;
  }
 }
 VAR_12 = FUNC_7(VAR_11, VAR_5, VAR_8, VAR_9);
 if (VAR_12)
  goto out_err;
out:
 *VAR_10 = VAR_11;
 return 0;

put_and_out:
 FUNC_4(VAR_11);
 VAR_11 = ((void*)0);
 goto out;

out_err:
 FUNC_4(VAR_11);
 return VAR_12;
}
