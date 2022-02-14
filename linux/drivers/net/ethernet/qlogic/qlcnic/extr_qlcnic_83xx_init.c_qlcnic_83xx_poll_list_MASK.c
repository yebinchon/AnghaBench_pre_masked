
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qlcnic_adapter {int dummy; } ;
struct qlc_83xx_poll {int status; int mask; } ;
struct qlc_83xx_entry_hdr {int count; scalar_t__ delay; } ;
struct qlc_83xx_entry {unsigned long arg1; unsigned long arg2; } ;


 int VAR_0 ;
 int FUNC_0 (struct qlcnic_adapter*,unsigned long,int*) ;
 scalar_t__ FUNC_1 (struct qlcnic_adapter*,unsigned long,long,int ,int ) ;

__attribute__((used)) static void FUNC_2(struct qlcnic_adapter *VAR_1,
      struct qlc_83xx_entry_hdr *VAR_2)
{
 long VAR_3;
 struct qlc_83xx_entry *VAR_4;
 struct qlc_83xx_poll *VAR_5;
 int VAR_6, VAR_7 = 0;
 unsigned long VAR_8, VAR_9;

 VAR_5 = (struct qlc_83xx_poll *)((char *)VAR_2 +
     sizeof(struct qlc_83xx_entry_hdr));

 VAR_4 = (struct qlc_83xx_entry *)((char *)VAR_5 +
       sizeof(struct qlc_83xx_poll));
 VAR_3 = (long)VAR_2->delay;

 if (!VAR_3) {
  for (VAR_6 = 0; VAR_6 < VAR_2->count; VAR_6++, VAR_4++)
   FUNC_1(VAR_1, VAR_4->arg1,
          VAR_3, VAR_5->mask,
          VAR_5->status);
 } else {
  for (VAR_6 = 0; VAR_6 < VAR_2->count; VAR_6++, VAR_4++) {
   VAR_8 = VAR_4->arg1;
   VAR_9 = VAR_4->arg2;
   if (VAR_3) {
    if (FUNC_1(VAR_1,
        VAR_8, VAR_3,
        VAR_5->mask,
        VAR_5->status)){
     FUNC_0(VAR_1, VAR_8, &VAR_7);
     if (VAR_7 == -VAR_0)
      return;
     FUNC_0(VAR_1, VAR_9, &VAR_7);
     if (VAR_7 == -VAR_0)
      return;
    }
   }
  }
 }
}
