
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct radeonfb_info {int fb_local_base; int pitch; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int VAR_2 ;
 int FUNC_1 (int ,int) ;
 int VAR_3 ;
 int FUNC_2 (int) ;

__attribute__((used)) static void FUNC_3(struct radeonfb_info *VAR_4)
{
 u32 VAR_5;
 FUNC_2 (1);
 VAR_5 = FUNC_0(VAR_2) << 16;
 if (VAR_5 == VAR_4->fb_local_base)
  return;

 VAR_4->fb_local_base = VAR_5;

 FUNC_2 (3);
 FUNC_1(VAR_0, (VAR_4->pitch << 0x16) |
         (VAR_4->fb_local_base >> 10));
 FUNC_1(VAR_1, (VAR_4->pitch << 0x16) | (VAR_4->fb_local_base >> 10));
 FUNC_1(VAR_3, (VAR_4->pitch << 0x16) | (VAR_4->fb_local_base >> 10));
}
