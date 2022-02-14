
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u64 ;
typedef size_t u32 ;
struct inode {TYPE_1__* i_sb; } ;
struct fsverity_descriptor_location {scalar_t__ version; int pos; int size; } ;
typedef int dloc ;
struct TYPE_2__ {scalar_t__ s_maxbytes; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct inode*) ;
 int VAR_3 ;
 int VAR_4 ;
 size_t VAR_5 ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (struct inode*,int ,int ,struct fsverity_descriptor_location*,int,int *) ;
 scalar_t__ FUNC_3 (struct inode*) ;
 int FUNC_4 (int ,char*) ;
 size_t FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (int ) ;
 int FUNC_7 (struct inode*,void*,size_t,scalar_t__) ;

__attribute__((used)) static int FUNC_8(struct inode *VAR_6, void *VAR_7,
          size_t VAR_8)
{
 struct fsverity_descriptor_location VAR_9;
 int VAR_10;
 u32 VAR_11;
 u64 VAR_12;


 VAR_10 = FUNC_2(VAR_6, VAR_3,
       VAR_4, &VAR_9, sizeof(VAR_9), ((void*)0));
 if (VAR_10 < 0 && VAR_10 != -VAR_2)
  return VAR_10;
 if (VAR_10 != sizeof(VAR_9) || VAR_9.version != FUNC_1(1)) {
  FUNC_4(FUNC_0(VAR_6), "unknown verity xattr format");
  return -VAR_1;
 }
 VAR_11 = FUNC_5(VAR_9.size);
 VAR_12 = FUNC_6(VAR_9.pos);


 if (VAR_12 + VAR_11 < VAR_12 || VAR_12 + VAR_11 > VAR_6->i_sb->s_maxbytes ||
     VAR_12 < FUNC_3(VAR_6) || VAR_11 > VAR_5) {
  FUNC_4(FUNC_0(VAR_6), "invalid verity xattr");
  return -VAR_0;
 }
 if (VAR_8) {
  if (VAR_11 > VAR_8)
   return -VAR_2;
  VAR_10 = FUNC_7(VAR_6, VAR_7, VAR_11, VAR_12);
  if (VAR_10)
   return VAR_10;
 }
 return VAR_11;
}
