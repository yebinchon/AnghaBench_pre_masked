
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint16_t ;
struct iscsi_session {struct ddb_entry* dd_data; } ;
struct iscsi_cls_session {struct iscsi_session* dd_data; } ;
struct device {int dummy; } ;
struct ddb_entry {scalar_t__ chap_tbl_idx; } ;


 struct iscsi_cls_session* FUNC_0 (struct device*) ;
 int FUNC_1 (struct device*) ;
 scalar_t__ FUNC_2 (struct iscsi_cls_session*) ;

__attribute__((used)) static int FUNC_3(struct device *VAR_0, void *VAR_1)
{
 int VAR_2 = 0;
 uint16_t *VAR_3 = (uint16_t *) VAR_1;
 struct iscsi_cls_session *VAR_4;
 struct iscsi_session *VAR_5;
 struct ddb_entry *VAR_6;

 if (!FUNC_1(VAR_0))
  goto exit_is_chap_active;

 VAR_4 = FUNC_0(VAR_0);
 VAR_5 = VAR_4->dd_data;
 VAR_6 = VAR_5->dd_data;

 if (FUNC_2(VAR_4))
  goto exit_is_chap_active;

 if (VAR_6->chap_tbl_idx == *VAR_3)
  VAR_2 = 1;

exit_is_chap_active:
 return VAR_2;
}
