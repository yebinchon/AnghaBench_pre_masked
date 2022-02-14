
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int sm_addr; } ;
struct sm501fb_par {scalar_t__ cursor_regs; TYPE_2__ cursor; struct sm501fb_info* info; } ;
struct sm501fb_info {scalar_t__ regs; } ;
struct TYPE_3__ {int smem_len; } ;
struct fb_info {TYPE_1__ fix; struct sm501fb_par* par; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (struct sm501fb_info*,TYPE_2__*,int ,int,int ) ;
 int FUNC_1 (struct sm501fb_info*) ;
 int FUNC_2 (int,scalar_t__) ;

__attribute__((used)) static int FUNC_3(struct fb_info *VAR_5, unsigned int VAR_6)
{
 struct sm501fb_par *VAR_7;
 struct sm501fb_info *VAR_8;
 int VAR_9;

 if (VAR_5 == ((void*)0))
  return 0;

 VAR_7 = VAR_5->par;
 VAR_8 = VAR_7->info;

 VAR_7->cursor_regs = VAR_8->regs + VAR_6;

 VAR_9 = FUNC_0(VAR_8, &VAR_7->cursor, VAR_0, 1024,
         VAR_5->fix.smem_len);
 if (VAR_9 < 0)
  return VAR_9;



 FUNC_2(VAR_7->cursor.sm_addr,
   VAR_7->cursor_regs + VAR_1);

 FUNC_2(0x00, VAR_7->cursor_regs + VAR_4);
 FUNC_2(0x00, VAR_7->cursor_regs + VAR_2);
 FUNC_2(0x00, VAR_7->cursor_regs + VAR_3);
 FUNC_1(VAR_8);

 return 0;
}
