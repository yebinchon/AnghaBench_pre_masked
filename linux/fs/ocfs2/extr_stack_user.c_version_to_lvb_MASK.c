
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ocfs2_protocol_version {int pv_minor; int pv_major; } ;



__attribute__((used)) static void FUNC_0(struct ocfs2_protocol_version *VAR_0, char *VAR_1)
{
 struct ocfs2_protocol_version *VAR_2 =
  (struct ocfs2_protocol_version *)VAR_1;




 VAR_2->pv_major = VAR_0->pv_major;
 VAR_2->pv_minor = VAR_0->pv_minor;
}
