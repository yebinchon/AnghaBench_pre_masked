
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct pfn_array {int dummy; } ;
struct channel_program {int ccwchain_list; } ;
struct ccwchain {int ch_len; int next; struct pfn_array* ch_pa; struct ccw1* ch_ccw; } ;
struct ccw1 {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct ccwchain* FUNC_0 (size_t,int) ;
 int FUNC_1 (int *,int *) ;

__attribute__((used)) static struct ccwchain *FUNC_2(struct channel_program *VAR_2, int VAR_3)
{
 struct ccwchain *VAR_4;
 void *VAR_5;
 size_t VAR_6;


 VAR_6 = ((sizeof(*VAR_4) + 7L) & -8L) +
  sizeof(*VAR_4->ch_ccw) * VAR_3 +
  sizeof(*VAR_4->ch_pa) * VAR_3;
 VAR_4 = FUNC_0(VAR_6, VAR_0 | VAR_1);
 if (!VAR_4)
  return ((void*)0);

 VAR_5 = (u8 *)VAR_4 + ((sizeof(*VAR_4) + 7L) & -8L);
 VAR_4->ch_ccw = (struct ccw1 *)VAR_5;

 VAR_5 = (u8 *)(VAR_4->ch_ccw) + sizeof(*VAR_4->ch_ccw) * VAR_3;
 VAR_4->ch_pa = (struct pfn_array *)VAR_5;

 VAR_4->ch_len = VAR_3;

 FUNC_1(&VAR_4->next, &VAR_2->ccwchain_list);

 return VAR_4;
}
