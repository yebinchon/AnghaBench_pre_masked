
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct urb {char* transfer_buffer; int transfer_buffer_length; } ;
struct dlfb_data {int render_mutex; int cpu_kcycles_used; int bytes_rendered; int bytes_identical; int bytes_sent; TYPE_3__* info; int usb_active; } ;
typedef int cycles_t ;
struct TYPE_5__ {int line_length; scalar_t__ smem_start; } ;
struct TYPE_4__ {int xres; int yres; } ;
struct TYPE_6__ {TYPE_2__ fix; TYPE_1__ var; } ;


 int VAR_0 ;
 int FUNC_0 (int,int) ;
 int FUNC_1 (int,int) ;
 int VAR_1 ;
 int FUNC_2 (unsigned int,int *) ;
 int FUNC_3 (int *) ;
 struct urb* FUNC_4 (struct dlfb_data*) ;
 scalar_t__ FUNC_5 (struct dlfb_data*,struct urb**,char*,char**,int const,int,int*,int*) ;
 int FUNC_6 (struct dlfb_data*,struct urb*,int) ;
 int FUNC_7 (struct urb*) ;
 int FUNC_8 () ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;

__attribute__((used)) static int FUNC_11(struct dlfb_data *VAR_2, int VAR_3, int VAR_4, int VAR_5, int VAR_6)
{
 int VAR_7, VAR_8;
 char *VAR_9;
 cycles_t VAR_10, VAR_11;
 int VAR_12 = 0;
 int VAR_13 = 0;
 struct urb *VAR_14;
 int VAR_15;

 VAR_10 = FUNC_8();

 FUNC_9(&VAR_2->render_mutex);

 VAR_15 = FUNC_0(VAR_3, sizeof(unsigned long));
 VAR_5 = FUNC_1(VAR_5 + (VAR_3-VAR_15), sizeof(unsigned long));
 VAR_3 = VAR_15;

 if ((VAR_5 <= 0) ||
     (VAR_3 + VAR_5 > VAR_2->info->var.xres) ||
     (VAR_4 + VAR_6 > VAR_2->info->var.yres)) {
  VAR_8 = -VAR_1;
  goto unlock_ret;
 }

 if (!FUNC_3(&VAR_2->usb_active)) {
  VAR_8 = 0;
  goto unlock_ret;
 }

 VAR_14 = FUNC_4(VAR_2);
 if (!VAR_14) {
  VAR_8 = 0;
  goto unlock_ret;
 }
 VAR_9 = VAR_14->transfer_buffer;

 for (VAR_7 = VAR_4; VAR_7 < VAR_4 + VAR_6 ; VAR_7++) {
  const int VAR_16 = VAR_2->info->fix.line_length * VAR_7;
  const int VAR_17 = VAR_16 + (VAR_3 * VAR_0);

  if (FUNC_5(VAR_2, &VAR_14,
          (char *) VAR_2->info->fix.smem_start,
          &VAR_9, VAR_17, VAR_5 * VAR_0,
          &VAR_13, &VAR_12))
   goto error;
 }

 if (VAR_9 > (char *) VAR_14->transfer_buffer) {
  int VAR_18;
  if (VAR_9 < (char *) VAR_14->transfer_buffer + VAR_14->transfer_buffer_length)
   *VAR_9++ = 0xAF;

  VAR_18 = VAR_9 - (char *) VAR_14->transfer_buffer;
  FUNC_6(VAR_2, VAR_14, VAR_18);
  VAR_12 += VAR_18;
 } else
  FUNC_7(VAR_14);

error:
 FUNC_2(VAR_12, &VAR_2->bytes_sent);
 FUNC_2(VAR_13, &VAR_2->bytes_identical);
 FUNC_2(VAR_5*VAR_6*2, &VAR_2->bytes_rendered);
 VAR_11 = FUNC_8();
 FUNC_2(((unsigned int) ((VAR_11 - VAR_10)
      >> 10)),
     &VAR_2->cpu_kcycles_used);

 VAR_8 = 0;

unlock_ret:
 FUNC_10(&VAR_2->render_mutex);
 return VAR_8;
}
