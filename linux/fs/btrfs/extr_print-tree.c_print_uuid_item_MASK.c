
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef scalar_t__ u32 ;
typedef int subvol_id ;
struct extent_buffer {int dummy; } ;
typedef int __le64 ;


 int FUNC_0 (scalar_t__,int) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (char*,unsigned long long) ;
 int FUNC_3 (char*,unsigned long) ;
 int FUNC_4 (struct extent_buffer*,int *,unsigned long,int) ;

__attribute__((used)) static void FUNC_5(struct extent_buffer *VAR_0, unsigned long VAR_1,
       u32 VAR_2)
{
 if (!FUNC_0(VAR_2, sizeof(u64))) {
  FUNC_3("BTRFS: uuid item with illegal size %lu!\n",
   (unsigned long)VAR_2);
  return;
 }
 while (VAR_2) {
  __le64 VAR_3;

  FUNC_4(VAR_0, &VAR_3, VAR_1, sizeof(VAR_3));
  FUNC_2("\t\tsubvol_id %llu\n",
         (unsigned long long)FUNC_1(VAR_3));
  VAR_2 -= sizeof(u64);
  VAR_1 += sizeof(u64);
 }
}
