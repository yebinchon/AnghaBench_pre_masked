
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct wcn36xx_hal_msg_header {int msg_type; } ;
struct wcn36xx {int hal_rsp_compl; scalar_t__ hal_buf; int smd_channel; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *) ;
 unsigned long VAR_4 ;
 int FUNC_1 (unsigned long) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,scalar_t__,size_t) ;
 scalar_t__ FUNC_4 (int *,int ) ;
 int FUNC_5 (int ,char*,int ,int ,int ) ;
 int FUNC_6 (int ,char*,scalar_t__,size_t) ;
 int FUNC_7 (char*,int ,...) ;

__attribute__((used)) static int FUNC_8(struct wcn36xx *VAR_5, size_t VAR_6)
{
 int VAR_7;
 unsigned long VAR_8;
 struct wcn36xx_hal_msg_header *VAR_9 =
  (struct wcn36xx_hal_msg_header *)VAR_5->hal_buf;
 u16 VAR_10 = VAR_9->msg_type;

 FUNC_6(VAR_3, "HAL >>> ", VAR_5->hal_buf, VAR_6);

 FUNC_0(&VAR_5->hal_rsp_compl);
 VAR_8 = VAR_4;
 VAR_7 = FUNC_3(VAR_5->smd_channel, VAR_5->hal_buf, VAR_6);
 if (VAR_7) {
  FUNC_7("HAL TX failed for req %d\n", VAR_10);
  goto out;
 }
 if (FUNC_4(&VAR_5->hal_rsp_compl,
  FUNC_2(VAR_1)) <= 0) {
  FUNC_7("Timeout! No SMD response to req %d in %dms\n",
       VAR_10, VAR_1);
  VAR_7 = -VAR_0;
  goto out;
 }
 FUNC_5(VAR_2,
      "SMD command (req %d, rsp %d) completed in %dms\n",
      VAR_10, VAR_9->msg_type,
      FUNC_1(VAR_4 - VAR_8));
out:
 return VAR_7;
}
