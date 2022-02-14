
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ufx_data {scalar_t__ fb_count; int kref; int free_framebuffer_work; scalar_t__ virtualized; } ;
struct fb_info {int node; TYPE_1__* fbops; int * fbdefio; struct ufx_data* par; } ;
struct TYPE_2__ {int fb_mmap; } ;


 int VAR_0 ;
 int FUNC_0 (struct fb_info*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (char*,int ,int,scalar_t__) ;
 int FUNC_4 (int *,int ) ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_5(struct fb_info *VAR_3, int VAR_4)
{
 struct ufx_data *VAR_5 = VAR_3->par;

 VAR_5->fb_count--;


 if (VAR_5->virtualized && (VAR_5->fb_count == 0))
  FUNC_4(&VAR_5->free_framebuffer_work, VAR_0);

 if ((VAR_5->fb_count == 0) && (VAR_3->fbdefio)) {
  FUNC_0(VAR_3);
  FUNC_1(VAR_3->fbdefio);
  VAR_3->fbdefio = ((void*)0);
  VAR_3->fbops->fb_mmap = VAR_2;
 }

 FUNC_3("released /dev/fb%d user=%d count=%d",
    VAR_3->node, VAR_4, VAR_5->fb_count);

 FUNC_2(&VAR_5->kref, VAR_1);

 return 0;
}
