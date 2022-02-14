
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct file {int f_pos; } ;
struct autofs_sb_info {int pipe_mutex; } ;
typedef int ssize_t ;
struct TYPE_4__ {int signal; } ;
struct TYPE_6__ {TYPE_2__* sighand; TYPE_1__ pending; } ;
struct TYPE_5__ {int siglock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct file*,char const*,int,int *) ;
 TYPE_3__* VAR_3 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 () ;
 int FUNC_4 (int *,int ) ;
 unsigned long FUNC_5 (int *,int ) ;
 int FUNC_6 (int *,unsigned long) ;
 int FUNC_7 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_8(struct autofs_sb_info *VAR_4,
   struct file *VAR_5, const void *VAR_6, int VAR_7)
{
 unsigned long VAR_8, VAR_9;
 const char *VAR_10 = (const char *)VAR_6;
 ssize_t VAR_11 = 0;

 VAR_8 = FUNC_5(&VAR_3->pending.signal, VAR_2);

 FUNC_1(&VAR_4->pipe_mutex);
 while (VAR_7) {
  VAR_11 = FUNC_0(VAR_5, VAR_10, VAR_7, &VAR_5->f_pos);
  if (VAR_11 <= 0)
   break;
  VAR_10 += VAR_11;
  VAR_7 -= VAR_11;
 }
 FUNC_2(&VAR_4->pipe_mutex);




 if (VAR_11 == -VAR_1 && !VAR_8) {
  FUNC_6(&VAR_3->sighand->siglock, VAR_9);
  FUNC_4(&VAR_3->pending.signal, VAR_2);
  FUNC_3();
  FUNC_7(&VAR_3->sighand->siglock, VAR_9);
 }


 return VAR_7 == 0 ? 0 : VAR_11 < 0 ? VAR_11 : -VAR_0;
}
