
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {scalar_t__ data; } ;
struct s3fwrn5_fw_info {int dummy; } ;
struct s3fwrn5_fw_header {scalar_t__ code; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (struct sk_buff*) ;
 int FUNC_1 (struct s3fwrn5_fw_info*,struct sk_buff**,int ,int ,int *,int ) ;
 int FUNC_2 (struct s3fwrn5_fw_info*,struct sk_buff*,struct sk_buff**) ;

__attribute__((used)) static int FUNC_3(struct s3fwrn5_fw_info *VAR_4)
{
 struct sk_buff *VAR_5, *VAR_6 = ((void*)0);
 struct s3fwrn5_fw_header *VAR_7;
 int VAR_8;



 VAR_8 = FUNC_1(VAR_4, &VAR_5, VAR_2,
  VAR_1, ((void*)0), 0);
 if (VAR_8 < 0)
  return VAR_8;

 VAR_8 = FUNC_2(VAR_4, VAR_5, &VAR_6);
 FUNC_0(VAR_5);
 if (VAR_8 < 0)
  return VAR_8;

 VAR_7 = (struct s3fwrn5_fw_header *) VAR_6->data;
 if (VAR_7->code != VAR_3)
  VAR_8 = -VAR_0;

 FUNC_0(VAR_6);

 return VAR_8;
}
