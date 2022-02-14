
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct siox_master {int active; int poll_thread; int buf; scalar_t__ getbuf_len; scalar_t__ setbuf_len; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;

__attribute__((used)) static int FUNC_1(struct siox_master *VAR_2)
{
 if (!(VAR_2->setbuf_len + VAR_2->getbuf_len))
  return -VAR_0;

 if (!VAR_2->buf)
  return -VAR_1;

 if (VAR_2->active)
  return 0;

 VAR_2->active = 1;
 FUNC_0(VAR_2->poll_thread);

 return 1;
}
