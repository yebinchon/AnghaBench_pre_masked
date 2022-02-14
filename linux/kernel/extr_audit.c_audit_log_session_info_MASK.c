
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uid_t ;
struct audit_buffer {int dummy; } ;


 int FUNC_0 (int ) ;
 unsigned int FUNC_1 (int ) ;
 int FUNC_2 (struct audit_buffer*,char*,int ,unsigned int) ;
 int VAR_0 ;
 int FUNC_3 (int *,int ) ;
 int VAR_1 ;

void FUNC_4(struct audit_buffer *VAR_2)
{
 unsigned int VAR_3 = FUNC_1(VAR_0);
 uid_t VAR_4 = FUNC_3(&VAR_1, FUNC_0(VAR_0));

 FUNC_2(VAR_2, "auid=%u ses=%u", VAR_4, VAR_3);
}
