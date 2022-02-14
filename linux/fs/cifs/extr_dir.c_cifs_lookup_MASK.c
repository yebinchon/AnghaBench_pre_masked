
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tcon_link {int dummy; } ;
struct inode {int i_sb; } ;
struct dentry {int i_sb; } ;
struct cifs_tcon {scalar_t__ unix_ext; } ;
struct cifs_sb_info {int dummy; } ;


 struct cifs_sb_info* FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct inode* FUNC_1 (struct tcon_link*) ;
 struct inode* FUNC_2 (int) ;
 int VAR_3 ;
 scalar_t__ FUNC_3 (struct tcon_link*) ;
 char* FUNC_4 (struct inode*) ;
 int FUNC_5 (struct inode*,struct cifs_tcon*) ;
 int FUNC_6 (int ,char*,...) ;
 int FUNC_7 (struct inode**,char*,int *,int ,unsigned int,int *) ;
 int FUNC_8 (struct inode**,char*,int ,unsigned int) ;
 int FUNC_9 (struct tcon_link*) ;
 struct tcon_link* FUNC_10 (struct cifs_sb_info*) ;
 int FUNC_11 (struct inode*,int ) ;
 int FUNC_12 (struct inode*) ;
 scalar_t__ FUNC_13 (struct inode*) ;
 struct inode* FUNC_14 (struct inode*,struct inode*) ;
 int FUNC_15 (unsigned int) ;
 unsigned int FUNC_16 () ;
 int VAR_4 ;
 int FUNC_17 (char*) ;
 int FUNC_18 (struct inode*) ;
 struct cifs_tcon* FUNC_19 (struct tcon_link*) ;
 scalar_t__ FUNC_20 (int) ;

struct dentry *
FUNC_21(struct inode *VAR_5, struct dentry *VAR_6,
     unsigned int VAR_7)
{
 unsigned int VAR_8;
 int VAR_9 = 0;
 struct cifs_sb_info *VAR_10;
 struct tcon_link *VAR_11;
 struct cifs_tcon *VAR_12;
 struct inode *VAR_13 = ((void*)0);
 char *VAR_14 = ((void*)0);

 VAR_8 = FUNC_16();

 FUNC_6(VAR_3, "parent inode = 0x%p name is: %pd and dentry = 0x%p\n",
   VAR_5, VAR_6, VAR_6);



 VAR_10 = FUNC_0(VAR_5->i_sb);
 VAR_11 = FUNC_10(VAR_10);
 if (FUNC_3(VAR_11)) {
  FUNC_15(VAR_8);
  return FUNC_1(VAR_11);
 }
 VAR_12 = FUNC_19(VAR_11);

 VAR_9 = FUNC_5(VAR_6, VAR_12);
 if (FUNC_20(VAR_9)) {
  FUNC_9(VAR_11);
  FUNC_15(VAR_8);
  return FUNC_2(VAR_9);
 }




 VAR_14 = FUNC_4(VAR_6);
 if (VAR_14 == ((void*)0)) {
  FUNC_9(VAR_11);
  FUNC_15(VAR_8);
  return FUNC_2(-VAR_2);
 }

 if (FUNC_13(VAR_6)) {
  FUNC_6(VAR_3, "non-NULL inode in lookup\n");
 } else {
  FUNC_6(VAR_3, "NULL inode in lookup\n");
 }
 FUNC_6(VAR_3, "Full path: %s inode = 0x%p\n",
   VAR_14, FUNC_12(VAR_6));

 if (VAR_12->unix_ext) {
  VAR_9 = FUNC_8(&VAR_13, VAR_14,
           VAR_5->i_sb, VAR_8);
 } else {
  VAR_9 = FUNC_7(&VAR_13, VAR_14, ((void*)0),
    VAR_5->i_sb, VAR_8, ((void*)0));
 }

 if (VAR_9 == 0) {


  FUNC_18(VAR_6);
 } else if (VAR_9 == -VAR_1) {
  FUNC_11(VAR_6, VAR_4);
  VAR_13 = ((void*)0);
 } else {
  if (VAR_9 != -VAR_0) {
   FUNC_6(VAR_3, "Unexpected lookup error %d\n", VAR_9);


  }
  VAR_13 = FUNC_2(VAR_9);
 }
 FUNC_17(VAR_14);
 FUNC_9(VAR_11);
 FUNC_15(VAR_8);
 return FUNC_14(VAR_13, VAR_6);
}
