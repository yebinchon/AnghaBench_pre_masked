
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct inode {int i_ino; int i_sb; } ;
typedef int handle_t ;


 scalar_t__ FUNC_0 (struct inode*) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 scalar_t__ FUNC_2 (struct inode*) ;
 int FUNC_3 (struct inode*) ;
 struct inode* FUNC_4 (struct inode*,void const*,size_t,int ) ;
 struct inode* FUNC_5 (int *,struct inode*,int ) ;
 int FUNC_6 (int *,struct inode*) ;
 int FUNC_7 (int ,void const*,size_t) ;
 int FUNC_8 (int *,struct inode*) ;
 int FUNC_9 (int *,struct inode*,void const*,size_t) ;
 int FUNC_10 (struct inode*) ;
 int FUNC_11 (scalar_t__,int ,int ,int ,int) ;

__attribute__((used)) static int FUNC_12(handle_t *VAR_1, struct inode *VAR_2,
       const void *VAR_3, size_t VAR_4,
       struct inode **VAR_5)
{
 struct inode *VAR_6;
 u32 VAR_7;
 int VAR_8;

 VAR_7 = FUNC_7(FUNC_1(VAR_2->i_sb), VAR_3, VAR_4);
 VAR_6 = FUNC_4(VAR_2, VAR_3, VAR_4, VAR_7);
 if (VAR_6) {
  VAR_8 = FUNC_8(VAR_1, VAR_6);
  if (VAR_8) {
   FUNC_10(VAR_6);
   return VAR_8;
  }

  *VAR_5 = VAR_6;
  return 0;
 }


 VAR_6 = FUNC_5(VAR_1, VAR_2, VAR_7);
 if (FUNC_2(VAR_6))
  return FUNC_3(VAR_6);

 VAR_8 = FUNC_9(VAR_1, VAR_6, VAR_3, VAR_4);
 if (VAR_8) {
  FUNC_6(VAR_1, VAR_6);
  FUNC_10(VAR_6);
  return VAR_8;
 }

 if (FUNC_0(VAR_2))
  FUNC_11(FUNC_0(VAR_2), VAR_0, VAR_7,
          VAR_6->i_ino, 1 );

 *VAR_5 = VAR_6;
 return 0;
}
