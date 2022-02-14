
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct serio {int dummy; } ;
struct rain {scalar_t__ buf_len; unsigned char* buf; size_t buf_wr_idx; int work; int buf_lock; int dev; } ;
typedef int irqreturn_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int *) ;
 struct rain* FUNC_2 (struct serio*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static irqreturn_t FUNC_5(struct serio *VAR_2, unsigned char VAR_3,
        unsigned int VAR_4)
{
 struct rain *VAR_5 = FUNC_2(VAR_2);

 if (VAR_5->buf_len == VAR_0) {
  FUNC_0(VAR_5->dev, "buffer overflow\n");
  return VAR_1;
 }
 FUNC_3(&VAR_5->buf_lock);
 VAR_5->buf_len++;
 VAR_5->buf[VAR_5->buf_wr_idx] = VAR_3;
 VAR_5->buf_wr_idx = (VAR_5->buf_wr_idx + 1) & 0xff;
 FUNC_4(&VAR_5->buf_lock);
 FUNC_1(&VAR_5->work);
 return VAR_1;
}
