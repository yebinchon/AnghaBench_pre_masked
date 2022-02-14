
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tty_struct {int name; struct slgt_info* driver_data; } ;
struct slgt_info {unsigned char* tx_buf; scalar_t__ tx_count; scalar_t__ max_frame_size; int lock; int device_name; } ;


 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (struct slgt_info*,int ,char*) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_4(struct tty_struct *VAR_0, unsigned char VAR_1)
{
 struct slgt_info *VAR_2 = VAR_0->driver_data;
 unsigned long VAR_3;
 int VAR_4 = 0;

 if (FUNC_1(VAR_2, VAR_0->name, "put_char"))
  return 0;
 FUNC_0(("%s put_char(%d)\n", VAR_2->device_name, VAR_1));
 if (!VAR_2->tx_buf)
  return 0;
 FUNC_2(&VAR_2->lock,VAR_3);
 if (VAR_2->tx_count < VAR_2->max_frame_size) {
  VAR_2->tx_buf[VAR_2->tx_count++] = VAR_1;
  VAR_4 = 1;
 }
 FUNC_3(&VAR_2->lock,VAR_3);
 return VAR_4;
}
