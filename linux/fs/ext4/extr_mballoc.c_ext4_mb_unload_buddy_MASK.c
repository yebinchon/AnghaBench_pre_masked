
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ext4_buddy {scalar_t__ bd_buddy_page; scalar_t__ bd_bitmap_page; } ;


 int FUNC_0 (scalar_t__) ;

__attribute__((used)) static void FUNC_1(struct ext4_buddy *VAR_0)
{
 if (VAR_0->bd_bitmap_page)
  FUNC_0(VAR_0->bd_bitmap_page);
 if (VAR_0->bd_buddy_page)
  FUNC_0(VAR_0->bd_buddy_page);
}
