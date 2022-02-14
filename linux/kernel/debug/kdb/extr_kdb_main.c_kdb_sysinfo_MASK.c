
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct sysinfo {scalar_t__ procs; void** loads; int uptime; } ;


 int VAR_0 ;
 void** VAR_1 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 () ;
 int FUNC_2 (struct sysinfo*,int ,int) ;
 scalar_t__ VAR_2 ;
 int FUNC_3 (struct sysinfo*) ;

__attribute__((used)) static void FUNC_4(struct sysinfo *VAR_3)
{
 u64 VAR_4 = FUNC_1();

 FUNC_2(VAR_3, 0, sizeof(*VAR_3));
 VAR_3->uptime = FUNC_0(VAR_4, VAR_0);
 VAR_3->loads[0] = VAR_1[0];
 VAR_3->loads[1] = VAR_1[1];
 VAR_3->loads[2] = VAR_1[2];
 VAR_3->procs = VAR_2-1;
 FUNC_3(VAR_3);

 return;
}
