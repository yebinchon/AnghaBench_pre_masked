
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cxgbit_sock {int lock_owner; int lock; scalar_t__ snd_win; scalar_t__ snd_una; int write_seq; } ;


 scalar_t__ FUNC_0 (int ,scalar_t__) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static bool FUNC_3(struct cxgbit_sock *VAR_0)
{
 FUNC_1(&VAR_0->lock);

 if (FUNC_0(VAR_0->write_seq, VAR_0->snd_una + VAR_0->snd_win))
  VAR_0->lock_owner = 1;

 FUNC_2(&VAR_0->lock);

 return VAR_0->lock_owner;
}
