
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct rave_sp_status {int dummy; } ;
struct rave_sp {int dummy; } ;
typedef int cmd ;


 int VAR_0 ;
 int FUNC_0 (struct rave_sp*,int*,int,struct rave_sp_status*,int) ;

__attribute__((used)) static int FUNC_1(struct rave_sp *VAR_1,
       struct rave_sp_status *VAR_2)
{
 u8 VAR_3[] = {
  [0] = VAR_0,
  [1] = 0
 };

 return FUNC_0(VAR_1, VAR_3, sizeof(VAR_3), VAR_2, sizeof(*VAR_2));
}
