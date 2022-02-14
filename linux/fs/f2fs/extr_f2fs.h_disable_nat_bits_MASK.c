
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct f2fs_sb_info {int cp_lock; } ;
struct TYPE_2__ {unsigned char* nat_bits; } ;


 int VAR_0 ;
 int FUNC_0 (struct f2fs_sb_info*) ;
 TYPE_1__* FUNC_1 (struct f2fs_sb_info*) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (unsigned char*) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;

__attribute__((used)) static inline void FUNC_6(struct f2fs_sb_info *VAR_1, bool VAR_2)
{
 unsigned long VAR_3;
 unsigned char *VAR_4;







 if (VAR_2)
  FUNC_4(&VAR_1->cp_lock, VAR_3);
 FUNC_2(FUNC_0(VAR_1), VAR_0);
 VAR_4 = FUNC_1(VAR_1)->nat_bits;
 FUNC_1(VAR_1)->nat_bits = ((void*)0);
 if (VAR_2)
  FUNC_5(&VAR_1->cp_lock, VAR_3);

 FUNC_3(VAR_4);
}
