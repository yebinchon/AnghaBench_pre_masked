
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct i2400m_l3l4_hdr {void* version; scalar_t__ length; void* type; } ;
struct i2400m {int dummy; } ;
struct device {int dummy; } ;
typedef int strerr ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (struct sk_buff*) ;
 int FUNC_1 (struct sk_buff*) ;
 void* FUNC_2 (int ) ;
 int FUNC_3 (struct device*,char*,int) ;
 struct device* FUNC_4 (struct i2400m*) ;
 int FUNC_5 (int ,char*,int) ;
 struct sk_buff* FUNC_6 (struct i2400m*,struct i2400m_l3l4_hdr*,int) ;
 int FUNC_7 (struct i2400m_l3l4_hdr*) ;
 int FUNC_8 (struct sk_buff*) ;
 struct i2400m_l3l4_hdr* FUNC_9 (int,int ) ;
 int FUNC_10 (struct sk_buff*) ;

int FUNC_11(struct i2400m *VAR_4)
{
 int VAR_5;
 struct device *VAR_6 = FUNC_4(VAR_4);
 struct sk_buff *VAR_7;
 struct i2400m_l3l4_hdr *VAR_8;
 char VAR_9[32];

 VAR_5 = -VAR_0;
 VAR_8 = FUNC_9(sizeof(*VAR_8), VAR_1);
 if (VAR_8 == ((void*)0))
  goto error_alloc;
 VAR_8->type = FUNC_2(VAR_3);
 VAR_8->length = 0;
 VAR_8->version = FUNC_2(VAR_2);

 VAR_7 = FUNC_6(VAR_4, VAR_8, sizeof(*VAR_8));
 VAR_5 = FUNC_1(VAR_7);
 if (FUNC_0(VAR_7)) {
  FUNC_3(VAR_6, "Failed to issue 'exit idle' command: %d\n",
   VAR_5);
  goto error_msg_to_dev;
 }
 VAR_5 = FUNC_5(FUNC_10(VAR_7),
      VAR_9, sizeof(VAR_9));
 FUNC_8(VAR_7);
error_msg_to_dev:
 FUNC_7(VAR_8);
error_alloc:
 return VAR_5;

}
