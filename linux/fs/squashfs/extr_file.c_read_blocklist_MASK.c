
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef long long u64 ;
struct inode {int i_sb; } ;
typedef int size ;
typedef int __le32 ;


 int FUNC_0 (char*,int,int,long long,int,long long) ;
 int FUNC_1 (struct inode*,int,long long*,int*,long long*) ;
 long long FUNC_2 (int ,int,long long*,int*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int *,long long*,int*,int) ;

__attribute__((used)) static int FUNC_5(struct inode *VAR_0, int VAR_1, u64 *VAR_2)
{
 u64 VAR_3;
 long long VAR_4;
 int VAR_5;
 __le32 VAR_6;
 int VAR_7 = FUNC_1(VAR_0, VAR_1, &VAR_3, &VAR_5, VAR_2);

 FUNC_0("read_blocklist: res %d, index %d, start 0x%llx, offset"
         " 0x%x, block 0x%llx\n", VAR_7, VAR_1, VAR_3, VAR_5,
   *VAR_2);

 if (VAR_7 < 0)
  return VAR_7;







 if (VAR_7 < VAR_1) {
  VAR_4 = FUNC_2(VAR_0->i_sb, VAR_1 - VAR_7, &VAR_3, &VAR_5);
  if (VAR_4 < 0)
   return (int) VAR_4;
  *VAR_2 += VAR_4;
 }




 VAR_7 = FUNC_4(VAR_0->i_sb, &VAR_6, &VAR_3, &VAR_5,
   sizeof(VAR_6));
 if (VAR_7 < 0)
  return VAR_7;
 return FUNC_3(VAR_6);
}
