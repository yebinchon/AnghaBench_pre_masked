
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct eventpoll {int poll_wait; } ;
struct TYPE_11__ {int events; } ;
struct TYPE_10__ {TYPE_4__* file; } ;
struct epitem {TYPE_2__ event; TYPE_1__ ffd; } ;
struct TYPE_12__ {int _key; scalar_t__ _qproc; } ;
typedef TYPE_3__ poll_table ;
typedef int __poll_t ;
struct TYPE_13__ {struct eventpoll* private_data; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct eventpoll*,int ,int*,int,int) ;
 int FUNC_1 (TYPE_4__*) ;
 int FUNC_2 (TYPE_4__*,int *,TYPE_3__*) ;
 int FUNC_3 (TYPE_4__*,TYPE_3__*) ;

__attribute__((used)) static __poll_t FUNC_4(const struct epitem *VAR_2, poll_table *VAR_3,
     int VAR_4)
{
 struct eventpoll *VAR_5;
 bool VAR_6;

 VAR_3->_key = VAR_2->event.events;
 if (!FUNC_1(VAR_2->ffd.file))
  return FUNC_3(VAR_2->ffd.file, VAR_3) & VAR_2->event.events;

 VAR_5 = VAR_2->ffd.file->private_data;
 FUNC_2(VAR_2->ffd.file, &VAR_5->poll_wait, VAR_3);
 VAR_6 = VAR_3 && (VAR_3->_qproc == VAR_0);

 return FUNC_0(VAR_2->ffd.file->private_data,
      VAR_1, &VAR_4, VAR_4,
      VAR_6) & VAR_2->event.events;
}
