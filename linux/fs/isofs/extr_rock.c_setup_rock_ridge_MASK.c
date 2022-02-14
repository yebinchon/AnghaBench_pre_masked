
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rock_state {int len; unsigned char* chr; } ;
struct iso_directory_record {int* name_len; } ;
struct inode {int i_sb; } ;
struct TYPE_2__ {int s_rock_offset; } ;


 TYPE_1__* FUNC_0 (int ) ;

__attribute__((used)) static void FUNC_1(struct iso_directory_record *VAR_0,
   struct inode *VAR_1, struct rock_state *VAR_2)
{
 VAR_2->len = sizeof(struct iso_directory_record) + VAR_0->name_len[0];
 if (VAR_2->len & 1)
  (VAR_2->len)++;
 VAR_2->chr = (unsigned char *)VAR_0 + VAR_2->len;
 VAR_2->len = *((unsigned char *)VAR_0) - VAR_2->len;
 if (VAR_2->len < 0)
  VAR_2->len = 0;

 if (FUNC_0(VAR_1->i_sb)->s_rock_offset != -1) {
  VAR_2->len -= FUNC_0(VAR_1->i_sb)->s_rock_offset;
  VAR_2->chr += FUNC_0(VAR_1->i_sb)->s_rock_offset;
  if (VAR_2->len < 0)
   VAR_2->len = 0;
 }
}
