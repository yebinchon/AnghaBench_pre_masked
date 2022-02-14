
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct i2400m_tlv_hdr {int length; } ;
struct i2400m_l3l4_hdr {void* version; void* length; void* type; } ;
struct i2400m {int dummy; } ;
struct device {int dummy; } ;
typedef int strerr ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 scalar_t__ FUNC_0 (struct sk_buff*) ;
 int FUNC_1 (struct sk_buff*) ;
 int FUNC_2 (int) ;
 void* FUNC_3 (unsigned int) ;
 int FUNC_4 (int,struct device*,char*,struct i2400m*,struct i2400m_tlv_hdr const**,size_t,int) ;
 int FUNC_5 (int,struct device*,char*,struct i2400m*,struct i2400m_tlv_hdr const**,size_t) ;
 int FUNC_6 (struct device*,char*,unsigned int,...) ;
 struct device* FUNC_7 (struct i2400m*) ;
 int FUNC_8 (int ,char*,int) ;
 struct sk_buff* FUNC_9 (struct i2400m*,void*,int) ;
 int FUNC_10 (void*) ;
 int FUNC_11 (struct sk_buff*) ;
 void* FUNC_12 (int,int ) ;
 int FUNC_13 (int ) ;
 int FUNC_14 (void*,struct i2400m_tlv_hdr const*,unsigned int) ;
 int FUNC_15 (struct sk_buff*) ;

__attribute__((used)) static int FUNC_16(struct i2400m *VAR_4,
      const struct i2400m_tlv_hdr **VAR_5,
      size_t VAR_6)
{
 int VAR_7;
 struct device *VAR_8 = FUNC_7(VAR_4);
 struct sk_buff *VAR_9;
 struct i2400m_l3l4_hdr *VAR_10;
 char VAR_11[32];
 unsigned VAR_12, VAR_13, VAR_14;
 const struct i2400m_tlv_hdr *VAR_15;
 void *VAR_16, *VAR_17;

 FUNC_5(3, VAR_8, "(i2400m %p arg %p args %zu)\n", VAR_4, VAR_5, VAR_6);
 VAR_7 = 0;
 if (VAR_6 == 0)
  goto none;


 VAR_13 = 0;
 for (VAR_12 = 0; VAR_12 < VAR_6; VAR_12++) {
  VAR_15 = VAR_5[VAR_12];
  VAR_13 += sizeof(*VAR_15) + FUNC_13(VAR_15->length);
 }
 FUNC_2(VAR_12 >= 9);


 VAR_7 = -VAR_0;
 VAR_16 = FUNC_12(sizeof(*VAR_10) + VAR_13, VAR_1);
 if (VAR_16 == ((void*)0))
  goto error_alloc;
 VAR_10 = VAR_16;
 VAR_10->type = FUNC_3(VAR_3);
 VAR_10->length = FUNC_3(VAR_13);
 VAR_10->version = FUNC_3(VAR_2);


 VAR_17 = VAR_16 + sizeof(*VAR_10);
 for (VAR_12 = 0; VAR_12 < VAR_6; VAR_12++) {
  VAR_15 = VAR_5[VAR_12];
  VAR_14 = sizeof(*VAR_15) + FUNC_13(VAR_15->length);
  FUNC_14(VAR_17, VAR_15, VAR_14);
  VAR_17 += VAR_14;
 }


 VAR_9 = FUNC_9(VAR_4, VAR_16, sizeof(*VAR_10) + VAR_13);
 VAR_7 = FUNC_1(VAR_9);
 if (FUNC_0(VAR_9)) {
  FUNC_6(VAR_8, "Failed to issue 'init config' command: %d\n",
   VAR_7);

  goto error_msg_to_dev;
 }
 VAR_7 = FUNC_8(FUNC_15(VAR_9),
      VAR_11, sizeof(VAR_11));
 if (VAR_7 < 0)
  FUNC_6(VAR_8, "'init config' (0x%04x) command failed: %d - %s\n",
   VAR_3, VAR_7, VAR_11);
 FUNC_11(VAR_9);
error_msg_to_dev:
 FUNC_10(VAR_16);
error_alloc:
none:
 FUNC_4(3, VAR_8, "(i2400m %p arg %p args %zu) = %d\n",
  VAR_4, VAR_5, VAR_6, VAR_7);
 return VAR_7;

}
