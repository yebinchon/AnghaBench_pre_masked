
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct iscsi_datain_req {int dummy; } ;
struct iscsi_conn {int dummy; } ;
struct iscsi_cmd {int dummy; } ;


 int FUNC_0 (struct iscsi_conn*,struct iscsi_cmd*,void const*) ;
 int FUNC_1 (struct iscsi_conn*,struct iscsi_cmd*,void const*,int ) ;

__attribute__((used)) static int FUNC_2(struct iscsi_conn *VAR_0, struct iscsi_cmd *VAR_1,
      struct iscsi_datain_req *VAR_2, const void *VAR_3,
      u32 VAR_4)
{
 if (VAR_2)
  return FUNC_0(VAR_0, VAR_1, VAR_3);
 else
  return FUNC_1(VAR_0, VAR_1, VAR_3, VAR_4);
}
