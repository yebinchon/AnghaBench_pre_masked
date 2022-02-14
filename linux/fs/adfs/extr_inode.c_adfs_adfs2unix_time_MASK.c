
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct timespec64 {scalar_t__ tv_nsec; scalar_t__ tv_sec; } ;
struct inode {int dummy; } ;
typedef int s64 ;
struct TYPE_2__ {int loadaddr; unsigned int execaddr; } ;


 TYPE_1__* FUNC_0 (struct inode*) ;
 int FUNC_1 (struct inode*) ;
 struct timespec64 FUNC_2 (struct inode*) ;
 struct timespec64 FUNC_3 (int) ;

__attribute__((used)) static void
FUNC_4(struct timespec64 *VAR_0, struct inode *VAR_1)
{
 unsigned int VAR_2, VAR_3;



 static const s64 VAR_4 =
       2208988800000000000LL;
 s64 VAR_5;

 if (!FUNC_1(VAR_1))
  goto cur_time;

 VAR_2 = FUNC_0(VAR_1)->loadaddr & 0xFF;
 VAR_3 = FUNC_0(VAR_1)->execaddr;




 VAR_5 = (((s64) VAR_2 << 32) | (s64) VAR_3) * 10000000;


 if (VAR_5 < VAR_4)
  goto too_early;


 VAR_5 -= VAR_4;

 *VAR_0 = FUNC_3(VAR_5);
 return;

 cur_time:
 *VAR_0 = FUNC_2(VAR_1);
 return;

 too_early:
 VAR_0->tv_sec = VAR_0->tv_nsec = 0;
 return;
}
