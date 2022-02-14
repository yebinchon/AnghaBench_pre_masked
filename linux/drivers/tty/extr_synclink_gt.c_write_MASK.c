
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tty_struct {scalar_t__ hw_stopped; scalar_t__ stopped; int name; struct slgt_info* driver_data; } ;
struct slgt_info {unsigned char const* tx_buf; int max_frame_size; int tx_count; int device_name; int lock; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (struct slgt_info*,int ,char*) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;
 scalar_t__ FUNC_4 (struct slgt_info*,unsigned char const*,int) ;

__attribute__((used)) static int FUNC_5(struct tty_struct *VAR_1,
   const unsigned char *VAR_2, int VAR_3)
{
 int VAR_4 = 0;
 struct slgt_info *VAR_5 = VAR_1->driver_data;
 unsigned long VAR_6;

 if (FUNC_1(VAR_5, VAR_1->name, "write"))
  return -VAR_0;

 FUNC_0(("%s write count=%d\n", VAR_5->device_name, VAR_3));

 if (!VAR_5->tx_buf || (VAR_3 > VAR_5->max_frame_size))
  return -VAR_0;

 if (!VAR_3 || VAR_1->stopped || VAR_1->hw_stopped)
  return 0;

 FUNC_2(&VAR_5->lock, VAR_6);

 if (VAR_5->tx_count) {

  if (!FUNC_4(VAR_5, VAR_5->tx_buf, VAR_5->tx_count))
   goto cleanup;
  VAR_5->tx_count = 0;
 }

 if (FUNC_4(VAR_5, VAR_2, VAR_3))
  VAR_4 = VAR_3;

cleanup:
 FUNC_3(&VAR_5->lock, VAR_6);
 FUNC_0(("%s write rc=%d\n", VAR_5->device_name, VAR_4));
 return VAR_4;
}
