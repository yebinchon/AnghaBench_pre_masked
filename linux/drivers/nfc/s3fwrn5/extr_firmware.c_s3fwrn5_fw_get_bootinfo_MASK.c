
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {scalar_t__ data; } ;
struct s3fwrn5_fw_info {int dummy; } ;
struct s3fwrn5_fw_header {scalar_t__ code; } ;
struct s3fwrn5_fw_cmd_get_bootinfo_rsp {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (struct sk_buff*) ;
 int FUNC_1 (struct s3fwrn5_fw_cmd_get_bootinfo_rsp*,scalar_t__,int) ;
 int FUNC_2 (struct s3fwrn5_fw_info*,struct sk_buff**,int ,int ,int *,int ) ;
 int FUNC_3 (struct s3fwrn5_fw_info*,struct sk_buff*,struct sk_buff**) ;

__attribute__((used)) static int FUNC_4(struct s3fwrn5_fw_info *VAR_5,
 struct s3fwrn5_fw_cmd_get_bootinfo_rsp *VAR_6)
{
 struct sk_buff *VAR_7, *VAR_8 = ((void*)0);
 struct s3fwrn5_fw_header *VAR_9;
 int VAR_10;



 VAR_10 = FUNC_2(VAR_5, &VAR_7, VAR_3,
  VAR_1, ((void*)0), 0);
 if (VAR_10 < 0)
  return VAR_10;

 VAR_10 = FUNC_3(VAR_5, VAR_7, &VAR_8);
 FUNC_0(VAR_7);
 if (VAR_10 < 0)
  return VAR_10;

 VAR_9 = (struct s3fwrn5_fw_header *) VAR_8->data;
 if (VAR_9->code != VAR_4) {
  VAR_10 = -VAR_0;
  goto out;
 }

 FUNC_1(VAR_6, VAR_8->data + VAR_2, 10);

out:
 FUNC_0(VAR_8);
 return VAR_10;
}
