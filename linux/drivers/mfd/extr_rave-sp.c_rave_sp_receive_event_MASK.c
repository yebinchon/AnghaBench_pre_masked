
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct rave_sp {int event_notifier_list; } ;
typedef int cmd ;


 int FUNC_0 (int *,int ,int *) ;
 int FUNC_1 (unsigned char const,unsigned char const) ;
 int FUNC_2 (unsigned char const) ;
 int FUNC_3 (struct rave_sp*,int*,int) ;

__attribute__((used)) static void FUNC_4(struct rave_sp *VAR_0,
      const unsigned char *VAR_1, size_t VAR_2)
{
 u8 VAR_3[] = {
  [0] = FUNC_2(VAR_1[0]),
  [1] = VAR_1[1],
 };

 FUNC_3(VAR_0, VAR_3, sizeof(VAR_3));

 FUNC_0(&VAR_0->event_notifier_list,
         FUNC_1(VAR_1[0], VAR_1[2]),
         ((void*)0));
}
