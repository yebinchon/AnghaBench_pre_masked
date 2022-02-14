
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ext4_dir_entry_2 {void* rec_len; scalar_t__ inode; } ;


 int FUNC_0 (void*,int) ;
 void* FUNC_1 (int,int) ;

__attribute__((used)) static void FUNC_2(void *VAR_0, int VAR_1, int VAR_2)
{
 struct ext4_dir_entry_2 *VAR_3, *VAR_4;
 void *VAR_5;
 int VAR_6;

 VAR_3 = (struct ext4_dir_entry_2 *)VAR_0;
 if (VAR_1) {
  VAR_5 = VAR_0 + VAR_1;
  do {
   VAR_4 = VAR_3;
   VAR_6 = FUNC_0(VAR_3->rec_len, VAR_1);
   VAR_0 += VAR_6;
   VAR_3 = (struct ext4_dir_entry_2 *)VAR_0;
  } while (VAR_0 < VAR_5);

  VAR_4->rec_len = FUNC_1(VAR_6 + VAR_2 -
       VAR_1, VAR_2);
 } else {

  VAR_3->inode = 0;
  VAR_3->rec_len = FUNC_1(VAR_2, VAR_2);
 }
}
