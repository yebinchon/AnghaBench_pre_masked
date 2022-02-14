
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef scalar_t__ u32 ;
struct btrfs_io_ctl {int num_pages; int * pages; scalar_t__ orig; int check_crcs; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_1 (scalar_t__,int *) ;
 int FUNC_2 (struct btrfs_io_ctl*) ;
 scalar_t__* FUNC_3 (int ) ;

__attribute__((used)) static void FUNC_4(struct btrfs_io_ctl *VAR_1, int VAR_2)
{
 u32 *VAR_3;
 u32 VAR_4 = ~(u32)0;
 unsigned VAR_5 = 0;

 if (!VAR_1->check_crcs) {
  FUNC_2(VAR_1);
  return;
 }

 if (VAR_2 == 0)
  VAR_5 = sizeof(u32) * VAR_1->num_pages;

 VAR_4 = FUNC_0(VAR_4, VAR_1->orig + VAR_5, VAR_0 - VAR_5);
 FUNC_1(VAR_4, (u8 *)&VAR_4);
 FUNC_2(VAR_1);
 VAR_3 = FUNC_3(VAR_1->pages[0]);
 VAR_3 += VAR_2;
 *VAR_3 = VAR_4;
}
