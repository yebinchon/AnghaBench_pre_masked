
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct av7110 {int* pids; int pid_mutex; scalar_t__ fe_synced; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct av7110*,int,int,int,int,int) ;
 int FUNC_1 (int,char*,struct av7110*) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

int FUNC_4(struct av7110 *VAR_6, u16 VAR_7, u16 VAR_8, u16 VAR_9,
  u16 VAR_10, u16 VAR_11)
{
 int VAR_12 = 0;
 FUNC_1(4, "%p\n", VAR_6);

 if (FUNC_2(&VAR_6->pid_mutex))
  return -VAR_5;

 if (!(VAR_7 & 0x8000))
  VAR_6->pids[VAR_4] = VAR_7;
 if (!(VAR_8 & 0x8000))
  VAR_6->pids[VAR_0] = VAR_8;
 if (!(VAR_9 & 0x8000))
  VAR_6->pids[VAR_3] = VAR_9;
 if (!(VAR_11 & 0x8000))
  VAR_6->pids[VAR_1] = VAR_11;

 VAR_6->pids[VAR_2] = 0;

 if (VAR_6->fe_synced) {
  VAR_11 = VAR_6->pids[VAR_1];
  VAR_12 = FUNC_0(VAR_6, VAR_7, VAR_8, VAR_9, VAR_10, VAR_11);
 }

 FUNC_3(&VAR_6->pid_mutex);
 return VAR_12;
}
