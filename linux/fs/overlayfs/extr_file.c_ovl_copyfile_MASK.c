
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int i_sb; } ;
struct file {int dummy; } ;
struct fd {int file; } ;
struct cred {int dummy; } ;
typedef scalar_t__ loff_t ;
typedef enum ovl_copyop { ____Placeholder_ovl_copyop } ovl_copyop ;





 int FUNC_0 (struct fd) ;
 struct inode* FUNC_1 (struct file*) ;
 int FUNC_2 (int ,struct inode*) ;
 int FUNC_3 (struct inode*) ;
 struct cred* FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (struct file*,struct fd*) ;
 int FUNC_6 (struct cred const*) ;
 scalar_t__ FUNC_7 (int ,scalar_t__,int ,scalar_t__,scalar_t__,unsigned int) ;
 scalar_t__ FUNC_8 (int ,scalar_t__,int ,scalar_t__,scalar_t__,unsigned int) ;
 scalar_t__ FUNC_9 (int ,scalar_t__,int ,scalar_t__,scalar_t__,unsigned int) ;

__attribute__((used)) static loff_t FUNC_10(struct file *VAR_0, loff_t VAR_1,
       struct file *VAR_2, loff_t VAR_3,
       loff_t VAR_4, unsigned int VAR_5, enum ovl_copyop VAR_6)
{
 struct inode *VAR_7 = FUNC_1(VAR_2);
 struct fd VAR_8, VAR_9;
 const struct cred *VAR_10;
 loff_t VAR_11;

 VAR_11 = FUNC_5(VAR_2, &VAR_9);
 if (VAR_11)
  return VAR_11;

 VAR_11 = FUNC_5(VAR_0, &VAR_8);
 if (VAR_11) {
  FUNC_0(VAR_9);
  return VAR_11;
 }

 VAR_10 = FUNC_4(FUNC_1(VAR_2)->i_sb);
 switch (VAR_6) {
 case 129:
  VAR_11 = FUNC_8(VAR_8.file, VAR_1,
       VAR_9.file, VAR_3, VAR_4, VAR_5);
  break;

 case 130:
  VAR_11 = FUNC_7(VAR_8.file, VAR_1,
        VAR_9.file, VAR_3, VAR_4, VAR_5);
  break;

 case 128:
  VAR_11 = FUNC_9(VAR_8.file, VAR_1,
      VAR_9.file, VAR_3, VAR_4,
      VAR_5);
  break;
 }
 FUNC_6(VAR_10);


 FUNC_2(FUNC_3(VAR_7), VAR_7);

 FUNC_0(VAR_8);
 FUNC_0(VAR_9);

 return VAR_11;
}
