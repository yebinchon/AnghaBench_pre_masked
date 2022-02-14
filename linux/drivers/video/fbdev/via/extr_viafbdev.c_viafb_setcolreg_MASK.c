
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u32 ;
struct viafb_par {scalar_t__ iga_path; } ;
struct TYPE_9__ {int length; unsigned int offset; } ;
struct TYPE_8__ {int length; unsigned int offset; } ;
struct TYPE_7__ {int length; unsigned int offset; } ;
struct TYPE_10__ {TYPE_4__ green; TYPE_3__ blue; TYPE_2__ red; } ;
struct TYPE_6__ {scalar_t__ visual; } ;
struct fb_info {scalar_t__ pseudo_palette; TYPE_5__ var; TYPE_1__ fix; struct viafb_par* par; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (unsigned int,unsigned int,unsigned int,unsigned int) ;
 int FUNC_1 (unsigned int,unsigned int,unsigned int,unsigned int) ;

__attribute__((used)) static int FUNC_2(unsigned VAR_5, unsigned VAR_6, unsigned VAR_7,
unsigned VAR_8, unsigned VAR_9, struct fb_info *VAR_10)
{
 struct viafb_par *VAR_11 = VAR_10->par;
 u32 VAR_12, VAR_13, VAR_14;

 if (VAR_10->fix.visual == VAR_1) {
  if (VAR_5 > 255)
   return -VAR_0;

  if (!VAR_4 || VAR_11->iga_path == VAR_2)
   FUNC_0(VAR_5, VAR_6 >> 8,
    VAR_7 >> 8, VAR_8 >> 8);

  if (!VAR_4 || VAR_11->iga_path == VAR_3)
   FUNC_1(VAR_5, VAR_6 >> 8,
    VAR_7 >> 8, VAR_8 >> 8);
 } else {
  if (VAR_5 > 15)
   return -VAR_0;

  VAR_12 = (VAR_6 >> (16 - VAR_10->var.red.length))
   << VAR_10->var.red.offset;
  VAR_14 = (VAR_8 >> (16 - VAR_10->var.blue.length))
   << VAR_10->var.blue.offset;
  VAR_13 = (VAR_7 >> (16 - VAR_10->var.green.length))
   << VAR_10->var.green.offset;
  ((u32 *) VAR_10->pseudo_palette)[VAR_5] = VAR_12 | VAR_13 | VAR_14;
 }

 return 0;
}
