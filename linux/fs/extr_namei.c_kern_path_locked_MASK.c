
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct qstr {int dummy; } ;
struct path {TYPE_1__* dentry; } ;
struct filename {int dummy; } ;
typedef struct filename dentry ;
struct TYPE_2__ {int d_inode; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct filename* FUNC_0 (struct filename*) ;
 struct filename* FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (struct filename*) ;
 int VAR_2 ;
 int VAR_3 ;
 struct filename* FUNC_3 (struct qstr*,TYPE_1__*,int ) ;
 struct filename* FUNC_4 (int ,int ,int ,struct path*,struct qstr*,int*) ;
 int FUNC_5 (char const*) ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (struct path*) ;
 int FUNC_9 (struct filename*) ;
 scalar_t__ FUNC_10 (int) ;

struct dentry *FUNC_11(const char *VAR_4, struct path *VAR_5)
{
 struct filename *VAR_6;
 struct dentry *VAR_7;
 struct qstr VAR_8;
 int VAR_9;

 VAR_6 = FUNC_4(VAR_0, FUNC_5(VAR_4), 0, VAR_5,
        &VAR_8, &VAR_9);
 if (FUNC_2(VAR_6))
  return FUNC_0(VAR_6);
 if (FUNC_10(VAR_9 != VAR_3)) {
  FUNC_8(VAR_5);
  FUNC_9(VAR_6);
  return FUNC_1(-VAR_1);
 }
 FUNC_6(VAR_5->dentry->d_inode, VAR_2);
 VAR_7 = FUNC_3(&VAR_8, VAR_5->dentry, 0);
 if (FUNC_2(VAR_7)) {
  FUNC_7(VAR_5->dentry->d_inode);
  FUNC_8(VAR_5);
 }
 FUNC_9(VAR_6);
 return VAR_7;
}
