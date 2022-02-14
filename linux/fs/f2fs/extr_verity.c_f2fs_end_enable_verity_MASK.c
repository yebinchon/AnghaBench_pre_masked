
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
struct inode {int i_mapping; } ;
struct fsverity_descriptor_location {int pos; int size; int version; } ;
struct file {int dummy; } ;
typedef int dloc ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct inode*,int ) ;
 int FUNC_1 (size_t) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (struct inode*,int) ;
 int FUNC_4 (struct inode*) ;
 int FUNC_5 (struct inode*,int ,int ,struct fsverity_descriptor_location*,int,int *,int ) ;
 int FUNC_6 (struct inode*) ;
 scalar_t__ FUNC_7 (struct inode*) ;
 struct inode* FUNC_8 (struct file*) ;
 int FUNC_9 (struct inode*) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (struct inode*,void const*,size_t,scalar_t__) ;

__attribute__((used)) static int FUNC_12(struct file *VAR_4, const void *VAR_5,
      size_t VAR_6, u64 VAR_7)
{
 struct inode *VAR_8 = FUNC_8(VAR_4);
 u64 VAR_9 = FUNC_7(VAR_8) + VAR_7;
 struct fsverity_descriptor_location VAR_10 = {
  .version = FUNC_1(1),
  .size = FUNC_1(VAR_6),
  .pos = FUNC_2(VAR_9),
 };
 int VAR_11 = 0;

 if (VAR_5 != ((void*)0)) {

  VAR_11 = FUNC_11(VAR_8, VAR_5, VAR_6, VAR_9);


  if (!VAR_11)
   VAR_11 = FUNC_10(VAR_8->i_mapping);
 }


 if (VAR_5 == ((void*)0) || VAR_11)
  FUNC_6(VAR_8);

 FUNC_0(VAR_8, VAR_2);

 if (VAR_5 != ((void*)0) && !VAR_11) {
  VAR_11 = FUNC_5(VAR_8, VAR_0,
        VAR_1, &VAR_10, sizeof(VAR_10),
        ((void*)0), VAR_3);
  if (!VAR_11) {
   FUNC_9(VAR_8);
   FUNC_4(VAR_8);
   FUNC_3(VAR_8, 1);
  }
 }
 return VAR_11;
}
