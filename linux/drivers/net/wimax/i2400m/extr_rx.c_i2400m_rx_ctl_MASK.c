
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct i2400m_l3l4_hdr {int type; } ;
struct i2400m {int wimax_dev; int trace_msg_from_user; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 int FUNC_0 (int,struct device*,struct i2400m_l3l4_hdr const*,size_t) ;
 int FUNC_1 (int,struct device*,char*,char*,unsigned int,size_t) ;
 int FUNC_2 (struct device*,char*,int) ;
 struct device* FUNC_3 (struct i2400m*) ;
 int FUNC_4 (struct i2400m*,struct i2400m_l3l4_hdr const*,size_t) ;
 int FUNC_5 (struct i2400m*,struct sk_buff*,struct i2400m_l3l4_hdr const*,size_t) ;
 int FUNC_6 (struct i2400m*,void const*,size_t) ;
 unsigned int FUNC_7 (int ) ;
 scalar_t__ FUNC_8 (int ) ;
 int FUNC_9 (int *,char*,struct i2400m_l3l4_hdr const*,size_t,int ) ;

__attribute__((used)) static
void FUNC_10(struct i2400m *VAR_2, struct sk_buff *VAR_3,
     const void *VAR_4, size_t VAR_5)
{
 int VAR_6;
 struct device *VAR_7 = FUNC_3(VAR_2);
 const struct i2400m_l3l4_hdr *VAR_8 = VAR_4;
 unsigned VAR_9;

 VAR_6 = FUNC_4(VAR_2, VAR_8, VAR_5);
 if (VAR_6 < 0) {
  FUNC_2(VAR_7, "HW BUG? device sent a bad message: %d\n",
   VAR_6);
  goto error_check;
 }
 VAR_9 = FUNC_7(VAR_8->type);
 FUNC_1(1, VAR_7, "%s 0x%04x: %zu bytes\n",
   VAR_9 & VAR_1 ? "REPORT" : "CMD/SET/GET",
   VAR_9, VAR_5);
 FUNC_0(2, VAR_7, VAR_8, VAR_5);
 if (VAR_9 & VAR_1) {
  FUNC_5(VAR_2, VAR_3, VAR_8, VAR_5);
  if (FUNC_8(VAR_2->trace_msg_from_user))
   FUNC_9(&VAR_2->wimax_dev, "echo",
      VAR_8, VAR_5, VAR_0);
  VAR_6 = FUNC_9(&VAR_2->wimax_dev, ((void*)0), VAR_8, VAR_5,
       VAR_0);
  if (VAR_6 < 0)
   FUNC_2(VAR_7, "error sending report to userspace: %d\n",
    VAR_6);
 } else
  FUNC_6(VAR_2, VAR_4, VAR_5);
error_check:
 return;
}
