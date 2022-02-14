
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ubifs_wbuf {int timer; int jhead; scalar_t__ no_timer; } ;
struct ubifs_info {int dummy; } ;
typedef int ktime_t ;


 int VAR_0 ;
 unsigned long long VAR_1 ;
 unsigned long long VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char*,int ,int ,int ) ;
 int FUNC_1 (int ) ;
 int VAR_4 ;
 int FUNC_2 (scalar_t__,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int ,unsigned long long,int ) ;
 scalar_t__ FUNC_5 (int ) ;
 int FUNC_6 (int) ;
 int FUNC_7 (struct ubifs_info*,int) ;

__attribute__((used)) static void FUNC_8(struct ubifs_info *VAR_5, struct ubifs_wbuf *VAR_6)
{
 ktime_t VAR_7 = FUNC_6(VAR_4 * 10);
 unsigned long long VAR_8 = VAR_4;


 VAR_8 *= 10ULL * VAR_1 / 10ULL;

 FUNC_7(VAR_5, !FUNC_3(&VAR_6->timer));
 FUNC_7(VAR_5, VAR_8 <= VAR_2);

 if (VAR_6->no_timer)
  return;
 FUNC_0("set timer for jhead %s, %llu-%llu millisecs",
        FUNC_1(VAR_6->jhead),
        FUNC_2(FUNC_5(VAR_7), VAR_3),
        FUNC_2(FUNC_5(VAR_7) + VAR_8, VAR_3));
 FUNC_4(&VAR_6->timer, VAR_7, VAR_8,
          VAR_0);
}
